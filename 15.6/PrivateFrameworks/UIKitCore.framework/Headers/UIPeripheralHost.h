// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPERIPHERALHOST_H
#define UIPERIPHERALHOST_H

@class UIPeripheralHostView, CADisplayLink, NSDate, NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;
@protocol UIScrollViewIntersectionDelegate, UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "UIKeyboardAutomatic.h"
#import "UIPanGestureRecognizer.h"
#import "UIResponder.h"
#import "UIInputViewSet.h"
#import "UIKeyboard.h"
#import "UITextInputMode.h"
#import "UIInputViewPostPinningReloadState.h"
#import "UIKBRenderConfig.h"
#import "UIKeyboardRotationState.h"
#import "UIPeripheralHostState.h"
#import "UIView.h"

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIGestureRecognizerDelegate>

 {
    UIPeripheralHostView *_hostView;
    UIKeyboardAutomatic *_automaticKeyboard;
    BOOL _automaticAppearanceEnabledInternal;
    BOOL _automaticKeyboardAnimatingIn;
    BOOL _automaticKeyboardAnimatingOut;
    int _ignoringReloadInputViews;
    int _ignoredReloads;
    BOOL _suppresingNotifications;
    BOOL _useHideNotificationsWhenNotVisible;
    BOOL _reloadInputViewsForcedIsAllowed;
    int _nextAutomaticOrderInDirection;
    NSInteger _targetRotatedOrientation;
    BOOL _isTranslating;
    BOOL _isSplitting;
    BOOL _isUndocked;
    BOOL _splitLockState;
    UIPanGestureRecognizer *_translateRecognizer;
    CADisplayLink *_displayLink;
    CGFloat _lastBounceTime;
    CGFloat _lastTranslationNotificationTime;
    CGAffineTransform _targetTransform;
    CGAffineTransform _initialTransform;
    CGPoint _velocity;
    NSDate *__transitionStartTime;
    int _shadowStyle;
    BOOL _wasBackgroundSplit;
    CGRect _previousShadowFrameLeft;
    CGRect _previousShadowFrameRight;
    id *_bounceCompletionBlock;
    CGFloat m_keyboardAttachedViewHeight;
    CGRect _lastKnownIVFrame;
    CGRect _lastKnownIAVFrame;
    NSMutableArray *_animationStyleStack;
    BOOL _hasCustomAnimationProperties;
    CGFloat _nextAutomaticOrderInDuration;
    CGFloat _lastAutomaticKeyboardDuration;
    NSInteger _disableAnimationsCount;
    NSMutableArray *_targetStateStack;
    NSMutableSet *_pinningResponders;
    BOOL _ignoresPinning;
    BOOL _interfaceAutorotationDisabled;
    NSMutableDictionary *_preservedViewSets;
    NSMutableDictionary *_persistentInputAccessoryResponders;
    NSMutableArray *_persistentInputAccessoryResponderOrder;
    BOOL _didFadeInputViews;
    BOOL _blockedReloadInputViewsForDictation;
    BOOL _allowNilResponderReload;
    BOOL _animateCornerRefresh;
    BOOL _showCorners;
    NSMutableArray *_extraViews;
    CGFloat _ambiguousControlCenterActivationMargin;
    UIResponder *_responderWithoutAutomaticAppearanceEnabled;
    int _hostedAnimationToggleCount;
    NSMutableDictionary *_deferredTransitionTasks;
}


@property (retain, nonatomic) UIInputViewSet *_inputViews; // ivar: _inputViewSet
@property (retain, nonatomic) UIInputViewSet *_transientInputViews; // ivar: _transientInputViewSet
@property (retain, nonatomic) NSDate *_transitionStartTime;
@property (nonatomic) CGFloat ambiguousControlCenterActivationMargin;
@property (nonatomic) BOOL animationFencingEnabled;
@property (nonatomic) BOOL animationFencingEnabled; // ivar: _animationFencingEnabled
@property (readonly, nonatomic) BOOL animationsEnabled;
@property (nonatomic) BOOL automaticAppearanceEnabled; // ivar: _automaticAppearanceEnabled
@property (nonatomic) BOOL automaticAppearanceInternalEnabled;
@property (readonly, nonatomic) BOOL automaticAppearanceReallyEnabled;
@property (readonly, nonatomic) UIKeyboard *automaticKeyboard;
@property (readonly, nonatomic) UIKeyboardAutomatic *automaticKeyboard;
@property (nonatomic) int currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextInputMode *documentInputMode; // ivar: _documentInputMode
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresPinning;
@property (readonly, nonatomic, getter=_isIgnoringReloadInputViews) BOOL ignoringReloadInputViews;
@property (retain, nonatomic) UIInputViewSet *inputViews;
@property (readonly, nonatomic) BOOL keyClicksEnabled;
@property (nonatomic) CGFloat lastKeyplaneResize; // ivar: _lastKeyplaneResize
@property (readonly, nonatomic) UIInputViewSet *loadAwareInputViews;
@property (retain, nonatomic) UIInputViewPostPinningReloadState *postPinningReloadState; // ivar: _postPinningReloadState
@property (nonatomic) BOOL preservingInputViews; // ivar: _preservingInputViews
@property (readonly, retain, nonatomic) UIResponder *responder;
@property (retain, nonatomic) UIResponder *responder; // ivar: _responder
@property (retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // ivar: _restorableRenderConfig
@property (retain, nonatomic) UIKeyboardRotationState *rotationState; // ivar: _rotationState
@property (retain, nonatomic) UIResponder *selfHostingTrigger; // ivar: _selfHostingTrigger
@property (readonly) Class superclass;
@property (retain, nonatomic) UIPeripheralHostState *targetState;
@property (readonly, nonatomic) UIView *view;


+(BOOL)inputViewSetContainsView:(id)arg0 ;
+(BOOL)pointIsWithinKeyboardContent:(struct CGPoint )arg0 ;
+(CGFloat)gridViewRubberBandValueForValue:(CGFloat)arg0 target:(CGFloat)arg1 timeInterval:(CGFloat)arg2 velocity:(*CGFloat)arg3 ;
+(Class)hostViewClass;
+(id)activeInstance;
+(id)allVisiblePeripheralFrames;
+(id)endPlacementForInputViewSet:(id)arg0 windowScene:(id)arg1 ;
+(id)passthroughViews;
+(id)sharedInstance;
+(struct CGPoint )defaultUndockedOffset;
+(struct CGRect )screenBoundsInAppOrientation;
+(struct CGRect )visibleInputViewFrame;
+(struct CGRect )visiblePeripheralFrame;
+(struct UIEdgeInsets )floatingChromeBuffer;
+(void)_releaseSharedInstance;
+(void)adjustFloatingPersistentOffsetForKeyboardSize:(struct CGSize )arg0 ;
+(void)setFloating:(BOOL)arg0 onCompletion:(id)arg1 ;
+(void)setKeyboardOnScreenNotifyKey:(BOOL)arg0 ;
-(BOOL)_hasPostPinningReloadState;
-(BOOL)_hostFirstResponder:(id)arg0 onBehalfOfResponder:(id)arg1 ;
-(BOOL)_isAccessoryViewChangedOnly;
-(BOOL)_isCoordinatingWithSystemGestures;
-(BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg0 ;
-(BOOL)_isSelfHosting;
-(BOOL)_isSuppressedByManualKeyboard;
-(BOOL)_isTrackingResponder:(id)arg0 ;
-(BOOL)_isTransitioning;
-(BOOL)_preserveMultiDocumentTokenIfNecessary:(id)arg0 withId:(id)arg1 reset:(BOOL)arg2 ;
-(BOOL)_restoreInputViewsWithId:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)_restoreMultiDocumentTokenIfNecessary:(id)arg0 withId:(id)arg1 ;
-(BOOL)_shouldDelayRotationForWindow:(id)arg0 ;
-(BOOL)hasCustomInputView;
-(BOOL)hasDelayedTasksForKey:(id)arg0 ;
-(BOOL)hasDictationKeyboard;
-(BOOL)isHostingActiveImpl;
-(BOOL)isOffScreen;
-(BOOL)isOnScreen;
-(BOOL)isRotating;
-(BOOL)isSplitting;
-(BOOL)isTranslating;
-(BOOL)isUndocked;
-(BOOL)maximize;
-(BOOL)maximizeWithAnimation:(BOOL)arg0 ;
-(BOOL)minimize;
-(BOOL)pinningPreventsInputViews:(id)arg0 ;
-(BOOL)shouldApplySettingsForBackdropView:(id)arg0 ;
-(BOOL)shouldUseHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry )arg0 ;
-(BOOL)userInfoContainsActualGeometryChange:(id)arg0 ;
-(CGFloat)getLastAutomaticDuration;
-(CGFloat)getVerticalOverlapForView:(id)arg0 usingKeyboardInfo:(id)arg1 ;
-(CGFloat)keyboardAttachedViewHeight;
-(CGFloat)minimumOffsetForBuffer:(CGFloat)arg0 ;
-(NSUInteger)_clipCornersOfView:(id)arg0 ;
-(id)_currentInputView;
-(id)_inheritedRenderConfig;
-(id)_inputViewsForResponder:(id)arg0 ;
-(id)_inputViewsForResponder:(id)arg0 withAutomaticKeyboard:(BOOL)arg1 ;
-(id)_renderConfigForCurrentResponder;
-(id)_renderConfigForResponder:(id)arg0 ;
-(id)_sceneForFirstResponder:(id)arg0 ;
-(id)_screenForFirstResponder:(id)arg0 ;
-(id)containerRootController;
-(id)containerTextEffectsWindow;
-(id)containerTextEffectsWindowAboveStatusBar;
-(id)containerWindow;
-(id)contentView;
-(id)existingContainerRootController;
-(id)init;
-(id)lastUsedInputModeForCurrentContext;
-(id)nextAnimationStyle;
-(id)nextAnimationStyle:(BOOL)arg0 ;
-(id)retain;
-(id)topAnimationStyle;
-(id)transformedContainerView;
-(id)transitioningView;
-(id)undockedInfoFromDefaultInfo:(id)arg0 forNotification:(id)arg1 ;
-(id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry )arg0 duration:(CGFloat)arg1 forWill:(BOOL)arg2 forShow:(BOOL)arg3 ;
-(int)_endIgnoringReloadInputViews;
-(int)_isKeyboardDeactivated;
-(struct CGPoint )adjustedPersistentOffset;
-(struct CGPoint )offHostPointForPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_inputViewRectToAvoid;
-(struct CGRect )screenRectFromBounds:(struct CGRect )arg0 atCenter:(struct CGPoint )arg1 applyingSourceHeightDelta:(CGFloat)arg2 ;
-(struct CGRect )transitioningFrame;
-(struct CGRect )visiblePeripheralFrame:(BOOL)arg0 ;
-(struct CGSize )sizeOfInputViewForInputViewSet:(id)arg0 withInterfaceOrientation:(NSInteger)arg1 ;
-(struct CGSize )totalPeripheralSizeForOrientation:(NSInteger)arg0 ;
-(void)_beginDisablingAnimations;
-(void)_beginIgnoringReloadInputViews;
-(void)_beginPersistingInputAccessoryViewForResponder:(id)arg0 withId:(id)arg1 ;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg0 ;
-(void)_clearMultiDocumentTokenIfNecessary:(id)arg0 withId:(id)arg1 ;
-(void)_clearPinningResponders;
-(void)_clearPreservedInputViewsWithId:(id)arg0 clearKeyboard:(BOOL)arg1 ;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg0 ;
-(void)_endDisablingAnimations;
-(void)_endPersistingInputAccessoryViewWithId:(id)arg0 ;
-(void)_onScreenStateDidChange;
-(void)_pinInputViewsOnBehalfOfResponder:(id)arg0 duringBlock:(id)arg1 ;
-(void)_preserveInputViewsWithId:(id)arg0 ;
-(void)_preserveInputViewsWithId:(id)arg0 animated:(BOOL)arg1 ;
-(void)_preserveInputViewsWithId:(id)arg0 animated:(BOOL)arg1 reset:(BOOL)arg2 ;
-(void)_reloadInputViewsForResponder:(id)arg0 ;
-(void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg0 ;
-(void)_restoreInputAccessoryViewOverrideWithId:(id)arg0 ;
-(void)_setHosted:(BOOL)arg0 ;
-(void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg0 ;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg0 ;
-(void)_updateContainerWindowLevel;
-(void)createAutomaticKeyboardIfNeeded;
-(void)dealloc;
-(void)disableInterfaceAutorotation:(BOOL)arg0 ;
-(void)enableKeyboardTyping;
-(void)extendKeyboardBackdropHeight:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;
-(void)fadeInInputViews:(BOOL)arg0 ;
-(void)fadeInputViewsIfNeeded;
-(void)finishRotation;
-(void)finishRotationOfKeyboard:(id)arg0 ;
-(void)flushDelayedTasks;
-(void)flushDelayedTasksForKey:(id)arg0 ;
-(void)forceOrderInAutomatic;
-(void)forceOrderInAutomaticAnimated:(BOOL)arg0 ;
-(void)forceOrderInAutomaticFromDirection:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)forceOrderOutAutomatic;
-(void)forceOrderOutAutomaticAnimated:(BOOL)arg0 ;
-(void)forceOrderOutAutomaticToDirection:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)forceReloadInputViews;
-(void)implBoundsHeightChangeDoneForGeometry:(struct UIPeripheralAnimationGeometry )arg0 ;
-(void)inputModeChangedForRenderConfig:(id)arg0 ;
-(void)layoutIfNeeded;
-(void)layoutInputViews;
-(void)logGeometryDescriptionFromUserInfo:(id)arg0 ;
-(void)manualKeyboardWasOrderedIn:(id)arg0 ;
-(void)manualKeyboardWasOrderedOut:(id)arg0 ;
-(void)manualKeyboardWillBeOrderedIn:(id)arg0 ;
-(void)manualKeyboardWillBeOrderedOut:(id)arg0 ;
-(void)moveToPersistentOffset;
-(void)orderInAutomatic;
-(void)orderInAutomaticFromDirection:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)orderInAutomaticSkippingAnimation;
-(void)orderInWithAnimationStyle:(id)arg0 ;
-(void)orderOutAutomatic;
-(void)orderOutAutomaticExceptAccessoryView;
-(void)orderOutAutomaticSkippingAnimation;
-(void)orderOutAutomaticToDirection:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)orderOutWithAnimation:(BOOL)arg0 toDirection:(int)arg1 duration:(CGFloat)arg2 ;
-(void)orderOutWithAnimationStyle:(id)arg0 ;
// -(void)performMultipleOperations:(id)arg0 withAnimationStyle:(unk)arg1  ;
-(void)performWithAllowingNilResponderReload:(id)arg0 ;
-(void)performWithoutDeactivation:(id)arg0 ;
-(void)peripheralHostWillResume:(id)arg0 ;
-(void)peripheralViewMinMaximized:(BOOL)arg0 state:(id)arg1 ;
-(void)popAnimationStyle;
-(void)postDidHideNotification;
-(void)postDidHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry )arg0 ;
-(void)postDidShowNotification;
-(void)postDidShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry )arg0 ;
-(void)postKeyboardFrameChangeNotification:(id)arg0 withInfo:(id)arg1 ;
-(void)postWillHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry )arg0 duration:(CGFloat)arg1 ;
-(void)postWillShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry )arg0 duration:(CGFloat)arg1 ;
-(void)prepareForAlongsideTransitionWithContext:(id)arg0 ;
-(void)prepareForPinning;
-(void)prepareForRotationOfKeyboard:(id)arg0 toOrientation:(NSInteger)arg1 ;
-(void)prepareForRotationToOrientation:(NSInteger)arg0 ;
-(void)prepareToMoveKeyboardForInputViewSet:(id)arg0 animationStyle:(id)arg1 ;
-(void)pushAnimationStyle:(id)arg0 ;
-(void)queueDelayedTask:(id)arg0 ;
// -(void)queueDelayedTask:(id)arg0 forKey:(unk)arg1  ;
-(void)removePreservedInputViewSetForInputView:(id)arg0 ;
-(void)resetCurrentOrderOutAnimationDuration:(CGFloat)arg0 ;
-(void)resetNextAutomaticOrderInDirectionAndDuration;
-(void)rotateKeyboard:(id)arg0 toOrientation:(NSInteger)arg1 ;
-(void)rotateToOrientation:(NSInteger)arg0 ;
-(void)scrollView:(id)arg0 didFinishPanGesture:(id)arg1 ;
-(void)scrollView:(id)arg0 didPanWithGesture:(id)arg1 ;
-(void)setAccessoryViewVisible:(BOOL)arg0 delay:(CGFloat)arg1 ;
-(void)setDeactivatedKeyboard:(BOOL)arg0 forScene:(id)arg1 ;
-(void)setKeyboardFencingEnabled:(BOOL)arg0 ;
-(void)setKeyboardOnScreenNotifyKey:(BOOL)arg0 ;
-(void)setNextAutomaticOrderInDirection:(int)arg0 duration:(CGFloat)arg1 ;
-(void)setTextEffectsWindowLevelForInputView:(id)arg0 responder:(id)arg1 ;
-(void)setUndockedWithOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setkeyboardAttachedViewHeight:(CGFloat)arg0 ;
-(void)showInputViewsIfNeeded;
-(void)textEffectsWindowDidRotate:(id)arg0 ;
-(void)updateBackdrop;
-(void)updateInputAccessoryViewVisibility:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)updateRenderConfigForCurrentResponder;
-(void)updateRenderConfigForResponder:(id)arg0 ;
-(void)updateToPlacement:(id)arg0 withNormalAnimationsAndNotifications:(BOOL)arg1 ;


@end


#endif