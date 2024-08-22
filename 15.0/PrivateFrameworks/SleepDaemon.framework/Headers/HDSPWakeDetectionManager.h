// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWAKEDETECTIONMANAGER_H
#define HDSPWAKEDETECTIONMANAGER_H

@class NSDate, NSString, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel, NSArray;
@protocol HDSPWakeDetectorDelegate, HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepScheduleStateObserver, HDSPSleepEventProvider, HDSPTimeChangeObserver, NAScheduler, HDSPSleepEventDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPWakeDetectionStateMachine.h"

@interface HDSPWakeDetectionManager : NSObject <HDSPWakeDetectorDelegate, HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepScheduleStateObserver, HDSPSleepEventProvider, HDSPTimeChangeObserver>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inDetectionWindow;
@property (readonly, nonatomic) BOOL isDetecting;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (weak, nonatomic) NSObject<HDSPSleepEventDelegate> *sleepEventDelegate; // ivar: _sleepEventDelegate
@property (readonly, nonatomic) BOOL sleepModeIsOff;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly, nonatomic) HDSPWakeDetectionStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (readonly, nonatomic) os_unfair_lock_s wakeDetectionLock; // ivar: _wakeDetectionLock
@property (readonly, nonatomic) NSArray *wakeDetectors; // ivar: _wakeDetectors


+(id)platformSpecificProviders:(id)arg0 ;
-(BOOL)sleepFeaturesEnabled;
-(id)_currentState;
-(id)_detectionWindowForDetector:(id)arg0 afterDate:(id)arg1 nextWakeUp:(id)arg2 ;
-(id)_detectionWindowsAfterDate:(id)arg0 nextWakeUp:(id)arg1 ;
-(id)detectionWindowForDetector:(id)arg0 afterDate:(id)arg1 ;
-(id)detectionWindowsAfterDate:(id)arg0 ;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 wakeDetectorProviders:(id)arg1 ;
-(id)nextWakeUpAfterDate:(id)arg0 ;
-(id)upcomingEventsDueAfterDate:(id)arg0 ;
-(id)upcomingStartDetectionDateAfterDate:(id)arg0 ;
-(id)upcomingStartDetectionDatesAfterDate:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)earlyWakeUpWasNotifiedRemotely;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)postWakeDetectionNotification;
-(void)scheduleWakeDetection;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)startWakeDetection;
-(void)stopWakeDetection;
-(void)unscheduleWakeDetection;
-(void)updateState;
-(void)wakeDetector:(id)arg0 didDetectWakeUpEventOnDate:(id)arg1 ;


@end


#endif