// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly, nonatomic, getter=isStateExpired) BOOL stateExpired;
@property (readonly, weak, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly) Class superclass;


-(void)didPostResultsNotification;
-(void)protectedHealthDataDidBecomeAvailable;
-(void)queryDidComplete;
-(void)queryDidFailWithError:(id)arg0 ;
-(void)retryAttemptEventDue;
-(void)trackingDelayEventDue;
-(void)updateState;
-(void)wakeUpDidOccur;


@end


#endif