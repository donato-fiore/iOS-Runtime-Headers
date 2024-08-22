// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINDISPLAYSCENEMANAGER_H
#define SBMAINDISPLAYSCENEMANAGER_H

@class UIApplicationSceneClientSettingsDiffInspector, FBSSceneClientSettingsDiffInspector, NSMutableSet, NSHashTable, NSMutableDictionary, UIWindow, NSArray, NSString;
@protocol SBIdleTimerCoordinating, SBSuspendedUnderLockManagerDelegate, SBIdleTimerProviding, BSInvalidatable;


#import "SBSceneManager.h"
#import "SBMainDisplayPolicyAggregator.h"
#import "SBFaceContactExpectationManager.h"
#import "SBSuspendedUnderLockManager.h"
#import "SBMainDisplayLayoutStateManager.h"
#import "SBMainDisplayLayoutState.h"
#import "SBMainDisplaySceneLayoutViewController.h"

@interface SBMainDisplaySceneManager : SBSceneManager <SBIdleTimerCoordinating, SBSuspendedUnderLockManagerDelegate, SBIdleTimerProviding>

 {
    SBMainDisplayPolicyAggregator *_policyAggregator;
    UIApplicationSceneClientSettingsDiffInspector *_internalClientSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    FBSSceneClientSettingsDiffInspector *_externalClientSettingsDiffInspector;
    FBSSceneClientSettingsDiffInspector *_keyboardLayersClientSettingsDiffInspector;
    NSInteger _validInterfaceOrientation;
    NSUInteger _validInterfaceOrientationChangeCount;
    NSUInteger _processedValidInterfaceOrientationChangeCount;
    SBFaceContactExpectationManager *_faceContactExpectationManager;
    NSMutableSet *_requiredContextIdentifiersForMedusaDraggingDestination;
    BOOL _didAddSceneLayoutViewControllerWindowContextIdentifier;
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
    NSHashTable *_preventAdditionalMedusaSnapshotsAssertions;
    NSMutableDictionary *_sceneIdentifierToIgnoreSuspendedUnderLockAssertions;
    id<BSInvalidatable> *stateCaptureInvalidatable;
    BOOL _isKeyboardDocked;
}


@property (readonly, nonatomic, getter=_isKeyboardVisibleForSpringBoard) BOOL _isKeyboardVisibleForSpringBoard;
@property (readonly, nonatomic, getter=_isUsingMedusaHostedKeyboardWindow) BOOL _isUsingMedusaHostedKeyboardWindow; // ivar: _isUsingMedusaHostedKeyboardWindow
@property (readonly, nonatomic) SBMainDisplayLayoutStateManager *_layoutStateManager;
@property (readonly, nonatomic) UIWindow *_medusaHostedKeyboardWindow; // ivar: _medusaHostedKeyboardWindow
@property (readonly, nonatomic) NSArray *_requiredContextIdentifiersForMedusaDraggingDestination;
@property (readonly, nonatomic) SBMainDisplayLayoutState *currentLayoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (readonly, nonatomic) SBMainDisplayPolicyAggregator *policyAggregator;
@property (readonly, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspendedUnderLock) BOOL suspendedUnderLock;


