// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENEMANAGER_H
#define SBSCENEMANAGER_H

@class UIRootWindowScenePresentationBinder, FBSceneManager, NSMapTable, BSCopyingCacheSet, NSCountedSet, NSMutableSet, NSHashTable, NSString, FBSDisplayIdentity;
@protocol SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneDelegate, FBSceneManagerDelegate_Private, BSDescriptionProviding, BSInvalidatable, SBApplicationSceneHandleProviding, SBSceneLayoutSlaveTransactionProviding;

#import <Foundation/Foundation.h>

#import "SBSceneManagerReference.h"
#import "SBSceneLayoutWindow.h"
#import "SBSceneLayoutViewController.h"
#import "SBPolicyAggregator.h"
#import "SBLayoutStateManager.h"
#import "SBLayoutStateTransitionCoordinator.h"
#import "SBLayoutState.h"

@interface SBSceneManager : NSObject <SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneDelegate, FBSceneManagerDelegate_Private, BSDescriptionProviding, BSInvalidatable, SBApplicationSceneHandleProviding, SBSceneLayoutSlaveTransactionProviding>

 {
    NSInteger _state;
    UIRootWindowScenePresentationBinder *_rootWindowScenePresentationBinder;
    FBSceneManager *_sceneManager;
    SBSceneManagerReference *_selfReference;
    BOOL _hidden;
    SBSceneLayoutWindow *_window;
    SBSceneLayoutViewController *_sceneLayoutViewController;
    BOOL _layoutControllerHasVisibleElements;
    SBPolicyAggregator *_policyAggregator;
    SBLayoutStateManager *_layoutStateManager;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    NSMapTable *_persistentMapSceneIdentityToSceneHandle;
    NSMapTable *_transientMapSceneIdentityToSceneHandle;
    BSCopyingCacheSet *_allScenes;
    BSCopyingCacheSet *_daemonScenes;
    BSCopyingCacheSet *_workspaceScenes;
    BSCopyingCacheSet *_externalApplicationSceneHandles;
    BSCopyingCacheSet *_externalForegroundApplicationSceneHandles;
    BSCopyingCacheSet *_reportedExternalForegroundApplicationSceneHandles;
    NSCountedSet *_assertedBackgroundScenes;
    NSMutableSet *_outgoingSnapshots;
    NSMutableSet *_incomingSnapshots;
    NSHashTable *_observers;
    BOOL _layoutControllerCreationReentrancyGuard;
    NSMutableSet *_slaveTransactionProviders;
}


@property (readonly, nonatomic) SBLayoutStateManager *_layoutStateManager;
@property (readonly, nonatomic) SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
@property (retain, nonatomic) SBLayoutState *currentLayoutState; // ivar: _currentLayoutState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) SBPolicyAggregator *policyAggregator;
@property (readonly, nonatomic) SBSceneLayoutViewController *sceneLayoutViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) SBSceneLayoutWindow *window;


+(Class)_applicationSceneHandleClass;
+(Class)_sceneLayoutWindowClass;
-(BOOL)_handleAction:(id)arg0 forScene:(id)arg1 ;
-(BOOL)_shouldAutoHostScene:(id)arg0 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg0 updatedClientSettingsDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)_shouldRequestSnapshotActionsForScene:(id)arg0 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(id)_createRootWindowScenePresentationBinder;
-(id)_newSceneLayoutViewController;
-(id)_sceneIdentifierForBundleIdentifier:(id)arg0 ;
-(id)_sceneWindowLayoutStrategy;
-(id)_snapshotRequestsForSceneHandle:(id)arg0 settings:(id)arg1 ;
-(id)allScenes;
-(id)assertBackgroundedStatusForScenes:(id)arg0 ;
-(id)daemonScenes;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)existingSceneHandleForPersistenceIdentifier:(id)arg0 ;
-(id)existingSceneHandleForScene:(id)arg0 ;
-(id)existingSceneHandleForSceneIdentity:(id)arg0 ;
-(id)externalApplicationSceneHandles;
-(id)externalForegroundApplicationSceneHandles;
-(id)fetchOrCreateApplicationSceneHandleForRequest:(id)arg0 ;
-(id)init;
-(id)initWithReference:(id)arg0 ;
-(id)newSceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 excludingIdentifiers:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 sceneSessionRole:(id)arg3 ;
-(id)sceneManager:(id)arg0 createDefaultTransitionContextForScene:(id)arg1 ;
-(id)scenesForWorkspaceWithID:(id)arg0 ;
-(id)slaveTransactionsForTransitionRequest:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)transientApplicationSceneHandlesForApplication:(id)arg0 ;
-(void)_addReportedForegroundExternalApplicationSceneHandle:(id)arg0 ;
-(void)_doObserverCalloutWithBlock:(id)arg0 ;
-(void)_noteDidChangeToVisibility:(NSUInteger)arg0 previouslyExisted:(BOOL)arg1 forScene:(id)arg2 ;
-(void)_noteDidCommitUpdateForScene:(id)arg0 ;
-(void)_noteObserversDidInvalidate;
-(void)_reconnectSceneRemnant:(id)arg0 forProcess:(id)arg1 sceneManager:(id)arg2 ;
-(void)_removeReportedForegroundExternalApplicationSceneHandle:(id)arg0 ;
-(void)_scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)_scene:(id)arg0 interceptUpdateWithNewSettings:(id)arg1 ;
-(void)_scene:(id)arg0 willUpdateWithSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)_setupLayoutStateTransitionCoordinator:(id)arg0 ;
-(void)_updateStateForScene:(id)arg0 withSettings:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)addSlaveTransactionProvider:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)removeSlaveTransactionProvider:(id)arg0 ;
-(void)scene:(id)arg0 didApplyUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didCompleteUpdateWithContext:(id)arg1 error:(id)arg2 ;
-(void)scene:(id)arg0 didPrepareUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneLayoutController:(id)arg0 noteHasVisibleElements:(BOOL)arg1 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;


@end


#endif