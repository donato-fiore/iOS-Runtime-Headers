// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONSTATEMACHINE_H
#define HDSPWAKEUPRESULTSNOTIFICATIONSTATEMACHINE_H

@class HKSPPersistentStateMachine, NSString;
@protocol HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPWakeUpResultsNotificationStateMachineEventHandler, NAScheduler, HDSPWakeUpResultsNotificationStateMachineInfoProvider;


#import "HDSPWakeUpResultsNotificationDelayingForTrackingState.h"
#import "HDSPWakeUpResultsNotificationDisabledState.h"
#import "HDSPWakeUpResultsNotificationNeedsProtectedDataState.h"
#import "HDSPWakeUpResultsNotificationNotifiedState.h"
#import "HDSPWakeUpResultsNotificationQueryingState.h"
#import "HDSPWakeUpResultsNotificationWaitingForRetryState.h"
#import "HDSPWakeUpResultsNotificationWaitingForWakeUpState.h"

@interface HDSPWakeUpResultsNotificationStateMachine : HKSPPersistentStateMachine <HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPWakeUpResultsNotificationStateMachineEventHandler>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationDelayingForTrackingState *delayingForTrackingState; // ivar: _delayingForTrackingState
@property (readonly, weak, nonatomic) NSObject<HDSPWakeUpResultsNotificationStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationDisabledState *disabledState; // ivar: _disabledState
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HDSPWakeUpResultsNotificationStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) BOOL isDelayingForTracking;
@property (readonly, nonatomic) BOOL isWaitingForWakeUp;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationNeedsProtectedDataState *needsProtectedDataState; // ivar: _needsProtectedDataState
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationNotifiedState *notifiedState; // ivar: _notifiedState
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationQueryingState *queryingState; // ivar: _queryingState
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationWaitingForRetryState *waitingForRetryState; // ivar: _waitingForRetryState
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationWaitingForWakeUpState *waitingForWakeUpState; // ivar: _waitingForWakeUpState


-(NSUInteger)loggingCategory;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(void)didPostResultsNotification;
-(void)executeQuery;
-(void)postResultsNotification;
-(void)protectedHealthDataDidBecomeAvailable;
-(void)queryDidComplete;
-(void)queryDidFailWithError:(id)arg0 ;
-(void)retryAttemptEventDue;
-(void)scheduleRetryAttempt;
-(void)scheduleTrackingDelay;
-(void)startObservingProtectedHealthDataAvailability;
-(void)stopObservingProtectedHealthDataAvailability;
-(void)trackingDelayEventDue;
-(void)unscheduleRetryAttempt;
-(void)unscheduleTrackingDelay;
-(void)wakeUpDidOccur;


@end


#endif