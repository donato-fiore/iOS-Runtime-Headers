// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMAINDISPLAYSCENEMANAGER_H
#define SBMAINDISPLAYSCENEMANAGER_H

@class UIApplicationSceneClientSettingsDiffInspector, FBSSceneClientSettingsDiffInspector, NSMutableDictionary, NSMapTable, NSString;
@protocol SBIdleTimerCoordinating, SBSuspendedUnderLockManagerDelegate, BLSSceneDelegateWithActionHandlers, SBDisplayReferenceModeStatusObserver, SBLayoutStateSceneIdentityProviderDataSource, SBIdleTimerProviding, BSInvalidatable;


#import "SBSceneManager.h"
#import "SBMainDisplayPolicyAggregator.h"
#import "SBFaceContactExpectationManager.h"
#import "SBSuspendedUnderLockManager.h"
#import "SBDisplayReferenceModeMonitor.h"
#import "SBMainDisplayLayoutState.h"

@interface SBMainDisplaySceneManager : SBSceneManager <SBIdleTimerCoordinating, SBSuspendedUnderLockManagerDelegate, BLSSceneDelegateWithActionHandlers, SBDisplayReferenceModeStatusObserver, SBLayoutStateSceneIdentityProviderDataSource, SBIdleTimerProviding>

 {
    SBMainDisplayPolicyAggregator *_policyAggregator;
    UIApplicationSceneClientSettingsDiffInspector *_internalClientSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    FBSSceneClientSettingsDiffInspector *_externalClientSettingsDiffInspector;
    NSInteger _validInterfaceOrientation;
    NSUInteger _validInterfaceOrientationChangeCount;
    NSUInteger _processedValidInterfaceOrientationChangeCount;
    SBFaceContactExpectationManager *_faceContactExpectationManager;
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
    NSMutableDictionary *_sceneIdentifierToIgnoreSuspendedUnderLockAssertions;
    id<BSInvalidatable> *stateCaptureInvalidatable;
    BOOL _isKeyboardDocked;
    SBDisplayReferenceModeMonitor *_displayReferenceModeMonitor;
    NSMapTable *_blsActionHandlersForScenes;
}


@property (readonly, nonatomic) SBMainDisplayLayoutState *currentLayoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (readonly, nonatomic) SBMainDisplayPolicyAggregator *policyAggregator;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspendedUnderLock) BOOL suspendedUnderLock;


-(BOOL)_handleAction:(id)arg0 forScene:(id)arg1 ;
-(BOOL)_isExternalForegroundScene:(id)arg0 ;
-(BOOL)_isLockscreenHostingApp:(id)arg0 ;
-(BOOL)_shouldAutoHostScene:(id)arg0 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg0 updatedClientSettingsDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(BOOL)suspendedUnderLockManager:(id)arg0 shouldPreventSuspendUnderLockForScene:(id)arg1 ;
-(BOOL)suspendedUnderLockManager:(id)arg0 shouldPreventUnderLockForScene:(id)arg1 ;
-(id)_appSceneClientSettingsDiffInspector;
-(id)_externalClientSettingsDiffInspector;
-(id)_internalClientSettingsDiffInspector;
-(id)_proposeIdleTimerBehaviorForReason:(id)arg0 ;
-(id)_windowScene;
-(id)acquireIgnoreSuspendedUnderLockAssertionForSceneIdentifier:(id)arg0 reason:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)existingSceneHandleForPersistenceIdentifier:(id)arg0 ;
-(id)existingSceneHandleForScene:(id)arg0 ;
-(id)existingSceneHandleForSceneIdentity:(id)arg0 ;
-(id)externalApplicationSceneHandles;
-(id)externalForegroundApplicationSceneHandles;
-(id)fetchOrCreateApplicationSceneHandleForRequest:(id)arg0 ;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)initWithReference:(id)arg0 sceneIdentityProvider:(id)arg1 presentationBinder:(id)arg2 ;
-(id)initWithReference:(id)arg0 sceneIdentityProvider:(id)arg1 presentationBinder:(id)arg2 snapshotBehavior:(NSUInteger)arg3 ;
-(id)layoutStateManager;
-(id)runningApplicationScenes:(id)arg0 ;
-(id)sceneSnapshotRequestStrategyForSceneSnapshotRequestor:(id)arg0 ;
-(id)suspendedUnderLockManager:(id)arg0 sceneHandleForScene:(id)arg1 ;
-(id)suspendedUnderLockManagerDisplayConfiguration:(id)arg0 ;
-(id)suspendedUnderLockManagerVisibleScenes:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_noteDidChangeToVisibility:(NSUInteger)arg0 previouslyExisted:(BOOL)arg1 forScene:(id)arg2 ;
-(void)_noteDidCommitUpdateForScene:(id)arg0 ;
-(void)_scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)_scene:(id)arg0 interceptUpdateWithNewSettings:(id)arg1 ;
-(void)_scene:(id)arg0 willUpdateWithSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)_updateLevelAndBackgroundSettingsForScene:(id)arg0 transitionContext:(id)arg1 ;
-(void)addActionHandler:(id)arg0 forScene:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)displayReferenceModeStatusDidChangeForDisplayWithConfiguration:(id)arg0 newStatus:(NSInteger)arg1 ;
-(void)removeActionHandler:(id)arg0 forScene:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;


@end


#endif