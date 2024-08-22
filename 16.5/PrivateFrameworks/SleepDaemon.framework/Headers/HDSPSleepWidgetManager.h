// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPWIDGETMANAGER_H
#define HDSPSLEEPWIDGETMANAGER_H

@class HKSPThrottler, NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPSleepWidgetStateMachineInfoProvider, HDSPSleepWidgetStateMachineDelegate, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPTimeChangeObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPWidgetReloader, HDSPWidgetRelevanceDonor, NAScheduler, HDSPSleepEventDelegate;

#import <Foundation/Foundation.h>

#import "HDSPSleepWidgetStateMachine.h"
#import "HDSPEnvironment.h"

@interface HDSPSleepWidgetManager : NSObject <HDSPSleepWidgetStateMachineInfoProvider, HDSPSleepWidgetStateMachineDelegate, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPTimeChangeObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware>

 {
    os_unfair_lock_s _sleepWidgetLock;
    HDSPSleepWidgetStateMachine *_stateMachine;
    id<HDSPWidgetReloader> *_widgetReloader;
    HKSPThrottler *_reloadThrottler;
    id<HDSPWidgetRelevanceDonor> *_relevanceDonor;
    BOOL _isOverridingWidgetState;
    NSInteger _overrideState;
}


@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) NSInteger currentSleepWidgetState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL isOnboarded;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) NSObject<HDSPSleepEventDelegate> *sleepEventDelegate; // ivar: _sleepEventDelegate
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly) Class superclass;


-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 widgetReloader:(id)arg1 reloadThrottler:(id)arg2 relevanceDonor:(id)arg3 ;
-(id)upcomingEventsDueAfterDate:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)clearWidgetOverrideState;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)overrideWidgetState:(NSInteger)arg0 ;
-(void)scheduleStateExpiration;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepWidgetShouldReload;
-(void)sleepWidgetStateDidChange:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)timeZoneChangeDetected:(id)arg0 ;
-(void)unscheduleStateExpiration;
-(void)updateState;


@end


#endif