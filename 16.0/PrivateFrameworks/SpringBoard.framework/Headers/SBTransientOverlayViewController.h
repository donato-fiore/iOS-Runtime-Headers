// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRANSIENTOVERLAYVIEWCONTROLLER_H
#define SBTRANSIENTOVERLAYVIEWCONTROLLER_H

@class UIViewController, UIView, SBFHomeGrabberSettings, UIWindow, UIStatusBar, SBSDisplayLayoutElement, NSSet, UIStatusBarStyleRequest, NSString, NSNumber, _UILegibilitySettings, UIColor;
@protocol SBHomeGrabberDelegate, BSDescriptionProviding, SBButtonEventsHandler, SBFIdleTimerBehaviorProviding, SBIdleTimerProviding, SBSDisplayLayoutElementProviding, BSInvalidatable, SBIdleTimerCoordinating, SBTransientOverlayViewControllerDelegate;


#import "SBKeyboardHomeAffordanceAssertion.h"
#import "SBHomeGrabberView.h"
#import "SBDisplayItem.h"

@interface SBTransientOverlayViewController : UIViewController <SBHomeGrabberDelegate, BSDescriptionProviding, SBButtonEventsHandler, SBFIdleTimerBehaviorProviding, SBIdleTimerProviding, SBSDisplayLayoutElementProviding>

 {
    NSInteger _appearanceUpdateIgnoreCount;
    UIView *_contentContainerView;
    UIView *_homeGrabberContainerView;
    UIView *_dimmingView;
    NSInteger _contentOverlayInsetUpdateIgnoreCount;
    SBFHomeGrabberSettings *_grabberSettings;
    BOOL _hasPreservedInputViews;
    BOOL _isDisplayLayoutElementActive;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    UIWindow *_keyboardHomeAffordanceAssertionWindow;
    UIView *_presentationBackgroundView;
    NSInteger _presentationPrefersHomeGrabberHidden;
    UIStatusBar *_statusBar;
    NSInteger _keyboardVisible;
    SBSDisplayLayoutElement *_displayLayoutElement;
    id<BSInvalidatable> *_displayLayoutElementAssertion;
}


@property (readonly, nonatomic) BOOL allowsStackingOverlayContentAbove; // ivar: _allowsStackingOverlayContentAbove
@property (readonly, copy, nonatomic) NSSet *associatedBundleIdentifiersToSuppressInSystemAperture; // ivar: _associatedBundleIdentifiersToSuppressInSystemAperture
@property (readonly, copy, nonatomic) NSSet *associatedSceneIdentifiersToSuppressInSystemAperture; // ivar: _associatedSceneIdentifiersToSuppressInSystemAperture
@property (readonly, nonatomic, getter=isAttachedToWindowedAccessory) BOOL attachedToWindowedAccessory; // ivar: _attachedToWindowedAccessory
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) BOOL canBecomeLocalFirstResponder; // ivar: _canBecomeLocalFirstResponder
@property (nonatomic) NSInteger containerOrientation; // ivar: _containerOrientation
@property (readonly, nonatomic, getter=isContentOpaque) BOOL contentOpaque; // ivar: _contentOpaque
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *currentStatusBarStyleRequest; // ivar: _currentStatusBarStyleRequest
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dismissesForCoverSheetPresentation; // ivar: _dismissesForCoverSheetPresentation
@property (readonly, nonatomic) BOOL dismissesSiriForPresentation;
@property (readonly, nonatomic, getter=_displayLayoutElement) SBSDisplayLayoutElement *displayLayoutElement;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (retain, nonatomic) SBHomeGrabberView *grabberView; // ivar: _grabberView
@property (readonly, nonatomic) BOOL hasVisibleStatusBar;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger homeAffordanceSuppression;
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (readonly, nonatomic) BOOL isIgnoringAppearanceUpdates;
@property (readonly, nonatomic) BOOL isIgnoringContentOverlayInsetUpdates;
@property (readonly, nonatomic) int pictureInPictureProcessIdentifier; // ivar: _pictureInPictureProcessIdentifier
@property (readonly, copy, nonatomic) NSString *preferredDisplayLayoutElementIdentifier;
@property (readonly, nonatomic) NSInteger preferredLockedGestureDismissalStyle; // ivar: _preferredLockedGestureDismissalStyle
@property (readonly, copy, nonatomic) NSNumber *preferredSceneDeactivationReasonValue;
@property (readonly, copy, nonatomic) _UILegibilitySettings *preferredStatusBarLegibilitySettings;
@property (readonly, nonatomic) NSUInteger preferredStatusBarStyleOverridesToSuppress; // ivar: _preferredStatusBarStyleOverridesToSuppress
@property (readonly, nonatomic) NSInteger preferredUnlockedGestureDismissalStyle; // ivar: _preferredUnlockedGestureDismissalStyle
@property (readonly, nonatomic) BOOL prefersEmbeddedDisplayPresentation; // ivar: _prefersEmbeddedDisplayPresentation
@property (readonly, nonatomic) BOOL prefersProximityDetectionEnabled; // ivar: _prefersProximityDetectionEnabled
@property (readonly, nonatomic) BOOL prefersStatusBarActivityItemVisible; // ivar: _prefersStatusBarActivityItemVisible
@property (readonly, nonatomic) BOOL prefersWindowHitTestingDisabled; // ivar: _prefersWindowHitTestingDisabled
@property (nonatomic) BOOL presentationAllowsHomeGrabberAutoHide; // ivar: _presentationAllowsHomeGrabberAutoHide
@property (nonatomic) CGFloat presentationContentCornerRadius; // ivar: _presentationContentCornerRadius
@property (nonatomic) CGAffineTransform presentationContentTransform; // ivar: _presentationContentTransform
@property (nonatomic) CGFloat presentationDimmingAlpha;
@property (readonly, nonatomic) UIColor *presentationDimmingViewColor;
@property (nonatomic) BOOL presentationDimmingViewHidden; // ivar: _presentationDimmingViewHidden
@property (nonatomic) CGFloat presentationHomeGrabberAdditionalEdgeSpacing; // ivar: _presentationHomeGrabberAdditionalEdgeSpacing
@property (nonatomic) CGFloat presentationHomeGrabberAlpha; // ivar: _presentationHomeGrabberAlpha
@property (nonatomic) CGAffineTransform presentationHomeGrabberTransform; // ivar: _presentationHomeGrabberTransform
@property (readonly, nonatomic) BOOL presentationPrefersStatusBarHidden; // ivar: _presentationPrefersStatusBarHidden
@property (readonly, nonatomic) BOOL preservesAppSwitcherDuringPresentationAndDismissal;
@property (readonly, nonatomic) BOOL preventsClippingToBounds;
@property (readonly, copy, nonatomic) SBDisplayItem *representedDisplayItem; // ivar: _representedDisplayItem
@property (readonly, copy, nonatomic) id *sceneDeactivationPredicate;
@property (readonly, nonatomic) BOOL shouldDisableBanners; // ivar: _shouldDisableBanners
@property (readonly, nonatomic) BOOL shouldDisableControlCenter; // ivar: _shouldDisableControlCenter
@property (readonly, nonatomic) BOOL shouldDisableInteractiveScreenshotGesture; // ivar: _shouldDisableInteractiveScreenshotGesture
@property (readonly, nonatomic) BOOL shouldDisableOrientationUpdates; // ivar: _shouldDisableOrientationUpdates
@property (readonly, nonatomic) BOOL shouldDisableReachability; // ivar: _shouldDisableReachability
@property (readonly, nonatomic) BOOL shouldDisableSiri; // ivar: _shouldDisableSiri
@property (readonly, nonatomic) BOOL shouldPendAlertItems; // ivar: _shouldPendAlertItems
@property (readonly, nonatomic) BOOL shouldPreventDragAndDrop; // ivar: _shouldPreventDragAndDrop
@property (readonly, nonatomic) BOOL shouldUseSceneBasedKeyboardFocus; // ivar: _shouldUseSceneBasedKeyboardFocus
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAlwaysOnDisplay; // ivar: _supportsAlwaysOnDisplay
@property (weak, nonatomic) NSObject<SBTransientOverlayViewControllerDelegate> *transientOverlayDelegate; // ivar: _transientOverlayDelegate
@property (readonly, nonatomic) CGRect windowedAccessoryCutoutFrameInScreen; // ivar: _windowedAccessoryCutoutFrameInScreen


