// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCONTROLCENTERCONTROLLER_H
#define SBCONTROLCENTERCONTROLLER_H

@class NSString, NSSet, FBDisplayLayoutElement, BSSimpleAssertion, CCUIStatusBarStyleSnapshot, _UILegibilitySettings, NSHashTable, PTSingleTestRecipe, NSArray, UIApplicationSceneDeactivationAssertion, UIPanGestureRecognizer, CCUIModularControlCenterOverlayViewController, NSMutableArray;
@protocol CCUIModularControlCenterOverlayViewControllerDelegate, SBGrabberTongueDelegate, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalAppearanceProviding, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBFIdleTimerBehaviorProviding, CCUIHostStatusBarStyleProvider, SBReachabilityObserver, SBFSensorActivityObserver, SBIndirectPanGestureRecognizerOrientationProviding, SBHomeGrabberPointerClickDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying, BSInvalidatable, SBIdleTimerCoordinating, UICoordinateSpace, SBFSensorActivityDataProvider;

#import <Foundation/Foundation.h>

#import "SBAsynchronousRenderingAssertion.h"
#import "SBGrabberTongue.h"
#import "SBBarSwipeAffordanceViewController.h"
#import "SBIndirectPanGestureRecognizer.h"
#import "SBWorkspaceKeyboardFocusController.h"
#import "SBAppStatusBarSettingsAssertion.h"
#import "SBControlCenterSystemAgent.h"
#import "SBControlCenterWindow.h"

@interface SBControlCenterController : NSObject <CCUIModularControlCenterOverlayViewControllerDelegate, SBGrabberTongueDelegate, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalAppearanceProviding, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBFIdleTimerBehaviorProviding, CCUIHostStatusBarStyleProvider, SBReachabilityObserver, SBFSensorActivityObserver, SBIndirectPanGestureRecognizerOrientationProviding, SBHomeGrabberPointerClickDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying>



@property (readonly, nonatomic) BOOL allowGestureForContentBelow;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (retain, nonatomic) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion; // ivar: _asynchronousRenderingAssertion
@property (retain, nonatomic) NSObject<BSInvalidatable> *bannerSuppressionAssertion; // ivar: _bannerSuppressionAssertion
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<BSInvalidatable> *deferOrientationUpdatesAssertion; // ivar: _deferOrientationUpdatesAssertion
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // ivar: _displayLayoutElement
@property (retain, nonatomic) SBGrabberTongue *grabberTongue; // ivar: _grabberTongue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BSSimpleAssertion *hideStatusBarAssertion; // ivar: _hideStatusBarAssertion
@property (retain, nonatomic) SBBarSwipeAffordanceViewController *homeAffordanceViewController; // ivar: _homeAffordanceViewController
@property (readonly, copy, nonatomic) CCUIStatusBarStyleSnapshot *hostStatusBarStyle;
@property (weak, nonatomic) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (retain, nonatomic) NSObject<BSInvalidatable> *idleTimerDisableAssertion; // ivar: _idleTimerDisableAssertion
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (nonatomic) BOOL indirectStatusBarPullGestureCalledBegin; // ivar: _indirectStatusBarPullGestureCalledBegin
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectStatusBarPullGestureRecognizer; // ivar: _indirectStatusBarPullGestureRecognizer
@property (retain, nonatomic) SBWorkspaceKeyboardFocusController *keyboardFocusController; // ivar: _keyboardFocusController
@property (retain, nonatomic) NSObject<BSInvalidatable> *keyboardFocusLockAssertion; // ivar: _keyboardFocusLockAssertion
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) PTSingleTestRecipe *presentModuleTestRecipe; // ivar: _presentModuleTestRecipe
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *presentationCoordinateSpace;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (readonly, nonatomic) NSUInteger presentingEdge;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *resignActiveAssertion; // ivar: _resignActiveAssertion
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (weak, nonatomic) NSObject<SBFSensorActivityDataProvider> *sensorActivityDataProvider; // ivar: _sensorActivityDataProvider
@property (retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // ivar: _statusBarAssertion
@property (retain, nonatomic) UIPanGestureRecognizer *statusBarPullGestureRecognizer; // ivar: _statusBarPullGestureRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) SBControlCenterSystemAgent *systemAgent; // ivar: _systemAgent
@property (readonly, nonatomic) PTSingleTestRecipe *userInterfaceStyleTestRecipe; // ivar: _userInterfaceStyleTestRecipe
@property (retain, nonatomic) CCUIModularControlCenterOverlayViewController *viewController; // ivar: _viewController
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (retain, nonatomic) SBControlCenterWindow *window; // ivar: _window
@property (retain, nonatomic) NSMutableArray *windowLevelAssertions; // ivar: _windowLevelAssertions


+(id)_sharedInstanceCreatingIfNeeded:(BOOL)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)_isLocationXWithinExtendedTrailingStatusBarRegion:(CGFloat)arg0 ;
-(BOOL)_isLocationXWithinTrailingStatusBarRegion:(CGFloat)arg0 ;
-(BOOL)_isLocationXWithinTrailingStatusBarRegion:(CGFloat)arg0 regionPadding:(CGFloat)arg1 ;
-(BOOL)_isStatusBarHiddenIgnoringControlCenter;
-(BOOL)_shouldAllowControlCenterGesture;
-(BOOL)_shouldShowGrabberOnFirstSwipe;
-(BOOL)allowShowTransitionSystemGesture;
-(BOOL)canBePresented;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)grabberTongue:(id)arg0 shouldAllowSecondSwipeWithEdgeLocation:(CGFloat)arg1 ;
-(BOOL)grabberTongue:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)grabberTongue:(id)arg0 shouldShowTongueOnFirstSwipeWithEdgeLocation:(CGFloat)arg1 ;
-(BOOL)grabberTongueHonorsAmbiguousActivationMargin:(id)arg0 ;
-(BOOL)grabberTongueOrPullEnabled:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(BOOL)handleIndirectStatusBarAction;
-(BOOL)handleMenuButtonTap;
-(BOOL)isDismissedOrDismissing;
-(CGFloat)_homeAffordanceAnimationDelay;
-(CGFloat)_reachabilityOffset;
-(CGFloat)_trailingStatusBarRegionWidth;
-(CGFloat)reachabilityOffsetForControlCenterViewController:(id)arg0 ;
-(NSInteger)indirectPanEffectiveInterfaceOrientation;
-(NSUInteger)barSwipeAffordanceView:(id)arg0 systemGestureTypeForType:(NSInteger)arg1 ;
-(id)_controlCenterWindow;
-(id)_sensorActivityDataFromSensorActivityAttribution:(id)arg0 ;
-(id)acquireWindowLevelAssertionWithPriority:(NSInteger)arg0 windowLevel:(CGFloat)arg1 reason:(id)arg2 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)customGestureRecognizerForGrabberTongue:(id)arg0 ;
-(id)hideAnimationSettingsForBarSwipeAffordanceView:(id)arg0 ;
-(id)init;
-(id)reachabilitySpringAnimationBehaviorForControlCenterViewController:(id)arg0 ;
-(id)unhideAnimationSettingsForBarSwipeAffordanceView:(id)arg0 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(struct CGPoint )_locationOfTouchInActiveInterfaceOrientation:(id)arg0 gestureRecognizer:(id)arg1 ;
-(struct CGPoint )_presentGestureLocationInView;
-(struct CGPoint )_presentGestureTranslationInView:(BOOL)arg0 ;
-(struct CGPoint )_presentGestureVelocityInView;
-(void)_didDismiss;
-(void)_didEndTransition;
-(void)_didPresent;
-(void)_disableReachability;
-(void)_enumerateObservers:(id)arg0 ;
-(void)_handleStatusBarPullDownGesture:(id)arg0 ;
-(void)_requireGestureRecognizerToFailForPresentGestureRecognizer:(id)arg0 ;
-(void)_requirePresentGestureRecognizerToFailForGestureRecognizer:(id)arg0 ;
-(void)_screenDidDim;
-(void)_setStatusBarHidden:(BOOL)arg0 ;
-(void)_uiRelockedNotification:(id)arg0 ;
-(void)_updateWindowLevel;
-(void)_updateWindowOrientation;
-(void)_updateWindowVisibility;
-(void)_willBeginTransition;
-(void)_willDismiss;
-(void)_willPresent;
-(void)activityDidChangeForSensorActivityDataProvider:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)conformsToCSAppearanceProviding;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)controlCenterViewController:(id)arg0 didChangePresentationState:(NSUInteger)arg1 ;
-(void)controlCenterViewController:(id)arg0 didUpdateHomeGestureDismissalAllowed:(BOOL)arg1 ;
-(void)controlCenterViewController:(id)arg0 significantPresentationProgressChange:(CGFloat)arg1 ;
-(void)controlCenterViewController:(id)arg0 wantsHostStatusBarHidden:(BOOL)arg1 ;
-(void)dealloc;
-(void)didCloseExpandedModuleForControlCenterViewController:(id)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissOverlayForDashBoardAnimated:(BOOL)arg0 ;
-(void)grabberTongueBeganPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueCanceledPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueDidDismiss:(id)arg0 ;
-(void)grabberTongueEndedPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueUpdatedPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueWillPresent:(id)arg0 ;
-(void)handleDidEndReachabilityAnimation;
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(void)handleReachabilityYOffsetDidChange;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg0 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)presentAnimated:(BOOL)arg0 ;
-(void)presentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)willOpenExpandedModuleForControlCenterViewController:(id)arg0 ;


@end


#endif