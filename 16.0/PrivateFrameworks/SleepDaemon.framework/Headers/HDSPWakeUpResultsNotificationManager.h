// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONMANAGER_H
#define HDSPWAKEUPRESULTSNOTIFICATIONMANAGER_H

@class NSDate, NSString, HKSHGoalProgressEngine, NAFuture;
@protocol HDSPWakeUpResultsNotificationStateMachineInfoProvider, HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, NAScheduler, HDSPActivityScheduler, HDSPSleepEventDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPWakeUpResultsNotificationStateMachine.h"

@interface HDSPWakeUpResultsNotificationManager : NSObject <HDSPWakeUpResultsNotificationStateMachineInfoProvider, HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) HKSHGoalProgressEngine *goalProgressEngine; // ivar: _goalProgressEngine
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isWakeUpResultsNotificationEnabled;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NAFuture *queryResultFuture; // ivar: _queryResultFuture
@property (readonly, nonatomic) NSObject<HDSPActivityScheduler> *retryAttemptScheduler; // ivar: _retryAttemptScheduler
@property (weak, nonatomic) NSObject<HDSPSleepEventDelegate> *sleepEventDelegate; // ivar: _sleepEventDelegate
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


+(id)retryActivity;
+(id)retryCriteria;
-(BOOL)_isDelayingForTracking;
-(BOOL)_isWaitingForWakeUp;
-(CGFloat)_trackingDelayDuration;
-(id)_currentState;
-(id)_sleepScheduleModel;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 retryAttemptScheduler:(id)arg1 ;
-(id)notificationAttemptWindowForWakeUpBeforeDate:(id)arg0 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(id)performImmediateQueryForNotification;
-(id)upcomingEventsDueAfterDate:(id)arg0 ;
-(void)_updateState;
-(void)_withLock:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)executeQuery;
-(void)postResultsNotification;
-(void)scheduleRetryAttempt;
-(void)scheduleStateExpiration;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)startObservingProtectedHealthDataAvailability;
-(void)stopObservingProtectedHealthDataAvailability;
-(void)unscheduleRetryAttempt;
-(void)unscheduleStateExpiration;


@end


#endif