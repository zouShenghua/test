//
//  LSType.h
//  discover
//
//  Created by zoushenghua on 2021/7/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSType : NSObject

typedef enum{
   kAddType,
   kEditType,
}kAddEidtType;

//搜索页面跳转
typedef enum{
   kHomeSearchType,
   kTaobaoSearchType,
}SearchType;


@end

NS_ASSUME_NONNULL_END