+(Class)_applicationSceneHandleClass;
+(Class)_sceneLayoutWindowClass;
-(BOOL)__shouldRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_animateGeometryChangesForExternalForegroundApplicationScenes;
-(BOOL)_anyExternalForegroundApplicationScenesHasDynamicSupportedInterfaceOrientations;
-(BOOL)_handleAction:(id)arg0 forScene:(id)arg1 ;
-(BOOL)_isExternalForegroundScene:(id)arg0 ;
-(BOOL)_shouldAutoHostScene:(id)arg0 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg0 updatedClientSettingsDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)_shouldRequestSnapshotActionsForScene:(id)arg0 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(BOOL)suspendedUnderLockManager:(id)arg0 shouldPreventSuspendUnderLockForScene:(id)arg1 ;
-(id)_activeAndVisibleSceneIdentifiersForApplication:(id)arg0 ;
-(id)_appClientSettingsDiffInspector;
-(id)_createRootWindowScenePresentationBinder;
-(id)_externalClientSettingsDiffInspector;
-(id)_identifierForApplication:(id)arg0 ;
-(id)_internalClientSettingsDiffInspector;
-(id)_keyboardLayersClientSettingsDiffInspector;
-(id)_newSceneIdentifierForBundleIdentifier:(id)arg0 ;
-(id)_newSceneIdentifierForBundleIdentifier:(id)arg0 supportsMultiwindow:(BOOL)arg1 ;
-(id)_newSceneLayoutViewController;
-(id)_proposeIdleTimerBehaviorForReason:(id)arg0 ;
-(id)_sceneIdentifierForBundleIdentifier:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)_sceneIdentityForApplication:(id)arg0 createPrimaryIfRequired:(BOOL)arg1 sceneSessionRole:(id)arg2 ;
-(id)_sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(BOOL)arg3 preferNewScene:(BOOL)arg4 visibleIdentifiers:(id)arg5 excludingIdentifiers:(id)arg6 sceneSessionRole:(id)arg7 ;
-(id)_snapshotRequestsForSceneHandle:(id)arg0 settings:(id)arg1 ;
-(id)acquireIgnoreSuspendedUnderLockAssertionForSceneIdentifier:(id)arg0 reason:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)existingSceneHandleForPersistenceIdentifier:(id)arg0 ;
-(id)existingSceneHandleForScene:(id)arg0 ;
-(id)existingSceneHandleForSceneIdentity:(id)arg0 ;
-(id)externalApplicationSceneHandles;
-(id)externalForegroundApplicationSceneHandles;
-(id)fetchOrCreateApplicationSceneHandleForRequest:(id)arg0 ;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)initWithReference:(id)arg0 ;
-(id)newMedusaHostedKeyboardWindowLevelAssertionWithPriority:(NSUInteger)arg0 windowLevel:(CGFloat)arg1 ;
-(id)newSceneIdentityForApplication:(id)arg0 ;
-(id)preventTakingAdditionalMedusaSnapshotsForBackgroundingScenesWithReason:(id)arg0 ;
-(id)runningApplicationScenes:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 excludingIdentifiers:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 visibleIdentifiers:(id)arg4 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 sceneSessionRole:(id)arg3 ;
-(id)suspendedUnderLockManager:(id)arg0 sceneHandleForScene:(id)arg1 ;
-(id)suspendedUnderLockManagerDisplayConfiguration:(id)arg0 ;
-(id)suspendedUnderLockManagerVisibleScenes:(id)arg0 ;
-(void)_addMedusaDraggingDestinationWindow:(id)arg0 ;
-(void)_application:(id)arg0 initiatedChangefromInterfaceOrientation:(NSInteger)arg1 toInterfaceOrientation:(NSInteger)arg2 scene:(id)arg3 sceneSettings:(id)arg4 transitionContext:(id)arg5 ;
-(void)_attemptAutorotationOfExternalForegroundApplicationScenesToInterfaceOrientation:(NSInteger)arg0 ;
-(void)_deviceOrientationChanged:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_noteDidChangeToVisibility:(NSUInteger)arg0 previouslyExisted:(BOOL)arg1 forScene:(id)arg2 ;
-(void)_noteDidCommitUpdateForScene:(id)arg0 ;
-(void)_removeMedusaDraggingDestinationWindow:(id)arg0 ;
-(void)_scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)_scene:(id)arg0 interceptUpdateWithNewSettings:(id)arg1 ;
-(void)_scene:(id)arg0 willUpdateWithSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)_updateDeviceOrientation:(NSInteger)arg0 ifNeededForScene:(id)arg1 ;
-(void)_updateExternalForegroundApplicationScenesToDeviceOrientation:(NSInteger)arg0 ;
-(void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(NSInteger)arg0 force:(BOOL)arg1 prefersTouchCancellationDisabled:(BOOL)arg2 addDefaultAnimationSettings:(BOOL)arg3 customAnimationSettings:(id)arg4 validator:(id)arg5 ;
-(void)_updateLevelAndBackgroundSettingsForScene:(id)arg0 transitionContext:(id)arg1 ;
-(void)_updateMedusaHostedKeyboardWindow;
-(void)_updateMedusaHostedKeyboardWindowForScene:(id)arg0 isForeground:(*BOOL)arg1 ;
-(void)_updateValidInterfaceOrientationForTransitionContext:(id)arg0 ;
-(void)_userInterfaceStyleArbiterStyleChanged:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)createSceneForApplication:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;


@end


#endif