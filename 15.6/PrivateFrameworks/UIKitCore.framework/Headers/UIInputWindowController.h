// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTWINDOWCONTROLLER_H
#define UIINPUTWINDOWCONTROLLER_H

@class NSMutableArray, NSString, NSDate, NSLayoutConstraint;
@protocol UIInputViewAnimationHost, _UITextEffectsSceneObserver, UIKeyboardFloatingTransitionControllerDelegate, _UIInputHostController;


#import "UIApplicationRotationFollowingControllerNoTouches.h"
#import "UIView.h"
#import "UIInputViewSetNotificationInfo.h"
#import "UIKeyboardFloatingTransitionController.h"
#import "_UIKeyboardPasscodeObscuringInteraction.h"
#import "UIInputViewController.h"
#import "UIKeyboardPathEffectView.h"
#import "UIInputViewPlacementTransition.h"
#import "UIInputViewSetPlacement.h"
#import "UIInputWindowControllerHosting.h"
#import "UIInputViewSet.h"

@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UIInputViewAnimationHost, _UITextEffectsSceneObserver, UIKeyboardFloatingTransitionControllerDelegate, _UIInputHostController>

 {
    NSMutableArray *_animationStyleStack;
    int _suppressedCallbacks;
    int _suppressedNotifications;
    BOOL _isChangingPlacement;
    BOOL _isSnapshotting;
    int _hiddenCount;
    BOOL _inhibitingHiding;
    NSUInteger _rotationState;
    BOOL _disablePlacementChanges;
    BOOL _suppressUpdateVisibilityConstraints;
    BOOL _suppressUpdateViewConstraints;
    id *_pendingTransitionActivity;
    UIView *_preRotationSnapshot;
    CGSize _preRotationInputViewSize;
    CGSize _preRotationInputAssistantViewSize;
    CGSize _preRotationInputAccessoryViewSize;
    CGAffineTransform _preRotationInputViewTransform;
    CGAffineTransform _preRotationInputAssistantViewTransform;
    CGAffineTransform _preRotationInputAccessoryViewTransform;
    UIInputViewSetNotificationInfo *_rotationInfo;
    CGRect _preLayoutHostViewFrame;
    BOOL _didOverridePreLayoutHostViewFrame;
    BOOL _didPostLayoutNotification;
    UIInputViewSetNotificationInfo *_keyboardHeightChangeNotificationInfo;
    BOOL _wasOnScreen;
    NSString *_lastKeyboardID;
    NSDate *_keyboardShowTimestamp;
    BOOL _supportsDockViewController;
    UIKeyboardFloatingTransitionController *_floatingTransitionController;
    _UIKeyboardPasscodeObscuringInteraction *_passcodeObscuringInteraction;
}


@property (readonly, nonatomic) UIView *_inputAccessoryView;
@property (retain, nonatomic) UIInputViewController *_inputAccessoryViewController; // ivar: _inputAccessoryViewController
@property (readonly, nonatomic) UIView *_inputAssistantView;
@property (retain, nonatomic) UIInputViewController *_inputAssistantViewController; // ivar: _inputAssistantViewController
@property (readonly, nonatomic) UIView *_inputView;
@property (retain, nonatomic) UIInputViewController *_inputViewController; // ivar: _inputViewController
@property (readonly, retain, nonatomic) UIKeyboardPathEffectView *_pathEffectView; // ivar: _pathEffectView
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // ivar: _accessoryViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *assistantViewHeightConstraint; // ivar: _assistantViewHeightConstraint
@property (readonly, retain, nonatomic) UIView *bottomEdgeView;
@property (retain, nonatomic) UIInputViewPlacementTransition *currentTransition; // ivar: _currentTransition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dontDismissKeyboardOnScrolling; // ivar: _dontDismissKeyboardOnScrolling
@property (nonatomic) BOOL dontDismissReachability; // ivar: _dontDismissReachability
@property (readonly, nonatomic) UIInputViewSetPlacement *expectedPlacement;
@property (nonatomic) BOOL forceAccessoryViewToBottomOfHostView; // ivar: _forceAccessoryViewToBottomOfHostView
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) UIInputWindowControllerHosting *hosting; // ivar: _hosting
@property (retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // ivar: _inputViewHeightConstraint
@property (retain, nonatomic) UIInputViewSet *inputViewSet; // ivar: _inputViewSet
@property (readonly, nonatomic, getter=isInputViewsHidden) BOOL inputViewsHidden;
@property (readonly, nonatomic) BOOL isChangingInputViews; // ivar: _isChangingInputViews
@property (readonly, nonatomic) BOOL isSnapshotting;
@property (readonly, nonatomic) BOOL isTransitionStarted;
@property (readonly, nonatomic) BOOL isTransitioning;
@property (readonly, nonatomic) BOOL isTransitioningBetweenFloatingStates;
@property (readonly, nonatomic) BOOL isTransitioningBetweenKeyboardStates;
@property (readonly, nonatomic) NSInteger keyboardOrientation;
@property (retain, nonatomic) UIInputViewSetPlacement *placement; // ivar: _placement
@property (readonly, retain, nonatomic) UIInputViewSetPlacement *placementIgnoringRotation;
@property (retain, nonatomic) UIInputViewSetNotificationInfo *postRotationInputViewNotificationInfo; // ivar: _postRotationInputViewNotificationInfo
@property (retain, nonatomic) UIInputViewSet *postRotationInputViewSet; // ivar: _postRotationInputViewSet
@property (copy, nonatomic) id *postRotationPendingBlock; // ivar: _postRotationPendingBlock
@property (retain, nonatomic) UIInputViewSetPlacement *postRotationPlacement; // ivar: _postRotationPlacement
@property (nonatomic) BOOL shouldNotifyRemoteKeyboards; // ivar: _shouldNotifyRemoteKeyboards
@property (readonly) Class superclass;
@property (retain, nonatomic) UIInputViewSetNotificationInfo *templateNotificationInfo; // ivar: _templateNotificationInfo
@property (retain, nonatomic) UIInputViewSet *transientInputViewSet; // ivar: _transientInputViewSet


+(BOOL)_isSecureForRemoteViewService;
-(BOOL)_allowsSkippingLayout;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isSecure;
-(BOOL)_useLiveRotation;
-(BOOL)hasInputOrAssistantViewsOnScreen;
-(BOOL)inhibitRotationAnimation;
-(BOOL)inputViewSetContainsView:(id)arg0 ;
-(BOOL)isChangingPlacement;
-(BOOL)isDragging;
-(BOOL)isHostingView:(id)arg0 ;
-(BOOL)isOnScreen;
-(BOOL)isOnScreenRotating;
-(BOOL)isRotating;
-(BOOL)isSplitting;
-(BOOL)isTranslating;
-(BOOL)isUndocked;
-(BOOL)isViewLandscape;
-(BOOL)mergeTransitionIfNecessaryWithTransition:(id)arg0 ;
-(BOOL)shouldBeginTransitionForController:(id)arg0 ;
-(NSInteger)overrideUserInterfaceStyle;
-(NSUInteger)_clipCornersOfView:(id)arg0 ;
-(NSUInteger)changeToInputViewSet:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_screenCoordinateSpace;
-(id)currentPresentationPlacement;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initialNotificationInfo;
-(id)inputSetContainerView;
-(id)inputViewSnapshotOfView:(id)arg0 afterScreenUpdates:(BOOL)arg1 ;
-(id)inputWindowControllerForController:(id)arg0 ;
-(id)nextAnimationStyle;
-(id)screenSnapshotOfView:(id)arg0 ;
-(id)transitioningView;
-(id)viewForTransitionScreenSnapshot;
-(int)appearStateForChild:(NSUInteger)arg0 placement:(id)arg1 start:(BOOL)arg2 ;
-(struct CGPoint )_centerForOrientation:(NSInteger)arg0 ;
-(struct CGRect )_boundsForOrientation:(NSInteger)arg0 ;
-(struct CGRect )_defaultInitialViewFrame;
-(struct CGRect )_viewFrameInWindowForContentOverlayInsetsCalculation;
-(struct CGRect )_visibleFrame;
-(struct CGRect )_visibleInputViewFrame;
-(struct CGRect )convertRectFromContainerCoordinateSpaceToScreenSpace:(struct CGRect )arg0 ;
-(struct CGRect )transitioningFrame;
-(struct CGRect )visibleFrame;
-(struct CGRect )visibleInputViewFrame;
-(struct UIEdgeInsets )_viewSafeAreaInsetsFromScene;
-(void)_collectTransitionTimeStatistics:(NSUInteger)arg0 withStart:(id)arg1 ;
-(void)_didChangeDeepestActionResponder;
-(void)_forcePreLayoutHostViewFrame;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_presentViewController:(id)arg0 modalSourceViewController:(id)arg1 presentationController:(id)arg2 animationController:(id)arg3 interactionController:(id)arg4 completion:(id)arg5 ;
-(void)_updateContentOverlayInsetsForSelfAndChildren;
-(void)_updatePlacementWithPlacement:(id)arg0 ;
-(void)addPendingActivity:(id)arg0 ;
-(void)animateAccessoryViewVisibility:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)beginFloatingTransitionFromPanGestureRecognizer:(id)arg0 ;
-(void)candidateBarWillChangeHeight:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;
-(void)chainPlacementsIfNecessaryFrom:(id)arg0 toPlacement:(id)arg1 transition:(id)arg2 completion:(id)arg3 ;
-(void)changeChild:(NSUInteger)arg0 toAppearState:(int)arg1 animated:(BOOL)arg2 ;
-(void)changeGuideAnimationOptions:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)changeGuideAnimationState:(BOOL)arg0 ;
-(void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(BOOL)arg0 layoutSubviews:(BOOL)arg1 ;
-(void)dealloc;
-(void)didEndIndirectSelectionGesture;
-(void)didEndTransitionWithController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)didSnapshot;
-(void)didSuspend:(id)arg0 ;
-(void)dismissViewController:(id)arg0 ;
-(void)extendKeyboardBackdropHeight:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;
-(void)finishSplitTransition;
-(void)flushPendingActivities;
-(void)generateNotificationsForStart:(BOOL)arg0 ;
-(void)hostAppSceneBoundsChanged;
-(void)hostViewDidEnterBackground;
-(void)hostViewWillDisappear;
-(void)hostViewWillenterForeground;
-(void)ignoreLayoutNotifications:(id)arg0 ;
-(void)invalidateInputAccessoryView;
-(void)invalidateInputAssistantView;
-(void)invalidateInputView;
-(void)keyboardDismissWithInfo:(id)arg0 ;
-(void)keyboardHeightChangeDone;
-(void)keyboardIsDocking:(BOOL)arg0 ;
-(void)keyboardMoveOfType:(NSUInteger)arg0 info:(id)arg1 ;
-(void)keyboardMoveWithInfo:(id)arg0 ;
-(void)loadView;
// -(void)moveFromPlacement:(id)arg0 toPlacement:(id)arg1 starting:(id)arg2 completion:(unk)arg3  ;
// -(void)performOperations:(id)arg0 withAnimationStyle:(unk)arg1  ;
// -(void)performOperations:(id)arg0 withTemplateNotificationInfo:(unk)arg1  ;
-(void)performWithSafeTransitionFrames:(id)arg0 ;
-(void)performWithoutAppearanceCallbacks:(id)arg0 ;
-(void)performWithoutCallbacksOrNotifications:(id)arg0 ;
-(void)popAnimationStyle;
-(void)postEndNotifications:(NSUInteger)arg0 withInfo:(id)arg1 ;
-(void)postStartNotifications:(NSUInteger)arg0 withInfo:(id)arg1 ;
-(void)postTransitionEndNotification;
-(void)postValidatedEndNotifications:(NSUInteger)arg0 withInfo:(id)arg1 ;
-(void)postValidatedStartNotifications:(NSUInteger)arg0 withInfo:(id)arg1 ;
-(void)prepareForInputAssistant:(id)arg0 animated:(BOOL)arg1 ;
-(void)prepareForSplitTransition;
-(void)prepareKeyboardHeightChangeWithDelta:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)presentViewController:(id)arg0 ;
-(void)pushAnimationStyle:(id)arg0 ;
-(void)registerPowerLogEvent:(BOOL)arg0 ;
-(void)resetBackdropHeight;
-(void)setDisableUpdateMaskForSecureTextEntry:(BOOL)arg0 ;
-(void)setExclusiveTouch:(BOOL)arg0 ;
-(void)setInputView:(id)arg0 accessoryView:(id)arg1 assistantView:(id)arg2 ;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg0 ;
-(void)setRotationAwarePlacement:(id)arg0 ;
-(void)syncToExistingAnimations;
-(void)transferActiveNotificationInfoToInfo:(id)arg0 ;
-(void)transferPlacementStateToInputWindowController:(id)arg0 ;
-(void)updateAmbiguousControlCenterActivationMargin:(NSUInteger)arg0 withInfo:(id)arg1 ;
-(void)updateAppearStatesForPlacement:(id)arg0 start:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateForKeyplaneChangeWithContext:(id)arg0 ;
-(void)updateGestureRecognizers;
-(void)updateGuideForOffscreenRotationWithDuration:(CGFloat)arg0 ;
-(void)updateInputAssistantView:(id)arg0 ;
-(void)updateInputAssistantViewForInputViewSet:(id)arg0 ;
-(void)updateKeyboardDockViewVisibility;
-(void)updateKeyboardSizeClass;
-(void)updateSupportsDockViewController;
-(void)updateToPlacement:(id)arg0 withNormalAnimationsAndNotifications:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)updateViewSizingConstraints;
-(void)updateVisibilityConstraintsForPlacement:(id)arg0 ;
-(void)validateInputView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willBeginIndirectSelectionGesture;
-(void)willBeginTransitionWithController:(id)arg0 ;
-(void)willResume:(id)arg0 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willSnapshot;
-(void)window:(id)arg0 statusBarWillChangeFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 ;


@end


#endif