// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPGOODMORNINGALERTMANAGER_H
#define HDSPGOODMORNINGALERTMANAGER_H

@class NSDate, NSString, HKSPObserverSet, HKSPSleepScheduleModel;
@protocol HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPSleepActionObserver, NAScheduler;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPGoodMorningAlertStateMachine.h"

@interface HDSPGoodMorningAlertManager : NSObject <HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPSleepActionObserver>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) BOOL goodMorningAlertEnabled;
@property (readonly, nonatomic) os_unfair_lock_s goodMorningAlertLock; // ivar: _goodMorningAlertLock
@property (readonly, nonatomic) HKSPObserverSet *goodMorningAlertObservers; // ivar: _goodMorningAlertObservers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly, nonatomic) HDSPGoodMorningAlertStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(id)_currentState;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)initWithEnvironment:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dismissAlertForGoodMorning;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)goodMorningWasDismissed;
-(void)presentAlertForGoodMorning;
-(void)removeObserver:(id)arg0 ;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)updateState;


@end


#endif