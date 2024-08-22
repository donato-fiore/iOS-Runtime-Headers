// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIREMOTEVIEWCONTROLLER_H
#define _UIREMOTEVIEWCONTROLLER_H

@class NSString, NSArray, FBSDisplayIdentity, NSError, BKSTouchDeliveryPolicyAssertion;
@protocol UIDimmingViewDelegate, _UIRemoteViewController_ViewControllerOperatorInterface, _UIEventDeferringRuleOwning;


#import "UIViewController.h"
#import "_UIViewServiceInterface.h"
#import "_UIRemoteViewService.h"
#import "_UIAsyncInvocation.h"
#import "_UISizeTrackingView.h"
#import "_UIRemoteView.h"
#import "_UITextEffectsRemoteView.h"
#import "UIView.h"
#import "_UITextServiceSession.h"
#import "UIDimmingView.h"
#import "_UIEventDeferringOwnershipToken.h"
#import "UIAlertController.h"
#import "UINotificationFeedbackGenerator.h"
#import "_UISheetPresentationControllerConfiguration.h"

@interface _UIRemoteViewController : UIViewController <UIDimmingViewDelegate, _UIRemoteViewController_ViewControllerOperatorInterface, _UIEventDeferringRuleOwning>

 {
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    _UIRemoteViewService *_remoteViewService;
    id *_serviceViewControllerProxy;
    id *_serviceViewControllerControlMessageProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    unsigned int _serviceAccessibilityServerPort;
    BOOL _serviceHasScrollToTopView;
    int _applicationDeactivationReason;
    BOOL _systemAppIsLocked;
    BOOL _observesLockNotifications;
    id *_viewControllerOperatorProxy;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id *_textEffectsOperatorProxy;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    _UISizeTrackingView *_sizeTrackingView;
    _UIRemoteView *_serviceViewControllerRemoteView;
    _UITextEffectsRemoteView *_fullScreenTextEffectsRemoteView;
    _UITextEffectsRemoteView *_textEffectsAboveStatusBarRemoteView;
    _UITextEffectsRemoteView *_remoteKeyboardRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    BOOL _snapshotTextEffectsAfterRotation;
    FBSDisplayIdentity *_serviceScreenDisplayIdentity;
    _UIAsyncInvocation *_terminationInvocation;
    os_unfair_lock_s _terminationErrorLock;
    NSError *_terminationError;
    _UITextServiceSession *_textServiceSession;
    UIDimmingView *_hostedDimmingView;
    UIView *_touchGrabbingView;
    NSInteger _preferredStatusBarStyle;
    int _preferredStatusBarVisibility;
    NSInteger _preferredStatusBarUpdateAnimation;
    BOOL _wantsEventDeferring;
    BOOL _wasDeferringEventsBeforeResignKey;
    _UIEventDeferringOwnershipToken *_eventDeferringToken;
    id *_contextDidAttachGenericGestureFocusAction;
    NSArray *_allowedNotifications;
    NSArray *_sizeTrackingConstraints;
    BOOL _sizeTrackingViewShouldTranslateAutoResizeMaskIntoConstraints;
    int _sizeTrackingViewAutoResizeMask;
    CGSize _serviceScreenSize;
    BOOL _alreadySentFence;
    UIView *_viewServiceTouchInterdictionView;
    UIAlertController *_proxiedEditAlertController;
    NSInteger _proxiedEditAlertToken;
    UINotificationFeedbackGenerator *_motionNotificationGenerator;
    NSInteger _preferredAdaptivityStyle;
    NSUInteger _preferredScreenEdgesDeferringSystemGestures;
    BOOL _prefersHomeIndicatorAutoHidden;
    BOOL _prefersPointerLocked;
    NSArray *_multitaskingDragExclusionRects;
    BOOL _isUnderlappingStatusBar;
    BOOL __shouldUpdateRemoteTextEffectsWindow;
    NSInteger _preferredUserInterfaceStyle;
}