-(BOOL)_isKeyboardVisibleForSpringBoard;
-(BOOL)handleDoubleHeightStatusBarTap;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)isPresentedByProcess:(id)arg0 ;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg0 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(CGFloat)additionalEdgeSpacingForHomeGrabberView:(id)arg0 ;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_newHomeGrabberViewWithFrame:(struct CGRect )arg0 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)hostedSceneIdentityTokens;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGRect )_currentStatusBarFrameForStyle:(NSInteger)arg0 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)_applyStatusBarStyleRequestWithInitialStatusBarSettings:(id)arg0 ;
-(void)_invalidateKeyboardHomeAffordanceAssertion;
-(void)_keyboardWillHideNotification:(id)arg0 ;
-(void)_keyboardWillShowNotification:(id)arg0 ;
-(void)_updateGrabberViewConfiguration;
-(void)_updateGrabberViewHiddenConfigurationAnimated:(BOOL)arg0 ;
-(void)addPresentationBackgroundView:(id)arg0 ;
-(void)beginIgnoringAppearanceUpdates;
-(void)beginIgnoringContentOverlayInsetUpdates;
-(void)dealloc;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg0 windowedAccessoryCutoutFrameInScreen:(struct CGRect )arg1 ;
-(void)endIgnoringAppearanceUpdates;
-(void)endIgnoringContentOverlayInsetUpdates;
-(void)handleGestureDismissal;
-(void)handlePictureInPictureDidBegin;
-(void)handleWillShowKeyboard:(BOOL)arg0 ;
-(void)preserveInputViewsAnimated:(BOOL)arg0 ;
-(void)removePresentationBackgroundView:(id)arg0 ;
-(void)restoreInputViewsAnimated:(BOOL)arg0 ;
-(void)setHomeGrabberPointerClickDelegate:(id)arg0 ;
-(void)setNeedsContentOpaqueUpdate;
-(void)setNeedsFeaturePolicyUpdate;
-(void)setNeedsGestureDismissalStyleUpdate;
-(void)setNeedsIdleTimerReset;
-(void)setNeedsOrientationUpdatesDisabledUpdate;
-(void)setNeedsProximityDetectionUpdate;
-(void)setNeedsSceneDeactivationUpdate;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(void)setNeedsWindowHitTestingUpdate;
-(void)setPresentationPrefersHomeGrabberHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateDisplayLayoutElementWithBuilder:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif