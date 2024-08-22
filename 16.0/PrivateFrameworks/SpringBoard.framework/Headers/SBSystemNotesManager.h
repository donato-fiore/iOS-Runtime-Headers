// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMNOTESMANAGER_H
#define SBSYSTEMNOTESMANAGER_H

@class FBSSceneSpecification, NSString, FBSceneManager, PTTestRecipe, __UIKeyboardArbiterManager, UIApplicationSceneDeactivationManager, BSServiceConnection, NSMutableSet, BSAbsoluteMachTimer, MCProfileConnection, NSCountedSet, NSMutableDictionary;
@protocol SBSystemNotesPresentationRequestServerDelegate, SBSystemNotesInteractionManagerDataSource, SBSystemNotesInteractionManagerDelegate, SBSystemNotesContentViewControllerDelegate, PTSettingsKeyPathObserver, SBSSystemNotesPresentationClientToServerInterface, MCProfileConnectionObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBPIPController.h"
#import "SBPIPSceneContentAdapter.h"
#import "SBApplicationController.h"
#import "SBMainDisplaySceneManager.h"
#import "SBSystemNotesPresentationRequestServer.h"
#import "SBMainWorkspace.h"
#import "SBSystemNotesSettings.h"
#import "SBKeyboardSuppressionManager.h"
#import "SBTransientUIInteractionManager.h"
#import "SBSystemNotesInteractionManager.h"
#import "SBKeyboardDismissalManager.h"
#import "SBPIPContentViewLayoutSettings.h"
#import "SBPIPSceneContentContainerAdapter.h"

@interface SBSystemNotesManager : NSObject <SBSystemNotesPresentationRequestServerDelegate, SBSystemNotesInteractionManagerDataSource, SBSystemNotesInteractionManagerDelegate, SBSystemNotesContentViewControllerDelegate, PTSettingsKeyPathObserver, SBSSystemNotesPresentationClientToServerInterface, MCProfileConnectionObserver>

 {
    FBSSceneSpecification *_sceneSpecification;
    NSString *_launchBundleID;
    SBPIPController *_pipController;
    SBPIPSceneContentAdapter *_sceneContentAdapter;
    SBApplicationController *_applicationController;
    SBMainDisplaySceneManager *_sceneManager;
    FBSceneManager *_fbSceneManager;
    SBSystemNotesPresentationRequestServer *_systemNotesRequestServer;
    PTTestRecipe *_systemNotesTestRecipe;
    SBMainWorkspace *_workspace;
    SBSystemNotesSettings *_pipSettings;
    SBKeyboardSuppressionManager *_keyboardSuppressionManager;
    SBTransientUIInteractionManager *_transientUIInteractionManager;
    SBSystemNotesInteractionManager *_interactionManager;
    SBKeyboardDismissalManager *_keyboardDismissalManager;
    SBPIPContentViewLayoutSettings *_contentViewLayoutSettings;
    __UIKeyboardArbiterManager *_keyboardArbiterManager;
    UIApplicationSceneDeactivationManager *_sceneDeactivationManager;
    BSServiceConnection *_presentedConnection;
    os_unfair_lock_s _lock;
    NSMutableSet *_lock_connections;
    id<BSInvalidatable> *_pegasusWindowLevelAssertion;
    BSAbsoluteMachTimer *_interactionLoggingTimer;
    NSUInteger _interactionRequests;
    MCProfileConnection *_managedProfileConnection;
    NSCountedSet *_displaysWithPendingScreenshots;
    NSMutableDictionary *_displaysToScreenshotFlashWindows;
    SBPIPSceneContentContainerAdapter *_presentedContainerAdapter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_handleCreateNoteRequestWithMode:(NSInteger)arg0 presentationSource:(NSUInteger)arg1 ;
-(BOOL)_handleCreateNoteRequestWithPresentationContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)interactionManager:(id)arg0 requestsPresentationWithContext:(id)arg1 ;
-(NSInteger)_currentPresentationMode;
-(NSInteger)currentPresentationModeForInteractionManager:(id)arg0 ;
-(id)_createContentViewControllerForPresentationContext:(id)arg0 error:(*id)arg1 ;
-(id)_presentedContainerViewController;
-(id)_presentedNotesContentViewController;
-(id)_sceneBundleIdentifierForNewConfiguration;
-(id)_sceneHandleForApplication:(id)arg0 sceneSpecification:(id)arg1 ;
-(id)currentContentViewLayoutSettingsForInteractionManager:(id)arg0 ;
-(id)initWithControllerCoordinator:(id)arg0 workspace:(id)arg1 sceneManager:(id)arg2 keyboardArbiterManager:(id)arg3 fbSceneManager:(id)arg4 sceneDeactivationManager:(id)arg5 transientUIInteractionManager:(id)arg6 keyboardSuppressionManager:(id)arg7 keyboardDismissalManager:(id)arg8 applicationController:(id)arg9 systemGestureManager:(id)arg10 idleTimerCoordinator:(id)arg11 managedProfileConnection:(id)arg12 ;
-(id)interactionManager:(id)arg0 requestsStashAssertionForReason:(id)arg1 ;
-(id)launchBundleIDForInteractionManager:(id)arg0 ;
-(id)presentedContainerViewControllerForInteractionManager:(id)arg0 ;
-(id)presentedPIPContentViewControllerForInteractionManager:(id)arg0 ;
-(id)server:(id)arg0 targetForNewClientConnection:(id)arg1 ;
-(void)_addContentViewControllerToPIPHierarchy:(id)arg0 contentViewLayoutSettings:(id)arg1 ;
-(void)_dismissNotesWithReason:(NSUInteger)arg0 ;
-(void)_dismissNotesWithReason:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_reloadLaunchBundleID;
-(void)_setPresentedConnection:(id)arg0 ;
-(void)_tearDownContainerViewControllerForSceneHandle:(id)arg0 ;
-(void)activateConfiguration:(id)arg0 ;
-(void)contentViewController:(id)arg0 didChangeToPresentationMode:(NSInteger)arg1 ;
-(void)contentViewController:(id)arg0 didReceiveScreenshotRequestForDisplays:(id)arg1 completion:(id)arg2 ;
-(void)contentViewControllerDidReceiveTapToExpand:(id)arg0 ;
-(void)contentViewControllerWantsDismissal:(id)arg0 forReason:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)interactionManager:(id)arg0 requestsNotesDismissalForSource:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)interactionManager:(id)arg0 requestsStartSuppressingKeyboardForReason:(id)arg1 ;
-(void)interactionManager:(id)arg0 requestsStopSuppressingKeyboardForReason:(id)arg1 ;
-(void)interactionManager:(id)arg0 requestsUpdatePresentationMode:(NSInteger)arg1 ;
-(void)presentWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)server:(id)arg0 connectionDidInvalidate:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)showOrHideForKeyCommand:(id)arg0 ;


@end


#endif