@property (nonatomic, setter=_setIsUpdatingSize:) BOOL _isUpdatingSize; // ivar: _isUpdatingSize
@property (nonatomic, setter=_setIsUpdatingSizeInHost:) BOOL _isUpdatingSizeInHost; // ivar: _isUpdatingSizeInHost
@property (retain, nonatomic, setter=_setSheetConfiguration:) _UISheetPresentationControllerConfiguration *_sheetConfiguration; // ivar: __sheetConfiguration
@property (nonatomic, setter=_setShouldUpdateRemoteTextEffectsWindow:) BOOL _shouldUpdateRemoteTextEffectsWindow;
@property (retain, nonatomic, setter=_setTouchDeliveryPolicyAssertion:) BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion; // ivar: _touchDeliveryPolicyAssertion
@property (nonatomic, setter=_setViewClipsToBounds:) BOOL _viewClipsToBounds; // ivar: __viewClipsToBounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? serviceAuditToken;
@property (readonly, nonatomic) NSString *serviceBundleIdentifier;
@property (readonly, nonatomic) int serviceProcessIdentifier;
@property (nonatomic) BOOL serviceViewShouldShareTouchesWithHost; // ivar: _serviceViewShouldShareTouchesWithHost
@property (readonly) Class superclass;


+(BOOL)__shouldHostRemoteTextEffectsWindow;
+(BOOL)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)_requestViewController:(id)arg0 traitCollection:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 service:(id)arg3 connectionHandler:(id)arg4 ;
+(id)exportedInterface;
+(id)requestViewController:(id)arg0 fromServiceWithBundleIdentifier:(id)arg1 connectionHandler:(id)arg2 ;
+(id)requestViewController:(id)arg0 traitCollection:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(id)arg3 ;
+(id)requestViewControllerWithService:(id)arg0 connectionHandler:(id)arg1 ;
+(id)requestViewControllerWithService:(id)arg0 traitCollection:(id)arg1 connectionHandler:(id)arg2 ;
+(id)serviceViewControllerInterface;
-(BOOL)__interdictServiceViewTouches;
-(BOOL)__shouldRemoteViewControllerFenceGeometryChange:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)__wantsHackyReductionOfFencedOperations;
-(BOOL)_ignoreAppSupportedOrientations;
-(BOOL)_isDeallocating;
-(BOOL)_needsUnderflowPropertyUpdate;
-(BOOL)_requiresKeyboardWindowWhenFirstResponder;
-(BOOL)_serviceHasScrollToTopView;
-(BOOL)_tryRetain;
-(BOOL)_wantsEventDeferringForFocusOnScreen:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)inheritsSecurity;
-(BOOL)observesLockNotifications;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersPointerLocked;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldPropagateAppearanceCustomizations;
-(NSInteger)__getPreferredInterfaceOrientation;
-(NSInteger)interfaceElementCategory;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(NSInteger)preferredUserInterfaceStyle;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(NSUInteger)preferredScreenEdgesDeferringSystemGestures;
-(NSUInteger)retainCount;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_addAutoAllowedNotifications:(id)arg0 ;
-(id)_appearanceSource;
-(id)_cancelTouchesForCurrentEventInHostedContent;
-(id)_clientDeferringTarget;
-(id)_fenceForSynchronizedDrawing;
-(id)_initWithViewServiceBundleIdentifier:(id)arg0 ;
-(id)_multitaskingDragExclusionRects;
-(id)_sheetPresentationController;
-(id)_terminateWithError:(id)arg0 ;
-(id)allowedNotifications;
-(id)autorelease;
-(id)disconnect;
-(id)forbiddenNotifications;
-(id)retain;
-(id)serviceViewControllerProxy;
-(id)serviceViewControllerProxyWithErrorHandler:(id)arg0 ;
-(id)textEffectsWindowForServiceScreen;
-(int)__automatic_invalidation_logic;
-(int)_preferredStatusBarVisibility;
-(struct CGSize )intrinsicContentSizeForServiceSize:(struct CGSize )arg0 ;
-(void)__dismissTextServiceSessionAnimated:(BOOL)arg0 ;
-(void)__handleFocusMovementAction:(id)arg0 ;
-(void)__setInterdictServiceViewTouches:(BOOL)arg0 ;
-(void)__setMediaOverridePID:(int)arg0 ;
-(void)__setSupportedInterfaceOrientations:(id)arg0 ;
-(void)__setViewServiceIsDisplayingPopover:(BOOL)arg0 ;
-(void)__showEditAlertViewWithToken:(NSInteger)arg0 canUndo:(BOOL)arg1 canRedo:(BOOL)arg2 ;
-(void)__showServiceForText:(id)arg0 selectedTextRangeValue:(id)arg1 type:(NSInteger)arg2 fromRectValue:(id)arg3 replyHandler:(id)arg4 ;
-(void)__showServiceForText:(id)arg0 type:(NSInteger)arg1 fromRectValue:(id)arg2 replyHandler:(id)arg3 ;
-(void)__showServiceForType:(NSInteger)arg0 withContext:(id)arg1 replyHandler:(id)arg2 ;
-(void)__trampolineButtonPressData:(id)arg0 canceled:(BOOL)arg1 ;
-(void)__updateDeferralPropertiesForScreen:(id)arg0 ;
-(void)__viewServiceDidChangeHasScrollToTopView:(BOOL)arg0 ;
-(void)__viewServiceDidChangeKeyWindow:(BOOL)arg0 ;
-(void)__viewServiceDidPromoteFirstResponderWithCompletionHandler:(id)arg0 ;
-(void)__viewServiceDidUpdateMultitaskingDragExclusionRects:(id)arg0 ;
-(void)__viewServiceDidUpdatePreferredScreenEdgesDeferringSystemGestures:(NSUInteger)arg0 ;
-(void)__viewServiceDidUpdatePreferredStatusBarStyle:(NSInteger)arg0 preferredStatusBarVisibility:(int)arg1 updateAnimation:(NSInteger)arg2 currentAnimationSettings:(id)arg3 ;
-(void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(NSInteger)arg0 ;
-(void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(NSInteger)arg0 animationSettings:(id)arg1 ;
-(void)__viewServiceDidUpdatePrefersHomeIndicatorAutoHidden:(BOOL)arg0 ;
-(void)__viewServiceDidUpdatePrefersPointerLocked:(BOOL)arg0 ;
-(void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize )arg0 fence:(id)arg1 ;
-(void)__viewServicePopoverDidChangeContentSize:(struct CGSize )arg0 animated:(BOOL)arg1 fence:(id)arg2 withReplyHandler:(id)arg3 ;
-(void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg0 ;
-(void)__viewServicePreferredContentSizeDidChange:(struct CGSize )arg0 fence:(id)arg1 ;
-(void)__viewServiceSheetInteractionDraggingDidBeginWithRubberBandCoefficient:(CGFloat)arg0 dismissible:(BOOL)arg1 interruptedOffset:(struct CGPoint )arg2 ;
-(void)__viewServiceSheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 animateChange:(BOOL)arg2 dismissible:(BOOL)arg3 ;
-(void)__viewServiceSheetInteractionDraggingDidEnd;
-(void)__viewServiceSheetPresentationControllerDidChangeContainsFirstResponder:(BOOL)arg0 firstResponderRequiresKeyboard:(BOOL)arg1 keyboardFrame:(struct CGRect )arg2 attributes:(id)arg3 ;
-(void)__viewServiceWantsKeyboardEventEnvironmentDeferringWithoutFirstResponderAndCompletionHandler:(id)arg0 ;
-(void)__willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)_appearanceInvocationsDidChange:(id)arg0 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationDidFinishSuspendSnapshot:(id)arg0 ;
-(void)_applicationWillAddDeactivationReason:(id)arg0 ;
-(void)_applicationWillDeactivate:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_awakeWithConnectionInfo:(id)arg0 ;
-(void)_cancelProxiedEditAlertViewAnimated:(BOOL)arg0 ;
-(void)_configureGenericGestureFocusForEnteringForeground;
-(void)_didResignContentViewControllerOfPopover:(id)arg0 ;
-(void)_didRotateFromInterfaceOrientation:(NSInteger)arg0 forwardToChildControllers:(BOOL)arg1 skipSelf:(BOOL)arg2 ;
-(void)_endNoPresentingViewControllerAlertController:(id)arg0 ;
-(void)_firstResponderDidChange:(id)arg0 ;
-(void)_hostDidEnterBackground:(id)arg0 ;
-(void)_hostSceneDidEnterBackground:(id)arg0 ;
-(void)_hostSceneWillEnterForeground:(id)arg0 ;
-(void)_hostWillEnterForeground:(id)arg0 ;
-(void)_initializeAccessibilityPortInformation;
-(void)_noteWindowState:(BOOL)arg0 ;
-(void)_prepareTouchDeliveryPolicy;
-(void)_removeTextEffectsRemoteViews;
-(void)_restoreTextEffectsRemoteView;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_sceneWillEnterForeground:(id)arg0 ;
-(void)_screenDidConnect:(id)arg0 ;
-(void)_screenDidDisconnect:(id)arg0 ;
-(void)_screenDidUpdate:(id)arg0 ;
-(void)_screenIDChanged:(id)arg0 ;
-(void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint )arg0 resultHandler:(id)arg1 ;
-(void)_serviceWantsKeyboardEventEnvironmentDeferringWithCompletionHandler:(id)arg0 ;
-(void)_setContentOverlayInsets:(struct UIEdgeInsets )arg0 andLeftMargin:(CGFloat)arg1 rightMargin:(CGFloat)arg2 ;
-(void)_setSecurityModeForViewsLayer;
-(void)_setWantsEventDeferring:(BOOL)arg0 ;
-(void)_snapshotAndRemoveTextEffectsRemoteView;
-(void)_statusBarHeightDidChange:(id)arg0 ;
-(void)_statusBarOrientationDidChange:(id)arg0 ;
-(void)_systemApplicationDidUnlock:(id)arg0 ;
-(void)_systemApplicationWillLock:(id)arg0 ;
-(void)_terminateUnconditionallyThen:(id)arg0 ;
-(void)_traitCollectionDidChange:(id)arg0 ;
-(void)_uirvc_applicationKeyWindowWillChange:(id)arg0 ;
-(void)_uirvc_keyboardWindowSceneSettingsSceneWillChange:(id)arg0 ;
-(void)_uirvc_windowBecameKey:(id)arg0 ;
-(void)_uirvc_windowDidMoveToScene:(id)arg0 ;
-(void)_uirvc_windowResignedKey:(id)arg0 ;
-(void)_uirvc_windowWillMoveToScene:(id)arg0 ;
-(void)_updateLockStatusHostingVisibility;
-(void)_updateTintColor;
-(void)_updateTouchGrabbingView;
-(void)_updateUnderflowProperties;
-(void)_willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg0 ;
-(void)_willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3 ;
-(void)_windowDidAttachContext:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)dimmingViewWasTapped:(id)arg0 ;
-(void)loadView;
-(void)release;
-(void)restoreStateForSession:(id)arg0 anchor:(id)arg1 ;
-(void)saveStateForSession:(id)arg0 anchor:(id)arg1 ;
-(void)setAllowedNotifications:(id)arg0 ;
-(void)setInheritsSecurity:(BOOL)arg0 ;
-(void)setObservesLockNotifications:(BOOL)arg0 ;
-(void)synchronizeAnimationsInActions:(id)arg0 ;
-(void)updateTouchInterdictionViewLayout;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidInvalidateIntrinsicContentSize;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif