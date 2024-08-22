// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC23FITNESSCOACHINGSERVICES29NOTIFICATIONSUPPRESSIONSYSTEM_H
#define _TTC23FITNESSCOACHINGSERVICES29NOTIFICATIONSUPPRESSIONSYSTEM_H

@class SwiftObject;
@protocol FCCXPCActivitySchedulerDelegate;



@interface _TtC23FitnessCoachingServices29NotificationSuppressionSystem : SwiftObject <FCCXPCActivitySchedulerDelegate>

 {
    ? dateProvider;
    ? notificationSuppressionStore;
    ? scheduler;
}




-(void)scheduler:(id)arg0 performActivityWithName:(id)arg1 completion:(id)arg2 ;


@end


#endif