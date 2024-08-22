// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXAPPLAUNCHLOCATIONGUARDEDDATA_H
#define _ATXAPPLAUNCHLOCATIONGUARDEDDATA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _ATXAppLaunchLocationGuardedData : NSObject {
    id *waitForUnlockNotificationToken;
    NSDictionary *appLaunchCountMap;
    NSDictionary *appIntentLaunchCountMap;
    NSDictionary *intentLaunchCountMap;
    NSDictionary *appForAllIntentsLaunchCountMap;
    NSDictionary *totalLaunchCountMap;
    NSDictionary *totalIntentLaunchCountMap;
}




-(void)dealloc;


@end


#endif