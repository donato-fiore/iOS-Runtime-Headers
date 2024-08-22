// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKUPNEXTWIDGETCACHEMANAGER_H
#define WLKUPNEXTWIDGETCACHEMANAGER_H


#import <Foundation/Foundation.h>


@interface WLKUpNextWidgetCacheManager : NSObject



+(BOOL)consumePendingInvalidation;
+(void)requestInvalidation;
+(void)requestReload;


@end


#endif