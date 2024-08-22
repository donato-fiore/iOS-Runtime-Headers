// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DISTRIBUTEDNOTIFICATIONPOSTER_H
#define DISTRIBUTEDNOTIFICATIONPOSTER_H


#import <Foundation/Foundation.h>


@interface DistributedNotificationPoster : NSObject



+(void)postNotificationForAlarmActiveChanged;
+(void)postNotificationForAlarmsEdited;
+(void)postNotificationForUserPreferences:(BOOL)arg0 localNotifications:(BOOL)arg1 ;


@end


#endif