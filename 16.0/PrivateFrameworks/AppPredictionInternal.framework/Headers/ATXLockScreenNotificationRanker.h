// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLOCKSCREENNOTIFICATIONRANKER_H
#define ATXLOCKSCREENNOTIFICATIONRANKER_H


#import <Foundation/Foundation.h>


@interface ATXLockScreenNotificationRanker : NSObject



+(id)rankNewNotificationIntoNotificationArrays:(id)arg0 newNotification:(id)arg1 notificationArrayIndex:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)rankNewNotificationIntoNotificationArrays:(id)arg0 newNotificationArray:(id)arg1 newNotification:(id)arg2 error:(*id)arg3 ;
+(id)rankNotificationArrays:(id)arg0 error:(*id)arg1 ;


@end


#endif