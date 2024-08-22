// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATOR_H
#define HDSPSLEEPSCHEDULESTATECOORDINATOR_H

@class NSDate, NSString, HKSPObserverSet, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel;
@protocol HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSource, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPDiagnosticsProvider, HDSPSleepActionObserver, HDSPTimeChangeObserver, NAScheduler;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPSleepScheduleStateCoordinatorStateMachine.h"

@interface HDSPSleepScheduleStateCoordinator : NSObject <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSource, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPDiagnosticsProvider, HDSPSleepActionObserver, HDSPTimeChangeObserver>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly, nonatomic) os_unfair_lock_s stateMachineLock; // ivar: _stateMachineLock
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDSPSource> *targetSource;


-(BOOL)_updateEventRecordHelper:(id)arg0 sleepScheduleState:(NSUInteger)arg1 context:(id)arg2 ;
-(NSUInteger)currentSleepScheduleState;
-(id)currentState;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id)initWithEnvironment:(id)arg0 ;
-(void)_updateEventRecordForSleepScheduleState:(NSUInteger)arg0 context:(id)arg1 notifyBlock:(id)arg2 ;
-(void)_updateSleepScheduleState;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 context:(id)arg2 ;
-(void)snoozeFireDateShouldBeReset;
-(void)timeZoneChangeDetected:(id)arg0 ;
-(void)wakeNotificationWasConfirmed;
-(void)wakeUpAlarmWasDismissed;


@end


#endif