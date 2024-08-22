// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI18NOTIFICATIONPOLICY_H
#define _TTC15HEALTHRECORDSUI18NOTIFICATIONPOLICY_H

@protocol WDNotificationPolicy, UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI18NotificationPolicy : NSObject <WDNotificationPolicy, UNUserNotificationCenterDelegate>





-(id)init;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif