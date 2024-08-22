// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPERIPHERALHOST_H
#define UIPERIPHERALHOST_H

@class UIPeripheralHostView, CADisplayLink, NSMutableArray, NSMutableDictionary, NSString;
@protocol UIScrollViewIntersectionDelegate, UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "UIInputViewSet.h"
#import "UITextInputMode.h"
#import "UIResponder.h"
#import "UIKeyboardRotationState.h"
#import "UIPeripheralHostState.h"
#import "UIView.h"

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIGestureRecognizerDelegate>

 {
    UIPeripheralHostView *_hostView;
    BOOL _automaticAppearanceEnabledInternal;
    int _ignoredReloads;
    int _nextAutomaticOrderInDirection;
    BOOL _isTranslating;
    BOOL _isUndocked;
    BOOL _splitLockState;
    CADisplayLink *_displayLink;
    CGAffineTransform _targetTransform;
    CGAffineTransform _initialTransform;
    CGPoint _velocity;
    CGRect _lastKnownIVFrame;
    CGRect _lastKnownIAVFrame;
    NSInteger _disableAnimationsCount;
    NSMutableArray *_targetStateStack;
    BOOL _interfaceAutorotationDisabled;
    CGFloat _ambiguousControlCenterActivationMargin;
    NSMutableDictionary *_deferredTransitionTasks;
}


@property (retain, nonatomic) UIInputViewSet *_inputViews; // ivar: _inputViewSet
@property (retain, nonatomic) UIInputViewSet *_transientInputViews; // ivar: _transientInputViewSet
@property (nonatomic) CGFloat ambiguousControlCenterActivationMargin;
@property (nonatomic) BOOL animationFencingEnabled;
@property (nonatomic) BOOL animationFencingEnabled; // ivar: _animationFencingEnabled
@property (readonly, nonatomic) BOOL animationsEnabled;
@property (nonatomic) BOOL automaticAppearanceEnabled; // ivar: _automaticAppearanceEnabled
@property (nonatomic) BOOL automaticAppearanceInternalEnabled;
@property (readonly, nonatomic) BOOL automaticAppearanceReallyEnabled;
@property (nonatomic) int currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextInputMode *documentInputMode; // ivar: _documentInputMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIInputViewSet *inputViews;
@property (readonly, nonatomic) BOOL keyClicksEnabled;
@property (readonly, nonatomic) UIInputViewSet *loadAwareInputViews;
@property (readonly, nonatomic) UIResponder *responder;
@property (retain, nonatomic) UIResponder *responder; // ivar: _responder
@property (retain, nonatomic) UIKeyboardRotationState *rotationState; // ivar: _rotationState
@property (readonly) Class superclass;
@property (retain, nonatomic) UIPeripheralHostState *targetState;
@property (readonly, nonatomic) UIView *view;


+(BOOL)inputViewSetContainsView:(id)arg0 ;
+(BOOL)pointIsWithinKeyboardContent:(struct CGPoint )arg0 ;
+(CGFloat)gridViewRubberBandValueForValue:(CGFloat)arg0 target:(CGFloat)arg1 timeInterval:(CGFloat)arg2 velocity:(*CGFloat)arg3 ;
+(Class)floatingAssistantBarPlacementClassSupportingCompactStyle:(BOOL)arg0 ;
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
-(BOOL)_isCoordinatingWithSystemGestures;
-(BOOL)_isSuppressedByManualKeyboard;
-(BOOL)_isTransitioning;
-(BOOL)_restoreInputViewsWithId:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)_shouldDelayRotationForWindow:(id)arg0 ;
-(BOOL)hasCustomInputView;
-(BOOL)hasDelayedTasksForKey:(id)arg0 ;
-(BOOL)hasDictationKeyboard;
-(BOOL)isOffScreen;
-(BOOL)isOnScreen;
-(BOOL)isRotating;
-(BOOL)isTranslating;
-(BOOL)isUndocked;
-(BOOL)maximize;
-(BOOL)maximizeWithAnimation:(BOOL)arg0 ;
-(BOOL)minimize;
-(BOOL)shouldUseHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry )arg0 ;
-(BOOL)userInfoContainsActualGeometryChange:(id)arg0 ;
-(CGFloat)getVerticalOverlapForView:(id)arg0 usingKeyboardInfo:(id)arg1 ;
-(CGFloat)minimumOffsetForBuffer:(CGFloat)arg0 ;
-(NSUInteger)_clipCornersOfView:(id)arg0 ;
-(id)_currentInputView;
-(id)_inheritedRenderConfig;
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
-(id)transformedContainerView;
-(id)transitioningView;
-(id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry )arg0 duration:(CGFloat)arg1 forWill:(BOOL)arg2 forShow:(BOOL)arg3 ;
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
-(void)_clearPreservedInputViewsWithId:(id)arg0 clearKeyboard:(BOOL)arg1 ;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg0 ;
-(void)_endDisablingAnimations;
-(void)_preserveInputViewsWithId:(id)arg0 ;
-(void)_preserveInputViewsWithId:(id)arg0 animated:(BOOL)arg1 ;
-(void)_preserveInputViewsWithId:(id)arg0 animated:(BOOL)arg1 reset:(BOOL)arg2 ;
-(void)_restoreInputAccessoryViewOverrideWithId:(id)arg0 ;
-(void)_updateContainerWindowLevel;
-(void)dealloc;
-(void)disableInterfaceAutorotation:(BOOL)arg0 ;
-(void)enableKeyboardTyping;
-(void)extendKeyboardBackdropHeight:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;
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
-(void)logGeometryDescriptionFromUserInfo:(id)arg0 ;
-(void)manualKeyboardWasOrderedIn:(id)arg0 ;
-(void)manualKeyboardWasOrderedOut:(id)arg0 ;
-(void)manualKeyboardWillBeOrderedIn:(id)arg0 ;
-(void)manualKeyboardWillBeOrderedOut:(id)arg0 ;
-(void)moveToPersistentOffset;
-(void)orderInAutomatic;
-(void)orderInAutomaticFromDirection:(int)arg0 withDuration:(CGFloat)arg1 ;
-(void)orderInAutomaticSkippingAnimation;
-(void)orderOutAutomatic;
-(void)orderOutAutomaticSkippingAnimation;
-(void)orderOutAutomaticToDirection:(int)arg0 withDuration:(CGFloat)arg1 ;
// -(void)performMultipleOperations:(id)arg0 withAnimationStyle:(unk)arg1  ;
-(void)performWithoutDeactivation:(id)arg0 ;
-(void)peripheralHostWillResume:(id)arg0 ;
-(void)popAnimationStyle;
-(void)postDidShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry )arg0 ;
-(void)postKeyboardFrameChangeNotification:(id)arg0 withInfo:(id)arg1 ;
-(void)postWillShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry )arg0 duration:(CGFloat)arg1 ;
-(void)prepareForRotationOfKeyboard:(id)arg0 toOrientation:(NSInteger)arg1 ;
-(void)prepareForRotationToOrientation:(NSInteger)arg0 ;
-(void)pushAnimationStyle:(id)arg0 ;
-(void)queueDelayedTask:(id)arg0 ;
// -(void)queueDelayedTask:(id)arg0 forKey:(unk)arg1  ;
// -(void)queueDelayedTask:(id)arg0 forKey:(unk)arg1 delay:(id)arg2  ;
-(void)removePreservedInputViewSetForInputView:(id)arg0 ;
-(void)rotateKeyboard:(id)arg0 toOrientation:(NSInteger)arg1 ;
-(void)rotateToOrientation:(NSInteger)arg0 ;
-(void)scrollView:(id)arg0 didFinishPanGesture:(id)arg1 ;
-(void)scrollView:(id)arg0 didPanWithGesture:(id)arg1 ;
-(void)setDeactivatedKeyboard:(BOOL)arg0 forScene:(id)arg1 ;
-(void)setDeactivatedKeyboard:(BOOL)arg0 forScene:(id)arg1 suppressingAccessories:(BOOL)arg2 ;
-(void)setKeyboardFencingEnabled:(BOOL)arg0 ;
-(void)setKeyboardOnScreenNotifyKey:(BOOL)arg0 ;
-(void)setTextEffectsWindowLevelForInputView:(id)arg0 responder:(id)arg1 ;
-(void)setUndockedWithOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)textEffectsWindowDidRotate:(id)arg0 ;
-(void)updateInputAccessoryViewVisibility:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)updateToPlacement:(id)arg0 withNormalAnimationsAndNotifications:(BOOL)arg1 ;


@end


#endif