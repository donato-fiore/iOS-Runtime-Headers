// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBIDLETIMERGLOBALSTATEMONITOR_H
#define SBIDLETIMERGLOBALSTATEMONITOR_H

@class NSHashTable, SBLocalDefaults, NSNumber, NSString;
@protocol SBPocketStateMonitorObserver, _SBIdleTimerGlobalSettingMonitorDelegate, SBIdleTimerServiceDelegate, SBFThermalConditionObserver, SBFThermalBlockProvider, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBIdleTimerService.h"
#import "_SBIdleTimerGlobalNumericSettingMonitor.h"
#import "_SBIdleTimerGlobalBoolSettingMonitor.h"
#import "SBIdleTimerAggregateClientConfiguration.h"

@interface SBIdleTimerGlobalStateMonitor : NSObject <SBPocketStateMonitorObserver, _SBIdleTimerGlobalSettingMonitorDelegate, SBIdleTimerServiceDelegate, SBFThermalConditionObserver>

 {
    os_unfair_lock_s _observerLock;
    NSHashTable *_observers;
    SBIdleTimerService *_idleTimerService;
    SBLocalDefaults *_localDefaults;
    id<SBFThermalBlockProvider> *_thermalBlockProvider;
    id *_dontLockEver;
    id *_dontDimOrLockOnAC;
    id *_disableAttentionAwareness;
    id *_minimumLockscreenIdleTime;
    _SBIdleTimerGlobalNumericSettingMonitor *_autoLockTimeoutMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_batterySaverModeMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_onACPowerMonitor;
    BOOL _autoDimDisabled;
    BOOL _thermalBlocked;
    id<BSInvalidatable> *_stateCaptureAssertion;
}


@property (readonly, nonatomic) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration; // ivar: _aggregateClientConfiguration
@property (readonly, nonatomic, getter=isAutoDimDisabled) BOOL autoDimDisabled;
@property (readonly, nonatomic) NSNumber *autoLockTimeout;
@property (readonly, nonatomic, getter=isBatterySaverModeActive) BOOL batterySaverModeActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableAttentionAwareness;
@property (readonly, nonatomic) BOOL dontDimOrLockOnAC;
@property (readonly, nonatomic) BOOL dontLockEver;
@property (readonly, nonatomic, getter=isFaceDownOnTable) BOOL faceDownOnTable; // ivar: _faceDownOnTable
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat minimumLockscreenIdleTime;
@property (readonly, nonatomic, getter=isOnACPower) BOOL onACPower;
@property (readonly, nonatomic) NSInteger pocketState; // ivar: _pocketState
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isThermalBlocked) BOOL thermalBlocked;


+(id)sharedInstance;
-(id)_boolMonitorForProperty:(SEL)arg0 inDefaults:(id)arg1 fetchingWith:(id)arg2 ;
-(id)_init;
-(id)_initWithLocalDefaults:(id)arg0 profileConnection:(id)arg1 pocketStateMonitor:(id)arg2 uiController:(id)arg3 idleTimerService:(id)arg4 thermalBlockProvider:(id)arg5 ;
-(id)_stateCaptureDescription;
-(id)_timeIntervalMonitorForProperty:(SEL)arg0 inDefaults:(id)arg1 fetchingWith:(id)arg2 ;
-(void)_addStateCaptureHandlers;
-(void)_updateAutoDimDisabled;
-(void)_updateFaceDownOnTable;
-(void)_updateObserversForReason:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)idleTimerGlobalSettingMonitor:(id)arg0 changedForReason:(id)arg1 ;
-(void)idleTimerServiceTimeoutAssertionsDidChange:(id)arg0 ;
-(void)pocketStateMonitor:(id)arg0 pocketStateDidChangeFrom:(NSInteger)arg1 to:(NSInteger)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)thermalBlockStatusChanged:(id)arg0 ;


@end


#endif