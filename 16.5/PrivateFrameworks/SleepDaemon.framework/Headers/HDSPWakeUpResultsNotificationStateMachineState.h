// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONSTATEMACHINESTATE_H
#define HDSPWAKEUPRESULTSNOTIFICATIONSTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPWakeUpResultsNotificationStateMachineEventHandler, HDSPWakeUpResultsNotificationStateMachineInfoProvider;


#import "HDSPWakeUpResultsNotificationStateMachine.h"

@interface HDSPWakeUpResultsNotificationStateMachineState : HKSPPersistentStateMachineState <HDSPWakeUpResultsNotificationStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HDSPWakeUpResultsNotificationStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled;
@property (readonly, weak, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly) Class superclass;


-(id)nextStateWithContext:(*id)arg0 ;
-(void)didPostResultsNotification;
-(void)protectedHealthDataDidBecomeAvailable;
-(void)queryDidComplete;
-(void)queryDidFailWithError:(id)arg0 ;
-(void)retryAttemptEventDue;
-(void)stateDidExpireWithContext:(id)arg0 ;
-(void)wakeUpDidOccur;


@end


#endif