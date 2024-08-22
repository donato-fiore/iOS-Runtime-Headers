// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTTRANSITIONSTATEMACHINE_H
#define BLSHBACKLIGHTTRANSITIONSTATEMACHINE_H

@class NSHashTable, BLSAssertion, BLSBacklightChangeEvent, NSString;
@protocol BLSHBacklightInactiveEnvironmentSessionUpdating, BLSHBacklightDisplayStateMachineDelegate, BLSHBacklightEnvironmentStateMachineDelegate, BLSHDisableFlipbookProvider, BLSHBacklightSceneHostEnvironmentObserver, BLSHHostEnvironmentAmendSceneSettingsDelegate, BLSHAlwaysOnPresentationEngineDelegate, BLSHBacklightStateMachineEventPerforming, BLSHWatchdogDelegate, BLSFlipbookDiagnosticsProviding, BLSHInactiveBudgetPolicing_Private, BLSHOSInterfaceProviding, BSInvalidatable, BLSHBacklightStateMachineEventPerformerDelegate, BLSHSystemActivityAsserting, BLSHBacklightPlatformProvider;

#import <Foundation/Foundation.h>

#import "BLSHBacklightEnvironmentStateMachine.h"
#import "BLSHAlwaysOnPresentationEngine.h"
#import "BLSHPresentationDateSpecifier.h"
#import "BLSHPendingEnvironmentUpdateOperation.h"
#import "BLSHPendingUpdatePresentation.h"
#import "BLSHPendingUpdateToSpecifier.h"
#import "BLSHPendingUpdateDisplayMode.h"
#import "BLSHEnsureFlipbookCurrentOperation.h"
#import "BLSHBacklightAggregateState.h"
#import "BLSHBacklightMutableTargetState.h"
#import "BLSHBacklightDisplayStateMachine.h"
#import "BLSHBacklightInactiveEnvironmentSession.h"

@interface BLSHBacklightTransitionStateMachine : NSObject <BLSHBacklightInactiveEnvironmentSessionUpdating, BLSHBacklightDisplayStateMachineDelegate, BLSHBacklightEnvironmentStateMachineDelegate, BLSHDisableFlipbookProvider, BLSHBacklightSceneHostEnvironmentObserver, BLSHHostEnvironmentAmendSceneSettingsDelegate, BLSHAlwaysOnPresentationEngineDelegate, BLSHBacklightStateMachineEventPerforming, BLSHWatchdogDelegate, BLSFlipbookDiagnosticsProviding>

 {
    os_unfair_lock_s _lock;
    NSHashTable *_observers;
    id<BLSHInactiveBudgetPolicing_Private> *_inactiveBudgetPolicy;
    id<BLSHOSInterfaceProviding> *_osInterfaceProvider;
    BLSHBacklightEnvironmentStateMachine *_environmentStateMachine;
    BLSHAlwaysOnPresentationEngine *_alwaysOnPresentationEngine;
    id<BSInvalidatable> *_onMain_watchdogTimer;
    BLSAssertion *_touchLockAssertion;
    id<BLSHBacklightStateMachineEventPerformerDelegate> *_performerDelegate;
    NSInteger _backlightState;
    NSUInteger _backlightStateChangeTimestamp;
    id<BLSHSystemActivityAsserting> *_transitionAPAwakeAssertion;
    BLSHPresentationDateSpecifier *_lock_stopEngineOnScreenSpecifier;
    BLSHPendingEnvironmentUpdateOperation *_lock_pendingEnvironmentUpdate;
    BLSHPendingUpdatePresentation *_lock_pendingUpdatePresentation;
    BLSHPendingUpdateToSpecifier *_lock_pendingUpdateToSpecifier;
    BLSHPendingUpdateDisplayMode *_lock_pendingUpdateDisplayMode;
    BLSHEnsureFlipbookCurrentOperation *_lock_ensureFlipbookCurrentOperation;
    BLSHBacklightAggregateState *_currentState;
    BLSHBacklightMutableTargetState *_lock_targetState;
    BLSBacklightChangeEvent *_pendingPrewarmedEvent;
    BLSBacklightChangeEvent *_queuedEventToPerform;
    BLSBacklightChangeEvent *_willUpdateDisplayNotifiedTriggerEvent;
    NSInteger _lastSteadyStateFlipbookState;
    BOOL _lock_forcedUnanimated;
    BOOL _lock_animating;
    NSUInteger _stateHandler;
    BOOL _flipbookDisabled;
    BOOL _lock_safeToUnblank;
}


@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) NSInteger backlightState;
@property (readonly, nonatomic) NSUInteger backlightStateChangeTimestamp;
@property (readonly, copy, nonatomic) NSString *backlightStateDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BLSHBacklightDisplayStateMachine *displayStateMachine; // ivar: _displayStateMachine
@property (nonatomic, getter=isFlipbookDisabled) BOOL flipbookDisabled;
@property (readonly, nonatomic) NSInteger flipbookState;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<BLSHBacklightStateMachineEventPerformerDelegate> *performerDelegate;
@property (readonly, nonatomic) NSObject<BLSHBacklightPlatformProvider> *platformProvider; // ivar: _platformProvider
@property (nonatomic) BOOL safeToUnblank;
@property (readonly, nonatomic) BLSHBacklightInactiveEnvironmentSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


-(BOOL)hasEnsureFlipbookCurrent;
-(BOOL)hostEnvironment:(id)arg0 didAmendSceneSettings:(id)arg1 ;
-(id)abortContext;
-(id)allFlipbookFrames;
-(id)frameOnGlassNow;
-(id)frameOnGlassWhenFlipbookLastCancelled;
-(id)frameWithUUID:(id)arg0 ;
-(id)identifier;
-(id)initWithPlatformProvider:(id)arg0 osInterfaceProvider:(id)arg1 inactiveBudgetPolicy:(id)arg2 ;
-(id)osInterfaceProvider;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)displayState:(id)arg0 didUpdateToBrightnessCurve:(NSInteger)arg1 ;
-(void)displayState:(id)arg0 didUpdateToMode:(NSInteger)arg1 ;
-(void)environmentStateMachine:(id)arg0 didBeginUpdateToState:(NSInteger)arg1 ;
-(void)environmentStateMachine:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 ;
-(void)environmentStateMachine:(id)arg0 didUpdateToPresentation:(id)arg1 ;
-(void)environmentStateMachine:(id)arg0 didUpdateToSpecifier:(id)arg1 ;
-(void)hostEnvironment:(id)arg0 hostDidSetAlwaysOnEnabledForEnvironment:(BOOL)arg1 ;
-(void)hostEnvironment:(id)arg0 hostDidSetLiveUpdating:(BOOL)arg1 ;
-(void)hostEnvironment:(id)arg0 hostDidSetUnrestrictedFramerateUpdates:(BOOL)arg1 ;
-(void)inactiveEnvironmentSession:(id)arg0 updateToPresentation:(id)arg1 ;
-(void)performEvent:(id)arg0 ;
-(void)presentationEngine:(id)arg0 didUpdateToCurrentWithSpecifier:(id)arg1 ;
-(void)prewarmEvent:(id)arg0 ;
-(void)registerHandlersForService:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif