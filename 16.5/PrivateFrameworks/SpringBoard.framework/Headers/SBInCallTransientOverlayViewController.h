// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINCALLTRANSIENTOVERLAYVIEWCONTROLLER_H
#define SBINCALLTRANSIENTOVERLAYVIEWCONTROLLER_H

@class UIView<SBApplicationSceneBackgroundView>, SBSUIInCallSceneClientSettingsDiffInspector, NSString;
@protocol SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBIdleTimerCoordinating, BSInvalidatable, SBInCallTransientOverlayViewControllerDelegate;


#import "SBTransientOverlayViewController.h"
#import "SBIdleTimerCoordinatorHelper.h"
#import "_SBInCallProxySceneBackgroundView.h"
#import "SBDeviceApplicationSceneViewController.h"
#import "SBInCallSettings.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBInCallTransientOverlayViewController : SBTransientOverlayViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBIdleTimerCoordinating, BSInvalidatable>

 {
    UIView<SBApplicationSceneBackgroundView> *_existingSceneBackgroundView;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    _SBInCallProxySceneBackgroundView *_proxySceneBackgroundView;
    SBDeviceApplicationSceneViewController *_sceneViewController;
    SBInCallSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBInCallTransientOverlayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (nonatomic) BOOL shouldIgnoreHomeIndicatorAutoHiddenClientSettings; // ivar: _shouldIgnoreHomeIndicatorAutoHiddenClientSettings
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)allowsStackingOverlayContentAbove;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)isContentOpaque;
-(BOOL)prefersEmbeddedDisplayPresentation;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(BOOL)preventsSystemApertureSuppressionFromBelow;
-(BOOL)shouldDisableBanners;
-(BOOL)shouldUseSceneBasedKeyboardFocus;
-(BOOL)supportsAlwaysOnDisplay;
-(NSInteger)preferredLockedGestureDismissalStyle;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredUnlockedGestureDismissalStyle;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(NSUInteger)preferredStatusBarStyleOverridesToSuppress;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_inCallSceneClientSettingsDiffInspector;
-(id)associatedBundleIdentifiersToSuppressInSystemAperture;
-(id)associatedSceneIdentifiersToSuppressInSystemAperture;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)hostedSceneIdentityTokens;
-(id)idleTimerProvider:(id)arg0 didProposeBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)initWithSceneHandle:(id)arg0 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)preferredDisplayLayoutElementIdentifier;
-(id)sceneDeactivationPredicate:(SEL)arg0 ;
-(id)succinctDescriptionBuilder;
-(int)serviceProcessIdentifier;
-(void)dealloc;
-(void)handleGestureDismissal;
-(void)invalidate;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarAlphaTo:(CGFloat)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarHiddenTo:(BOOL)arg1 withAnimation:(NSInteger)arg2 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleOverridesToSuppressTo:(NSUInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleTo:(NSInteger)arg1 ;
-(void)setContainerOrientation:(NSInteger)arg0 ;
-(void)setIdleTimerCoordinator:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif