// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEVICEAPPLICATIONSCENEVIEWCONTROLLER_H
#define SBDEVICEAPPLICATIONSCENEVIEWCONTROLLER_H

@class UIApplicationSceneDeactivationAssertion, NSMutableArray, UIStatusBar, UIView, SBOrientationTransformWrapperView, UITapGestureRecognizer, SBFHomeGrabberSettings, UIView<SBApplicationSceneBackgroundView>, NSString, MTLumaDodgePillSettings, NSHashTable;
@protocol SBDeviceApplicationSceneOverlayViewProviderDelegate, SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver, SBSceneViewDelegate, UIStatusBarStyleDelegate_SpringBoardOnly, SBSceneViewStatusBarAssertionObserver, SBDeviceApplicationSceneViewControlling, BSInvalidatable, SBApplicationSceneViewControllingStatusBarDelegate, SBDeviceApplicationSceneViewControllerDelegate, SBScenePlaceholderContentContext;


#import "SBApplicationSceneViewController.h"
#import "SBSceneViewStatusBarAssertion.h"
#import "_SBStatusBarChanges.h"
#import "SBHomeGrabberView.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBDeviceApplicationSceneView.h"

@interface SBDeviceApplicationSceneViewController : SBApplicationSceneViewController <SBDeviceApplicationSceneOverlayViewProviderDelegate, SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver, SBSceneViewDelegate, UIStatusBarStyleDelegate_SpringBoardOnly, SBSceneViewStatusBarAssertionObserver, SBDeviceApplicationSceneViewControlling>

 {
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    NSMutableArray *_overlayViewProviders;
    NSMutableArray *_activeOverlayViewProviders;
    SBSceneViewStatusBarAssertion *_activeOverlayStatusBarAssertion;
    SBSceneViewStatusBarAssertion *_placeholderStatusBarAssertion;
    SBSceneViewStatusBarAssertion *_insetForHomeAffordanceStatusBarAssertion;
    UIStatusBar *_statusBar;
    UIView *_statusBarWrapperView;
    SBOrientationTransformWrapperView *_statusBarTransformView;
    UITapGestureRecognizer *_scrollToTopGestureRecognizer;
    UITapGestureRecognizer *_showDebugGestureRecognizer;
    id<BSInvalidatable> *_liveContentDisableAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    id<UIStatusBarStyleDelegate_SpringBoardOnly> *_realStatusBarStyleDelegate;
    ? _conformanceFlags;
    _SBStatusBarChanges *_statusBarChanges;
}


