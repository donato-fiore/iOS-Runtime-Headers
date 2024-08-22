// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREMOTETRANSIENTOVERLAYVIEWCONTROLLER_H
#define SBREMOTETRANSIENTOVERLAYVIEWCONTROLLER_H

@class UIView, BSAnimationSettings, NSString;
@protocol SBRemoteTransientOverlayHostViewControllerDelegate, SBIdleTimerCoordinating, SBRemoteTransientOverlayViewControllerDelegate;


#import "SBTransientOverlayViewController.h"
#import "SBRemoteTransientOverlayHostViewController.h"
#import "SBIdleTimerCoordinatorHelper.h"
#import "SBTransientOverlayWallpaperEffectView.h"

@interface SBRemoteTransientOverlayViewController : SBTransientOverlayViewController <SBRemoteTransientOverlayHostViewControllerDelegate, SBIdleTimerCoordinating>

 {
    SBRemoteTransientOverlayHostViewController *_contentViewController;
    UIView *_contentViewWrapperView;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    BOOL _isPresented;
    NSInteger _lastWallpaperStyle;
    BSAnimationSettings *_pendingAnimationSettings;
    NSInteger _wallpaperEffectAnimations;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
}


@property (readonly, nonatomic, getter=isActivatingForSiri) BOOL activatingForSiri;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRemoteTransientOverlayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isScreenshotMarkup;
@property (readonly, nonatomic) NSInteger preferredDismissalAnimationStyle; // ivar: _preferredDismissalAnimationStyle
@property (readonly, nonatomic) BOOL shouldInvalidateWhenDeactivated;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSwitcherEligible) BOOL switcherEligible;
@property (nonatomic) NSInteger wallpaperVariant; // ivar: _wallpaperVariant


+(void)requestViewControllerForAlertDefinition:(id)arg0 connectionHandler:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_needsWallpaperEffectView;
-(BOOL)allowsStackingOverlayContentAbove;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)handleDoubleHeightStatusBarTap;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)hasServiceProcessIdentifier:(int)arg0 ;
-(BOOL)isContentOpaque;
-(BOOL)isPresentedByProcess:(id)arg0 ;
-(BOOL)prefersStatusBarActivityItemVisible;
-(BOOL)resignFirstResponder;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(BOOL)shouldDisableBanners;
-(BOOL)shouldDisableControlCenter;
-(BOOL)shouldDisableInteractiveScreenshotGesture;
-(BOOL)shouldDisableOrientationUpdates;
-(BOOL)shouldDisableReachability;
-(BOOL)shouldDisableSiri;
-(BOOL)shouldPendAlertItems;
-(NSInteger)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(id)arg0 ;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredLockedGestureDismissalStyle;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredUnlockedGestureDismissalStyle;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(NSUInteger)preferredStatusBarStyleOverridesToCancel;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_initWithContentViewController:(id)arg0 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)preferredDisplayLayoutElementIdentifier;
-(id)preferredSceneDeactivationReasonValue;
-(id)remoteTransientOverlayHostViewController:(id)arg0 requestsActionForHandlingButtonEvents:(NSUInteger)arg1 ;
-(id)representedDisplayItem;
-(id)serviceEventDeferringToken;
-(id)succinctDescriptionBuilder;
-(int)_preferredStatusBarVisibility;
-(int)pictureInPictureProcessIdentifier;
-(int)serviceProcessIdentifier;
-(void)_configureWallpaperEffectViewWithAnimationSettings:(id)arg0 ;
-(void)_setMediaOverridePID:(int)arg0 ;
-(void)beginIgnoringAppearanceUpdates;
-(void)beginIgnoringContentOverlayInsetUpdates;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didInvalidate;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg0 windowedAccessoryCutoutFrameInScreen:(struct CGRect )arg1 ;
-(void)endIgnoringAppearanceUpdates;
-(void)endIgnoringContentOverlayInsetUpdates;
-(void)handleGestureDismissal;
-(void)handlePictureInPictureDidBegin;
-(void)prepareForActivationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)preserveInputViewsAnimated:(BOOL)arg0 ;
-(void)remoteTransientOverlayHostViewController:(id)arg0 didTerminateWithError:(id)arg1 ;
-(void)remoteTransientOverlayHostViewController:(id)arg0 requestsWallpaperEffectUpdateWithAnimationSettings:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(id)arg0 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(id)arg0 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(id)arg0 ;
-(void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(id)arg0 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(id)arg0 ;
-(void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(id)arg0 ;
-(void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(id)arg0 ;
-(void)restoreInputViewsAnimated:(BOOL)arg0 ;
-(void)setContainerOrientation:(NSInteger)arg0 ;
-(void)setIdleTimerCoordinator:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif