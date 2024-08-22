// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTSTATEMACHINE_H
#define BLSHBACKLIGHTSTATEMACHINE_H

@class BLSBacklightChangeEvent, NSHashTable, NSString;
@protocol BLSHBacklightHostObserving, BLSHBacklightPlatformProviderObserver, BLSHDisableAlwaysOnProvider, BLSHBacklightHostTelemetrySource, BLSHBacklightStateMachineEventPerformerDelegate, BLSHOnSystemSleepActionDelegate, BLSBacklightProxy, BLSHBacklightHostObservable, BLSHOSInterfaceProviding, BLSHSystemActivityAsserting, BSTimerScheduleQuerying><BSInvalidatable, BLSHBacklightStateMachineEventPerforming, BLSHBacklightHostTelemetryDelegate;

#import <Foundation/Foundation.h>

#import "BLSHOnSystemSleepAction.h"

@interface BLSHBacklightStateMachine : NSObject <BLSHBacklightHostObserving, BLSHBacklightPlatformProviderObserver, BLSHDisableAlwaysOnProvider, BLSHBacklightHostTelemetrySource, BLSHBacklightStateMachineEventPerformerDelegate, BLSHOnSystemSleepActionDelegate, BLSBacklightProxy, BLSHBacklightHostObservable>

 {
    id<BLSHOSInterfaceProviding> *_osInterfaceProvider;
    BLSHOnSystemSleepAction *_sleepAction;
    id *_lock_sleepActionCompletion;
    BLSBacklightChangeEvent *_lock_transitioningEvent;
    id<BLSHSystemActivityAsserting> *_lock_activeOnAPAwakeAssertion;
    id<BLSHSystemActivityAsserting> *_lock_performEventAPAwakeAssertion;
    id<BSTimerScheduleQuerying><BSInvalidatable> *_lock_activeOnAPAwakeTimeoutTimer;
    NSHashTable *_lock_observers;
    os_unfair_lock_s _lock;
    NSUInteger _lock_nextEventID;
    NSInteger _lock_activityState;
    BOOL _lock_alwaysOnEnabledResolved;
    BOOL _lock_alwaysOnEnabledByPlatform;
    BOOL _lock_alwaysOnDisabledByAssertion;
    BOOL _lock_alwaysOnEnabledAfterInitialization;
    BOOL _lock_alwaysOnSuppressed;
    BOOL _lock_notifyingObserversWillTransitionToState;
    BOOL _suppressionSupported;
    BOOL _deviceSupportsAlwaysOn;
}


@property (readonly, nonatomic) BLSBacklightChangeEvent *activeTransitionEvent; // ivar: _activeTransitionEvent
@property (nonatomic, getter=isAlwaysOnDisabledByAssertion) BOOL alwaysOnDisabledByAssertion;
@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic, getter=isAlwaysOnSuppressed) BOOL alwaysOnSuppressed;
@property (readonly, nonatomic) NSInteger backlightState;
@property (readonly, nonatomic) NSUInteger backlightStateChangeTimestamp;
@property (readonly, copy, nonatomic) NSString *backlightStateDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<BLSHBacklightStateMachineEventPerforming> *eventPerformer; // ivar: _eventPerformer
@property (readonly, nonatomic) NSInteger flipbookState;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) NSObject<BLSHBacklightHostTelemetryDelegate> *telemetryDelegate; // ivar: _telemetryDelegate
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


-(id)initWithPlatformProvider:(id)arg0 eventPerformer:(id)arg1 osInterfaceProvider:(id)arg2 ;
-(id)performChangeRequest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)backlight:(id)arg0 didCompleteUpdateToFlipbookState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)dealloc;
-(void)eventPerformer:(id)arg0 didUpdateDisplayStateForState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)eventPerformer:(id)arg0 didUpdateVisualContentsToBeginTransitionToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)eventPerformer:(id)arg0 willUpdateDisplayStateForState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)platformProvider:(id)arg0 didChangeAlwaysOnSetting:(BOOL)arg1 ;
-(void)platformProviderDidDetectSignificantUserInteraction:(id)arg0 ;
-(void)registerHandlersForService:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)systemSleepAction:(id)arg0 performWithCompletion:(id)arg1 ;
-(void)systemSleepAction:(id)arg0 systemWillWakeForReason:(id)arg1 ;


@end


#endif