@property (weak, nonatomic) NSObject<SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate;
@property (retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (readonly, nonatomic) NSInteger contentInterfaceOrientation;
@property (readonly, nonatomic) CGSize contentReferenceSize;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBDeviceApplicationSceneViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger homeGrabberDisplayMode; // ivar: _homeGrabberDisplayMode
@property (retain, nonatomic) MTLumaDodgePillSettings *homeGrabberPillSettings; // ivar: _homeGrabberPillSettings
@property (readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _isInsetForHomeAffordance
@property (readonly, nonatomic) NSInteger overrideStatusBarStyle;
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentContext> *placeholderContentContext;
@property (nonatomic) BOOL rendersWhileLocked; // ivar: _rendersWhileLocked
@property (readonly, nonatomic) UIView *sceneContentView;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (copy, nonatomic) NSString *sceneMinificationFilter; // ivar: _sceneMinificationFilter
@property (nonatomic) BOOL sceneRendersAsynchronously; // ivar: _sceneRendersAsynchronously
@property (readonly, nonatomic, getter=_sceneView) SBDeviceApplicationSceneView *sceneView;
@property (nonatomic) BOOL shouldDrawStatusBarInsideSceneView; // ivar: _shouldDrawStatusBarInsideSceneView
@property (readonly, nonatomic) CGFloat statusBarAlpha;
@property (retain, nonatomic, getter=_statusBarAssertions, setter=_setStatusBarAssertions:) NSHashTable *statusBarAssertions; // ivar: _statusBarAssertions
@property (readonly) Class superclass;


-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(BOOL)_activeOverlaysWantResignActiveAssertion;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isApplicationStatusBarHidden;
-(BOOL)_shouldSuppressHomeGrabber;
-(BOOL)_statusBarHasMatchMoveAnimation;
-(BOOL)definesPresentationContext;
-(BOOL)overlayViewProviderRendersWhileLocked:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGFloat)currentStatusBarHeight;
-(NSInteger)_currentStatusBarStyle;
-(NSInteger)_currentStatusBarStyleForPartWithIdentifier:(id)arg0 ;
-(NSInteger)bestHomeAffordanceOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)leadingStatusBarStyle;
-(NSInteger)overriddenRequestedStyleFromStyle:(NSInteger)arg0 ;
-(NSInteger)statusBar:(id)arg0 styleForRequestedStyle:(NSInteger)arg1 overrides:(NSUInteger)arg2 ;
-(NSInteger)trailingStatusBarStyle;
-(NSUInteger)statusBar:(id)arg0 effectiveStyleOverridesForRequestedStyle:(NSInteger)arg1 overrides:(NSUInteger)arg2 ;
-(id)_underlyingStatusBarViewIfAvailable;
-(id)animationFactoryForImplicitTransitionFromMode:(NSInteger)arg0 toMode:(NSInteger)arg1 defaultFactory:(id)arg2 ;
-(id)initWithSceneHandle:(id)arg0 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg0 atLevel:(NSUInteger)arg1 ;
-(id)statusBarAssertionWithStatusBarSettings:(id)arg0 atLevel:(NSUInteger)arg1 ;
-(void)_addStatusBarMatchMoveAnimationForView:(id)arg0 ;
-(void)_applyStatusBarStyleOverridesToSuppress:(NSUInteger)arg0 toSceneWithIdentifier:(id)arg1 ;
-(void)_configureForCurrentSecureDisplayState;
-(void)_configureForSecureDisplay:(BOOL)arg0 ;
-(void)_configureStatusBarWithCurrentStyleRequest;
-(void)_createSceneOverlayViewProvidersIfNecessary;
-(void)_createStatusBar;
-(void)_deactivateOverlayForViewProvider:(id)arg0 ;
-(void)_destroySceneOverlayViewProviders;
-(void)_didDisableSecureDisplay;
-(void)_layoutStatusBar;
-(void)_recalculateResignActiveAssertionForActiveOverlays;
-(void)_relinquishResignActiveAssertion;
-(void)_removeStatusBar;
-(void)_removeStatusBarMatchMoveAnimation;
-(void)_setRealStatusBarStyleDelegate:(id)arg0 ;
-(void)_setStatusBarStyle:(NSInteger)arg0 ;
-(void)_setStatusBarStyle:(NSInteger)arg0 forPartWithIdentifier:(id)arg1 ;
-(void)_setupStatusBarStylesFromSceneHandle:(id)arg0 ;
-(void)_statusBarScrollToTop:(id)arg0 ;
-(void)_statusBarShowDebug:(id)arg0 ;
-(void)_statusBarTapped:(id)arg0 type:(NSInteger)arg1 ;
-(void)_updateStatusBarState;
-(void)_willEnableSecureDisplay;
-(void)activateOverlayForViewProvider:(id)arg0 ;
-(void)conformsToProtocolSBDeviceApplicationSceneViewControlling;
-(void)deactivateOverlayForViewProvider:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)invalidate;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didChangeStatusBarAvoidanceFrame:(struct CGRect )arg1 ;
-(void)sceneHandle:(id)arg0 didChangeStatusBarParts:(NSInteger)arg1 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneView:(id)arg0 changedPreferredStatusBarStyleTo:(NSInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarAlphaTo:(CGFloat)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarHiddenTo:(BOOL)arg1 withAnimation:(NSInteger)arg2 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleOverridesToSuppressTo:(NSUInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleTo:(NSInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleTo:(NSInteger)arg1 forPartWithIdentifier:(id)arg2 ;
-(void)statusBar:(id)arg0 didAnimateFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 animation:(int)arg3 ;
-(void)statusBar:(id)arg0 willAnimateFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 duration:(CGFloat)arg3 animation:(int)arg4 ;
-(void)statusBarAssertionDidInvalidate:(id)arg0 ;
-(void)statusBarAssertionDidUpdate:(id)arg0 ;
-(void)statusBarBreadcrumbProviderDidUpdateDisplayProperties:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 alongsideContainerView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif