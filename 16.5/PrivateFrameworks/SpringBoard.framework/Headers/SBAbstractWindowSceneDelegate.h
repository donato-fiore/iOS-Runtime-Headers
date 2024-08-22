// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBABSTRACTWINDOWSCENEDELEGATE_H
#define SBABSTRACTWINDOWSCENEDELEGATE_H

@class SBFTraitsArbiter, SBFZStackParticipant, BNBannerController, CSCoverSheetViewController, NSString, UIWindow, SBFZStackResolver;
@protocol SBWindowSceneContextProviding, SBFZStackParticipantDelegate, SBWindowSceneDelegate, BSInvalidatable, SBAssistantSceneControlling, FBSDisplayLayoutPublishing, SBTransientOverlayPresenting, SBUILockStateProviding;

#import <Foundation/Foundation.h>

#import "SBTraitsPipelineManager.h"
#import "SBHardwareButtonZStackClient.h"
#import "SBWindowSceneContext.h"
#import "SBAlertItemsController.h"
#import "SBDisplayAppInteractionEventSource.h"
#import "SBControlCenterController.h"
#import "SBCoverSheetPresentationManager.h"
#import "SBFloatingDockController.h"
#import "SBMainDisplayLayoutStateManager.h"
#import "SBSceneLayoutStateProvider.h"
#import "SBLayoutStateTransitionCoordinator.h"
#import "SBLockScreenManager.h"
#import "SBLockedPointerManager.h"
#import "SBMedusaHostedKeyboardWindowController.h"
#import "SBModalAlertPresentationCoordinator.h"
#import "SBModalLibraryController.h"
#import "SBModalUIFluidDismissGestureManager.h"
#import "SBWindowScenePIPManager.h"
#import "SBReachabilitySceneController.h"
#import "SBRecordingIndicatorManager.h"
#import "SBSceneManager.h"
#import "SBSwitcherController.h"
#import "SBSystemApertureController.h"
#import "SBSystemGestureManager.h"
#import "SBSystemPointerInteractionManager.h"
#import "SBTransientUIInteractionManager.h"
#import "SBWallpaperController.h"
#import "SBWindowHidingManager.h"
#import "SBWindowScene.h"

@interface SBAbstractWindowSceneDelegate : NSObject <SBWindowSceneContextProviding, SBFZStackParticipantDelegate, SBWindowSceneDelegate>

 {
    SBFTraitsArbiter *_traitsArbiter;
    SBTraitsPipelineManager *_pipelineManager;
    SBHardwareButtonZStackClient *_hardwareButtonZStackClient;
    SBFZStackParticipant *_keyShortcutHUDZStackParticipant;
    SBWindowSceneContext *_windowSceneContext;
    id<BSInvalidatable> *_pointerAssertion;
    BOOL _invalidated;
}


@property (readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property (readonly, nonatomic) SBDisplayAppInteractionEventSource *appInteractionEventSource;
@property (readonly, nonatomic) NSObject<SBAssistantSceneControlling> *assistantController;
@property (readonly, nonatomic) BNBannerController *bannerController;
@property (readonly, nonatomic) SBControlCenterController *controlCenterController;
@property (readonly, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<FBSDisplayLayoutPublishing> *displayLayoutPublisher;
@property (readonly, nonatomic) SBFloatingDockController *floatingDockController;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBMainDisplayLayoutStateManager *layoutStateManager;
@property (readonly, nonatomic) SBSceneLayoutStateProvider *layoutStateProvider;
@property (readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;
@property (readonly, nonatomic) SBLockedPointerManager *lockedPointerManager;
@property (readonly, nonatomic) SBMedusaHostedKeyboardWindowController *medusaHostedKeyboardWindowController;
@property (readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (readonly, nonatomic) SBModalLibraryController *modalLibraryController;
@property (readonly, nonatomic) SBModalUIFluidDismissGestureManager *modalUIFluidDismissGestureManager;
@property (readonly, nonatomic) SBWindowScenePIPManager *pictureInPictureManager;
@property (readonly, nonatomic) SBReachabilitySceneController *reachabilityController;
@property (readonly, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager;
@property (readonly, nonatomic) SBSceneManager *sceneManager;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBSwitcherController *switcherController;
@property (readonly, nonatomic) SBSystemApertureController *systemApertureController;
@property (readonly, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (readonly, nonatomic) SBSystemPointerInteractionManager *systemPointerInteractionManager;
@property (readonly, nonatomic) SBFTraitsArbiter *traitsArbiter;
@property (readonly, nonatomic) SBTraitsPipelineManager *traitsPipelineManager;
@property (readonly, nonatomic) NSObject<SBTransientOverlayPresenting> *transientOverlayPresenter;
@property (readonly, nonatomic) SBTransientUIInteractionManager *transientUIInteractionManager;
@property (readonly, nonatomic) NSObject<SBUILockStateProviding> *uiLockStateProvider;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;
@property (retain, nonatomic) UIWindow *window;
@property (readonly, nonatomic) SBWindowHidingManager *windowHidingManager;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene
@property (readonly, nonatomic) SBFZStackResolver *zStackResolver;


-(BOOL)_isWindowContentVisible:(id)arg0 ;
-(BOOL)_shouldHandleWindowWillBecomeHiddenForRole:(id)arg0 ;
-(BOOL)_shouldManageParticipantWithRole:(id)arg0 ;
-(BOOL)isInvalidated;
-(CGFloat)_windowScene:(id)arg0 levelForWindow:(id)arg1 preferredLevel:(CGFloat)arg2 ;
-(id)_acquireParticipantForWindow:(id)arg0 reason:(id)arg1 ;
-(id)_createTraitsArbiterWithPipelineManager:(id)arg0 ;
-(id)_participantForWindow:(id)arg0 ;
-(id)_pipelineManager;
-(id)_sbWindowSceneContext;
-(id)_traitsDelegateForWindowRole:(id)arg0 ;
-(id)init;
-(void)_commonSceneSetupForScene:(id)arg0 ;
-(void)_configureForConnectingWindowScene:(id)arg0 windowSceneContext:(id)arg1 ;
-(void)_handleKeyShortcutHUDVisibilityDidDismiss;
-(void)_handleKeyShortcutHUDVisibilityDidPresent;
-(void)_setParticipant:(id)arg0 forWindow:(id)arg1 ;
-(void)_windowScene:(id)arg0 window:(id)arg1 didUpdateSupportedInterfaceOrientations:(NSUInteger)arg2 preferredOrientation:(NSInteger)arg3 ;
-(void)_windowScene:(id)arg0 windowDidBecomeVisible:(id)arg1 ;
-(void)_windowScene:(id)arg0 windowWillAttach:(id)arg1 ;
-(void)_windowScene:(id)arg0 windowWillBecomeHidden:(id)arg1 ;
-(void)_windowScene:(id)arg0 windowWillBecomeVisible:(id)arg1 ;
-(void)_windowScene:(id)arg0 windowWillDetach:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)setInvalidated:(BOOL)arg0 ;
-(void)windowScene:(id)arg0 didUpdateCoordinateSpace:(id)arg1 interfaceOrientation:(NSInteger)arg2 traitCollection:(id)arg3 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif