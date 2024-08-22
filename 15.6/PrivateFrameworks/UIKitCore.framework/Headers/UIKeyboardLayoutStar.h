// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDLAYOUTSTAR_H
#define UIKEYBOARDLAYOUTSTAR_H

@class NSMutableDictionary, NSMutableSet, CADisplayLink, NSString, NSTimer, NSMutableArray, NSNumber, NSDate, NSLayoutConstraint, NSArray;
@protocol UIKBEmojiHitTestResponder, UIKBResizingKeyplaneCoordinatorCoordinatorDelegate, UIKeyboardPinchGestureRecognizerDelegate, UIKeyboardTypingStyleEstimatorDelegate, UIKBKeyplaneViewDelegate, UITextCursorAssertion, UIKeyboardLayoutStarDelegate;


#import "UIKeyboardLayout.h"
#import "UIKBTree.h"
#import "UIKBKeyplaneView.h"
#import "UIKBBackgroundView.h"
#import "UIKBKeyViewAnimator.h"
#import "UISwipeGestureRecognizer.h"
#import "UIKeyboardPinchGestureRecognizer.h"
#import "UIKeyboardSplitTransitionView.h"
#import "UIDelayedAction.h"
#import "UIView.h"
#import "_UIKeyboardTypingSpeedLogger.h"
#import "UIKBRenderConfig.h"
#import "UIGestureKeyboardIntroduction.h"
#import "UIKBResizingKeyplaneCoordinator.h"
#import "UIButton.h"
#import "UIImageView.h"
#import "UIKeyboardPathEffectView.h"
#import "UIKeyboardEmojiKeyDisplayController.h"
#import "UISelectionFeedbackGenerator.h"

@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder, UIKBResizingKeyplaneCoordinatorCoordinatorDelegate, UIKeyboardPinchGestureRecognizerDelegate, UIKeyboardTypingStyleEstimatorDelegate, UIKBKeyplaneViewDelegate>

 {
    NSInteger _appearance;
    UIKBTree *_inactiveLanguageIndicator;
    UIKBKeyplaneView *_keyplaneView;
    UIKBBackgroundView *_backgroundView;
    UIKBKeyViewAnimator *_keyViewAnimator;
    CGFloat _prevTouchUpTime;
    CGFloat _prevTouchUpFinishedTime;
    CGFloat _prevTouchDownTime;
    NSUInteger _prevUpActions;
    NSMutableDictionary *_keyboards;
    NSMutableDictionary *_allKeyplaneViews;
    NSMutableSet *_allKeyplaneKeycaps;
    NSMutableSet *_validInputStrings;
    *__CFDictionary _extendedTouchInfoMap;
    int _preferredTrackingChangeCount;
    int _shiftTrackingChangeCount;
    NSMutableSet *_accentInfo;
    NSMutableSet *_hasAccents;
    id *_spaceTarget;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id *_returnTarget;
    SEL _returnAction;
    SEL _returnLongAction;
    id *_deleteTarget;
    SEL _deleteAction;
    SEL _deleteLongAction;
    BOOL _settingShift;
    BOOL _holdingShift;
    BOOL _revertKeyplaneAfterTouch;
    BOOL _wasShifted;
    BOOL _swipeDetected;
    BOOL _suppressDeactivateKeys;
    BOOL _suppressShiftKeyplaneAnimation;
    BOOL _isTrackpadMode;
    BOOL _shiftLockReady;
    CGFloat _shiftLockFirstTapTime;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    UIKeyboardPinchGestureRecognizer *_pinchGestureRecognizer;
    UIKeyboardSplitTransitionView *_transitionView;
    CGFloat _initialSplitProgress;
    CGFloat _finalSplitProgress;
    CGFloat _autoSplitLastUpdate;
    CGFloat _autoSplitElapsedTime;
    CADisplayLink *_displayLink;
    BOOL _ghostKeysEnabled;
    UIDelayedAction *_delayedCentroidUpdate;
    BOOL _isRebuilding;
    NSInteger _currentHandBias;
    BOOL _preRotateShift;
    NSString *_preRotateKeyplaneName;
    BOOL _preRotateTrackpadMode;
    UIDelayedAction *_multitapAction;
    BOOL _unshiftAfterMultitap;
    int _multitapCount;
    UIKBTree *_multitapKey;
    UIView *_flickPopupView;
    NSMutableDictionary *_compositeImages;
    NSTimer *_flickPopuptimer;
    id *_touchInfo;
    UIView *_dimKeyboardImageView;
    BOOL _keyboardImageViewIsDim;
    BOOL _isOutOfBounds;
    BOOL _inDealloc;
    NSMutableSet *_keysUnderIndicator;
    _UIKeyboardTypingSpeedLogger *_typingSpeedLogger;
    UIKBRenderConfig *_passcodeRenderConfig;
    NSInteger _setKeyplaneViewCount;
    BOOL _inputTraitsPreventInitialReuse;
    BOOL _settingFloat;
    NSMutableSet *_leftKeySet;
    NSMutableSet *_rightKeySet;
    CGPoint _leftDriftOffset;
    CGPoint _rightDriftOffset;
    NSMutableArray *_leftSideReachability;
    NSMutableArray *_rightSideReachability;
    NSNumber *_homeRowHint;
    CGFloat _touchDownTimeSpan;
    NSDate *_prevTouchMoreKeyTime;
    NSDate *_prevProgressiveCandidateRequestTime;
    NSTimer *_progressiveCandidateUpdateTimer;
    NSString *_lastInputMode;
    BOOL _pendingDictationReload;
    BOOL _hasPeekedGestureKey;
    BOOL _lastInputIsGestureKey;
    UIGestureKeyboardIntroduction *_gestureKeyboardIntroduction;
    BOOL _dictationUsingServerManualEndpointing;
    BOOL _splitTransitionNeedsRebuild;
    UIKBResizingKeyplaneCoordinator *_resizingKeyplaneCoordinator;
    UIButton *_biasEscapeButton;
    NSLayoutConstraint *_biasEscapeButtonLeftConstraint;
    NSLayoutConstraint *_biasEscapeButtonRightConstraint;
    NSMutableSet *_keyplaneTransformations;
    UIImageView *_pathEffectGlowView;
    UIKeyboardPathEffectView *_pathEffectView;
    NSArray *_pathEffectViewConstraints;
    BOOL _isContinuousPathUnderway;
    UIView *_keyplaneTransformationAreaView;
    BOOL _externalDictationAndInternationalKeys;
    BOOL _showsPunctuationKeysOnPrimaryKeyplane;
}


@property (retain, nonatomic) UIKBTree *activeKey; // ivar: _activeKey
@property (nonatomic) BOOL autoShift; // ivar: _autoshift
@property (retain, nonatomic) NSObject<UITextCursorAssertion> *blinkAssertion; // ivar: _blinkAssertion
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<UIKeyboardLayoutStarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLongPress; // ivar: _didLongPress
@property (readonly, nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager; // ivar: _emojiKeyManager
@property (readonly, nonatomic) BOOL hasActiveKeys;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIKBTree *keyboard; // ivar: _keyboard
@property (copy, nonatomic) NSString *keyboardName; // ivar: _keyboardName
@property (readonly, nonatomic) UIKBTree *keyplane; // ivar: _keyplane
@property (copy, nonatomic) NSString *keyplaneName; // ivar: _keyplaneName
@property (nonatomic) CGFloat lastTwoFingerTapTimestamp; // ivar: _lastTwoFingerTapTimestamp
@property (retain, nonatomic) NSString *layoutTag; // ivar: _layoutTag
@property (copy, nonatomic) NSString *localizedInputKey; // ivar: _localizedInputKey
@property (readonly, nonatomic) NSString *localizedInputMode;
@property (retain, nonatomic) UIView *modalDisplayView; // ivar: _modalDisplayView
@property (nonatomic) BOOL muteNextKeyClickSound; // ivar: _muteNextKeyClickSound
@property (retain, nonatomic) UIKeyboardPathEffectView *pathEffectView;
@property (nonatomic) int playKeyClickSoundOn; // ivar: playKeyClickSoundOn
@property (copy, nonatomic) NSString *preTouchKeyplaneName; // ivar: _preTouchKeyplaneName
@property (nonatomic) BOOL preventPaddlesForPointerTouches; // ivar: _preventPaddlesForPointerTouches
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (readonly, nonatomic, getter=isRotating) BOOL rotating;
@property (nonatomic) BOOL shift; // ivar: _shift
@property (readonly, nonatomic) BOOL showsDictationKey; // ivar: _showDictationKey
@property (readonly, nonatomic) BOOL showsInternationalKey; // ivar: _showIntlKey
@property (retain, nonatomic) UISelectionFeedbackGenerator *slideBehaviour; // ivar: _slideBehaviour
@property (readonly) Class superclass;


+(Class)_subclassForScreenTraits:(id)arg0 ;
+(id)keyboardFromFactoryWithName:(id)arg0 screenTraits:(id)arg1 ;
+(id)keyboardWithName:(id)arg0 screenTraits:(id)arg1 ;
+(id)sharedPunctuationCharacterSet;
+(id)sharedRivenKeyplaneGenerator;
+(struct CGSize )keyboardSizeForInputMode:(id)arg0 screenTraits:(id)arg1 keyboardType:(NSInteger)arg2 ;
+(void)accessibilitySensitivityChanged;
-(BOOL)_allowContinuousPathUI;
-(BOOL)_allowPaddle;
-(BOOL)_allowStartingContinuousPathForTouchInfo:(id)arg0 alreadyActiveKeyExisting:(BOOL)arg1 ;
-(BOOL)_continuousPathModalPunctuationPlaneEnabled;
-(BOOL)_continuousPathSpotlightEffectEnabled;
-(BOOL)_handRestRecognizerCancelShouldBeEnd;
-(BOOL)_handleTouchForEmojiInputView;
-(BOOL)_pointAllowedInStaticHitBuffer:(struct CGPoint )arg0 ;
-(BOOL)_shouldAttemptToAddSupplementaryControlKeys;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(BOOL)_stringContainsCurrencyCharacters:(id)arg0 ;
-(BOOL)allKeyplanesHaveSameHeight;
-(BOOL)canAddRomanSwitchKey;
-(BOOL)canForceTouchUUIDCommit:(id)arg0 inWindow:(id)arg1 ;
-(BOOL)canMultitap;
-(BOOL)canProduceString:(id)arg0 ;
-(BOOL)canReuseKeyplaneView;
-(BOOL)diacriticForwardCompose;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)globeKeyDisplaysAsEmojiKey;
-(BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg0 fromPoint:(struct CGPoint )arg1 toPoint:(struct CGPoint )arg2 forRestingState:(NSUInteger)arg3 otherRestedTouchLocations:(id)arg4 ;
-(BOOL)handleFlick:(id)arg0 ;
-(BOOL)hasAccentKey;
-(BOOL)hasActiveContinuousPathInput;
-(BOOL)hasCandidateKeys;
-(BOOL)ignoreWriteboard;
-(BOOL)ignoresShiftState;
-(BOOL)is10KeyRendering;
-(BOOL)isAlphabeticPlane;
-(BOOL)isDeadkeyInput:(id)arg0 ;
-(BOOL)isDeveloperGestureKeybaord;
-(BOOL)isEmojiKeyplane;
-(BOOL)isGeometricShiftOrMoreKeyForTouch:(id)arg0 ;
-(BOOL)isHandwritingPlane;
-(BOOL)isKanaPlane;
-(BOOL)isKeyScriptSwitchKey:(id)arg0 ;
-(BOOL)isLongPressedKey:(id)arg0 ;
-(BOOL)isMultitapKey:(id)arg0 ;
-(BOOL)isResized;
-(BOOL)isResizing;
-(BOOL)isShiftKeyBeingHeld;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)isTrackpadMode;
-(BOOL)keyHasAccentedVariants:(id)arg0 ;
-(BOOL)performReturnAction;
-(BOOL)performSpaceAction;
-(BOOL)pinchCanBeginWithTouches:(id)arg0 andScale:(CGFloat)arg1 ;
-(BOOL)pinchDetected;
-(BOOL)pinchSplitGestureEnabled;
-(BOOL)pointInside:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldAllowCurrentKeyplaneReload;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg0 atPoint:(struct CGPoint )arg1 toBegin:(BOOL)arg2 ;
-(BOOL)shouldCommitPrecedingTouchesForTouchDownWithActions:(NSUInteger)arg0 ;
-(BOOL)shouldDeactivateWithoutWindow;
-(BOOL)shouldHitTestKey:(id)arg0 ;
-(BOOL)shouldIgnoreContinuousPathRequirements;
-(BOOL)shouldIgnoreDistantKey;
-(BOOL)shouldMatchCaseForDomainKeys;
-(BOOL)shouldMergeAssistantBarWithKeyboardLayout;
-(BOOL)shouldMergeKey:(id)arg0 ;
-(BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg0 ;
-(BOOL)shouldRetestKey:(id)arg0 slidOffKey:(id)arg1 withKeyplane:(id)arg2 ;
-(BOOL)shouldRetestTouchDraggedFromKey:(id)arg0 ;
-(BOOL)shouldRetestTouchUp:(id)arg0 ;
-(BOOL)shouldSendStringForFlick:(id)arg0 ;
-(BOOL)shouldSendTouchUpToInputManager:(id)arg0 ;
-(BOOL)shouldShowDictationKey;
-(BOOL)shouldShowGestureKeyboardIntroduction;
-(BOOL)shouldShowIndicator;
-(BOOL)shouldShowInternationalMenuForKey:(id)arg0 ;
-(BOOL)shouldSkipResponseToGlobeKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(BOOL)shouldUseDefaultShiftStateFromLayout;
-(BOOL)shouldYieldToControlCenterForFlickWithInitialPoint:(struct CGPoint )arg0 finalPoint:(struct CGPoint )arg1 ;
-(BOOL)showGestureKeyboardIntroductionIfNeeded;
-(BOOL)showsDedicatedEmojiKeyAlongsideGlobeButton;
-(BOOL)stretchKeyboardToFit;
-(BOOL)stretchKeyboardToFitKeyplane:(id)arg0 ;
-(BOOL)supportStylingWithKey:(id)arg0 ;
-(BOOL)supportsContinuousPath;
-(BOOL)supportsEmoji;
-(BOOL)touchPassesDragThreshold:(id)arg0 ;
-(BOOL)useDismissForMessagesWriteboard;
-(BOOL)useUndoForMessagesWriteboard;
-(BOOL)usesAutoShift;
-(CGFloat)biasedKeyboardWidthRatio;
-(CGFloat)hitBuffer;
-(CGFloat)lastTouchDownTimestamp;
-(CGFloat)lastTouchUpTimestamp;
-(CGFloat)stretchFactorHeight;
-(Class)keyViewAnimatorClassForCurrentKeyboardLayout;
-(NSInteger)currentHandBias;
-(NSInteger)defaultSelectedVariantIndexForKey:(id)arg0 withActions:(NSUInteger)arg1 ;
-(NSUInteger)downActionFlagsForKey:(id)arg0 ;
-(NSUInteger)targetEdgesForScreenGestureRecognition;
-(NSUInteger)textEditingKeyMask;
-(NSUInteger)upActionFlagsForKey:(id)arg0 ;
-(SEL)handlerForNotification:(id)arg0 ;
-(id)_appendingSecondaryStringToVariantsTop:(id)arg0 secondaryString:(id)arg1 withDirection:(id)arg2 ;
-(id)_currentKeyplaneTransformationContext;
-(id)_keyplaneVariantsKeyForString:(id)arg0 ;
-(id)_variantsByAppendingDualStringKey:(id)arg0 toVariants:(id)arg1 ;
-(id)_variantsOfCurrencyKey:(id)arg0 language:(id)arg1 ;
-(id)activationIndicatorView;
-(id)activeMultitapCompleteKey;
-(id)activeTouchInfoForShift;
-(id)baseKeyForString:(id)arg0 ;
-(id)cacheIdentifierForKeyplaneNamed:(id)arg0 ;
-(id)cacheTokenForKeyplane:(id)arg0 caseAlternates:(BOOL)arg1 ;
-(id)candidateList;
-(id)createKeyEventForStringAction:(id)arg0 forKey:(id)arg1 inputFlags:(int)arg2 ;
-(id)createKeyEventForStringAction:(id)arg0 forKey:(id)arg1 touchInfo:(id)arg2 inputFlags:(int)arg3 ;
-(id)currentKeyplane;
-(id)currentKeyplaneView;
-(id)currentRepresentedStringForDualDisplayKey:(id)arg0 ;
-(id)defaultKeyplaneForKeyplane:(id)arg0 ;
-(id)defaultNameForKeyplaneName:(id)arg0 ;
-(id)flickPopupStringForKey:(id)arg0 withString:(id)arg1 ;
-(id)flickStringForInputKey:(id)arg0 direction:(NSInteger)arg1 ;
-(id)generateInfoForTouch:(id)arg0 ;
-(id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(NSInteger)arg0 ;
-(id)getSortedKeysForDisplayRowHint:(int)arg0 ;
-(id)handRestRecognizerGetHomeRowHint;
-(id)handRestRecognizerSilenceNextTouchDown:(SEL)arg0 ;
-(id)highlightedVariantListForStylingKey:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hostViewForResizingKeyplane:(id)arg0 ;
-(id)infoForTouch:(id)arg0 ;
-(id)infoForTouchUUID:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initialKeyplaneNameWithKBStarName:(id)arg0 ;
-(id)inputModeToMergeCapsLockKey;
-(id)internationalKeyDisplayStringOnEmojiKeyboard;
-(id)keyForKeyboardName:(id)arg0 screenTraits:(id)arg1 ;
-(id)keyHitTest:(struct CGPoint )arg0 ;
-(id)keyHitTestClosestToPoint:(struct CGPoint )arg0 ;
-(id)keyHitTestClosestToPoint:(struct CGPoint )arg0 inKeys:(id)arg1 ;
-(id)keyHitTestContainingPoint:(struct CGPoint )arg0 ;
-(id)keyHitTestWithoutCharging:(struct CGPoint )arg0 ;
-(id)keyViewAnimator;
-(id)keyViewHitTestForPoint:(struct CGPoint )arg0 ;
-(id)keyWithRepresentedString:(id)arg0 ;
-(id)keylistContainingKey:(id)arg0 ;
-(id)keyplaneForKey:(id)arg0 ;
-(id)keyplaneNamed:(id)arg0 ;
-(id)keyplaneView:(id)arg0 containingViewForActiveKey:(id)arg1 ;
-(id)multitapCompleteKeys;
-(id)multitapForwardKeys;
-(id)popupKeyViews;
-(id)simulateTouch:(struct CGPoint )arg0 ;
-(id)simulateTouchForCharacter:(id)arg0 errorVector:(struct CGPoint )arg1 shouldTypeVariants:(BOOL)arg2 baseKeyForVariants:(BOOL)arg3 ;
-(id)splitNameForKeyplane:(id)arg0 ;
-(id)splitNameForKeyplaneName:(id)arg0 ;
-(id)synthesizeTouchUpEventForKey:(id)arg0 ;
-(id)touchInfoForKey:(id)arg0 ;
-(id)unprocessedTouchEventsForTouchInfo:(id)arg0 touchStage:(int)arg1 forcedKeyCode:(int)arg2 ;
-(int)displayTypeHintForMoreKey;
-(int)displayTypeHintForShiftKey;
-(int)keycodeForKey:(id)arg0 ;
-(int)stateForCandidateListKey:(id)arg0 ;
-(int)stateForDictationKey:(id)arg0 ;
-(int)stateForKey:(id)arg0 ;
-(int)stateForKeyplaneSwitchKey:(id)arg0 ;
-(int)stateForManipulationKey:(id)arg0 ;
-(int)stateForMultitapForwardKey:(id)arg0 ;
-(int)stateForMultitapReverseKey:(id)arg0 ;
-(int)stateForShiftKey:(id)arg0 ;
-(int)stateForStylingKey:(id)arg0 ;
-(int)visualStyleForKeyboardIfSplit:(BOOL)arg0 ;
-(struct CGImage *)cachedCompositeImageWithCacheKey:(id)arg0 ;
-(struct CGImage *)renderedImageWithStateFallbacksForToken:(id)arg0 ;
-(struct CGImage *)renderedImageWithToken:(id)arg0 ;
-(struct CGImage *)renderedKeyplaneWithToken:(id)arg0 split:(BOOL)arg1 ;
-(struct CGPoint )applyError:(struct CGPoint )arg0 toKey:(id)arg1 ;
-(struct CGPoint )getCenterForKeyUnderLeftIndexFinger;
-(struct CGPoint )getCenterForKeyUnderRightIndexFinger;
-(struct CGRect )_paddedKeyUnionFrame;
-(struct CGRect )dragGestureRectInView:(id)arg0 ;
-(struct CGRect )frameForKeyWithRepresentedString:(id)arg0 ;
-(struct CGRect )frameForKeylayoutName:(id)arg0 ;
-(struct CGRect )frameForKeylayoutName:(id)arg0 onKeyplaneName:(id)arg1 ;
-(struct CGRect )frameForLastKeyWithRepresentedString:(id)arg0 ;
-(struct CGSize )handRestRecognizerStandardKeyPixelSize;
-(struct CGSize )sizeForKeyplane:(id)arg0 ;
-(struct CGSize )stretchFactor;
-(unsigned char)getHandRestRecognizerState;
-(void)_addExtraControlKeysIfNecessary;
-(void)_addResizeTransformationIfNecessary;
-(void)_autoSplit:(id)arg0 ;
-(void)_cleanUpBlinkAssertionIfNecessary;
-(void)_didChangeKeyplaneWithContext:(id)arg0 ;
-(void)_didTapBiasEscapeButton:(id)arg0 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_recordKeystrokeStatisticForKeyPress;
-(void)_setBiasEscapeButtonVisible:(BOOL)arg0 ;
-(void)_setReturnKeyEnabled:(BOOL)arg0 withDisplayName:(id)arg1 withType:(int)arg2 ;
-(void)_swapGlobeAndMoreKeysIfNecessary;
-(void)_transformCarPlayIfNecessary;
-(void)_transformFloatingKeyboardIfNecessary;
-(void)_transitionToContinuousPathState:(NSInteger)arg0 forTouchInfo:(id)arg1 ;
-(void)_updateSupplementaryKeys;
-(void)accessibilitySensitivityChanged;
-(void)addContinuousPathPoint:(struct CGPoint )arg0 withTimestamp:(CGFloat)arg1 ;
-(void)annotateKeysWithDeveloperPunctuation;
-(void)annotateWriteboardDisplayTypeHintForKeyIfNeeded;
-(void)calculateReachabilityScoreWithKey:(id)arg0 keyError:(struct CGPoint )arg1 ;
-(void)cancelDelayedCentroidUpdate;
-(void)cancelMultitapTimer;
-(void)cancelTouchIfNecessaryForInfo:(id)arg0 forResting:(BOOL)arg1 ;
-(void)cancelTouchesForTwoFingerTapGesture:(id)arg0 ;
-(void)changeToKeyplane:(id)arg0 ;
-(void)cleanupPreviousKeyboardWithNewInputTraits:(id)arg0 ;
-(void)clearAllTouchInfo;
-(void)clearContinuousPathView;
-(void)clearHandwritingStrokesIfNeededAndNotify:(BOOL)arg0 ;
-(void)clearInfoForTouch:(id)arg0 ;
-(void)clearInfoForTouch:(id)arg0 forResting:(BOOL)arg1 ;
-(void)clearKeyAnnotationsIfNecessary;
-(void)clearTransientState;
-(void)clearUnusedObjects:(BOOL)arg0 ;
-(void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg0 withActions:(NSUInteger)arg1 executionContext:(id)arg2 ;
-(void)completeDeleteActionForTouchDownWithActions:(NSUInteger)arg0 executionContext:(id)arg1 ;
-(void)completeHitTestForTouchDown:(id)arg0 executionContext:(id)arg1 ;
-(void)completeHitTestForTouchDragged:(id)arg0 hitKey:(id)arg1 ;
-(void)completeRetestForTouchUp:(id)arg0 timestamp:(CGFloat)arg1 interval:(CGFloat)arg2 executionContext:(id)arg3 ;
-(void)completeSendStringActionForTouchDownWithKey:(id)arg0 withActions:(NSUInteger)arg1 executionContext:(id)arg2 ;
-(void)completeSendStringActionForTouchUp:(id)arg0 withActions:(NSUInteger)arg1 timestamp:(CGFloat)arg2 interval:(CGFloat)arg3 didLongPress:(BOOL)arg4 prevActions:(NSUInteger)arg5 executionContext:(id)arg6 ;
-(void)continueFromInternationalActionForTouchUp:(id)arg0 withActions:(NSUInteger)arg1 timestamp:(CGFloat)arg2 interval:(CGFloat)arg3 didLongPress:(BOOL)arg4 prevActions:(NSUInteger)arg5 executionContext:(id)arg6 ;
-(void)deactivateActiveKey;
-(void)deactivateActiveKeys;
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg0 clearingDimming:(BOOL)arg1 ;
-(void)dealloc;
-(void)deleteHandwritingStrokesAtIndexes:(id)arg0 ;
-(void)didBeginContinuousPath;
-(void)didClearInput;
-(void)didDetectPinchWithSeparation:(CGFloat)arg0 ;
-(void)didEndIndirectSelectionGesture;
-(void)didEndIndirectSelectionGesture:(BOOL)arg0 ;
-(void)didMoveToWindow;
-(void)didRotate;
-(void)didTriggerDestructiveRenderConfigChange;
-(void)dismissGestureKeyboardIntroduction;
-(void)divideKeysIntoLeft:(id)arg0 right:(id)arg1 ;
-(void)downActionShiftWithKey:(id)arg0 ;
-(void)endMultitapForKey:(id)arg0 ;
-(void)fadeWithInvocation:(id)arg0 ;
-(void)finishContinuousPathView:(BOOL)arg0 ;
-(void)finishSliderBehaviorFeedback;
-(void)finishSplitTransition;
-(void)finishSplitTransitionWithCompletion:(id)arg0 ;
-(void)finishSplitTransitionWithProgress:(CGFloat)arg0 ;
-(void)finishSplitWithCompletion:(id)arg0 ;
-(void)flushKeyCache:(id)arg0 ;
-(void)handRestRecognizerNotifyRestForBegin:(BOOL)arg0 location:(struct CGPoint )arg1 timestamp:(CGFloat)arg2 pathIndex:(int)arg3 touchUUID:(id)arg4 context:(id)arg5 ;
-(void)handleDelayedCentroidUpdate;
-(void)handleDismissFlickView;
-(void)handleDismissFlickView:(id)arg0 ;
-(void)handleKeyboardMenusForTouch:(id)arg0 ;
-(void)handleMultitapTimerFired;
-(void)handlePopupView;
-(void)handlePopupView:(id)arg0 ;
-(void)incrementPunctuationIfNeeded:(id)arg0 ;
-(void)installGestureRecognizers;
-(void)layoutSubviews;
-(void)logHandwritingData;
-(void)longPressAction;
-(void)mergeKeysIfNeeded;
-(void)multitapExpired;
-(void)multitapInterrupted;
-(void)nextToUseInputModeDidChange:(id)arg0 ;
-(void)performHitTestForTouchInfo:(id)arg0 touchStage:(int)arg1 executionContextPassingUIKBTree:(id)arg2 ;
-(void)pinchDidConsumeTouch:(id)arg0 ;
-(void)pinchHandler:(id)arg0 ;
-(void)playKeyClickSoundForKey:(id)arg0 ;
-(void)playKeyClickSoundOnDownForKey:(id)arg0 ;
-(void)playKeyClickSoundOnUpForKey:(id)arg0 ;
-(void)playKeyReleaseSoundForKey:(id)arg0 ;
-(void)populateFlickPopupsForKey:(id)arg0 ;
-(void)prepareForFloatingTransition:(BOOL)arg0 ;
-(void)prepareForSplitTransition;
-(void)prepareSliderBehaviorFeedback;
-(void)presentModalDisplayForKey:(id)arg0 ;
-(void)provideSliderBehaviorFeedback;
-(void)rebuildSplitTransitionView;
-(void)refreshDualStringKeys;
-(void)refreshForDictationAvailablityDidChange;
-(void)refreshForRivenPreferences;
-(void)refreshGhostKeyState;
-(void)relayoutForWriteboardKey;
-(void)reloadCurrentKeyplane;
-(void)reloadKeyboardWithInputTraits:(id)arg0 screenTraits:(id)arg1 splitTraits:(id)arg2 ;
-(void)removeFromSuperview;
-(void)removePathEffectViewConstraintsIfNeeded;
-(void)resetHRRLayoutState;
-(void)resetPanAlternativesForEndedTouch:(id)arg0 ;
-(void)resizeKeyplaneAndRedraw:(BOOL)arg0 ;
-(void)restoreDefaultsForAllKeys;
-(void)restoreDefaultsForKey:(id)arg0 ;
-(void)setAction:(SEL)arg0 forKey:(id)arg1 ;
-(void)setAutoshift:(BOOL)arg0 ;
-(void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg0 ;
-(void)setDisableInteraction:(BOOL)arg0 ;
-(void)setHideKeysUnderIndicator:(BOOL)arg0 ;
-(void)setKeyForTouchInfo:(id)arg0 key:(id)arg1 ;
-(void)setLabel:(id)arg0 forKey:(id)arg1 ;
-(void)setLongPressAction:(SEL)arg0 forKey:(id)arg1 ;
-(void)setMultitapReverseKeyState;
-(void)setNeedsVirtualDriftUpdate;
-(void)setPasscodeOutlineAlpha:(CGFloat)arg0 ;
-(void)setPercentSignKeysForCurrentLocaleOnKeyplane:(id)arg0 ;
-(void)setPreferredHeight:(CGFloat)arg0 ;
-(void)setReturnKeyEnabled:(BOOL)arg0 withDisplayName:(id)arg1 withType:(int)arg2 ;
-(void)setSplit:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSplitProgress:(CGFloat)arg0 ;
-(void)setState:(int)arg0 forKey:(id)arg1 ;
-(void)setTarget:(id)arg0 forKey:(id)arg1 ;
-(void)setTextEditingTraits:(id)arg0 ;
-(void)setToInitialKeyplane;
-(void)setTwoFingerTapTimestamp:(CGFloat)arg0 ;
-(void)showFlickView:(NSInteger)arg0 withKey:(id)arg1 flickString:(id)arg2 ;
-(void)showKeyboardWithInputMode:(id)arg0 renderConfig:(id)arg1 inputTraits:(id)arg2 screenTraits:(id)arg3 splitTraits:(id)arg4 ;
-(void)showKeyboardWithInputMode:(id)arg0 renderConfig:(id)arg1 inputTraits:(id)arg2 screenTraits:(id)arg3 splitTraits:(id)arg4 reload:(BOOL)arg5 ;
-(void)showKeyboardWithInputTraits:(id)arg0 screenTraits:(id)arg1 splitTraits:(id)arg2 ;
-(void)showMenu:(id)arg0 forKey:(id)arg1 ;
-(void)showPopupVariantsForKey:(id)arg0 ;
-(void)showPopupView:(NSInteger)arg0 withKey:(id)arg1 popupInfo:(id)arg2 force:(BOOL)arg3 ;
-(void)showSplitTransitionView:(BOOL)arg0 ;
-(void)swipeDetected:(id)arg0 ;
-(void)tearDownSplitTransitionView;
-(void)touchCancelled:(id)arg0 executionContext:(id)arg1 ;
-(void)touchCancelled:(id)arg0 forResting:(BOOL)arg1 executionContext:(id)arg2 ;
-(void)touchChanged:(id)arg0 executionContext:(id)arg1 ;
-(void)touchDown:(id)arg0 executionContext:(id)arg1 ;
-(void)touchDownWithKey:(id)arg0 withTouchInfo:(id)arg1 atPoint:(struct CGPoint )arg2 executionContext:(id)arg3 ;
-(void)touchDragged:(id)arg0 ;
-(void)touchDragged:(id)arg0 executionContext:(id)arg1 ;
-(void)touchMultitapTimer;
-(void)touchUp:(id)arg0 executionContext:(id)arg1 ;
-(void)traitCollectionDidChange;
-(void)transitionToModalContinuousPathKeyplane;
-(void)transitionToPunctuationKeysVisible:(BOOL)arg0 ;
-(void)triggerSpaceKeyplaneSwitchIfNecessary;
-(void)typingStyleEstimator:(id)arg0 didChangeTypingStyleEstimate:(NSUInteger)arg1 ;
-(void)uninstallGestureRecognizers;
-(void)upActionShift;
-(void)updateAutolocalizedKeysForKeyplane:(id)arg0 ;
-(void)updateBackgroundCorners;
-(void)updateBackgroundIfNeeded;
-(void)updateCachedKeyplaneKeycaps;
-(void)updateCurrencySymbolForKey:(id)arg0 withCurrencyString:(id)arg1 ;
-(void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)arg0 ;
-(void)updateGlobeKeyDisplayString;
-(void)updateInputModeLocalizedKeysForKeyplane:(id)arg0 ;
-(void)updateKeyCentroids;
-(void)updateKeyboardForKeyplane:(id)arg0 ;
-(void)updateLayoutTags;
-(void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)arg0 withInputMode:(id)arg1 ;
-(void)updateLocalizedDisplayStringsForKeys:(id)arg0 ;
-(void)updateLocalizedKeys:(BOOL)arg0 ;
-(void)updateLocalizedKeysForKeyplane:(id)arg0 updateAllKeyplanes:(BOOL)arg1 ;
-(void)updateLocalizedKeysOnKeyplane:(id)arg0 ;
-(void)updateMoreAndInternationalKeys;
-(void)updatePanAlternativesForTouchInfo:(id)arg0 ;
-(void)updatePhysicalKeyboardEvent:(id)arg0 withMarkedInput:(id)arg1 ;
-(void)updateReturnKeysIfNeeded;
-(void)updateSelectedVariantIndexForKey:(id)arg0 withActions:(NSUInteger)arg1 withPoint:(struct CGPoint )arg2 ;
-(void)updateShiftKeyState;
-(void)updateState:(int)arg0 forKey:(id)arg1 ;
-(void)updateTransitionWithFlags:(NSUInteger)arg0 ;
-(void)updateUndoKeyState;
-(void)willBeginIndirectSelectionGesture;
-(void)willBeginIndirectSelectionGesture:(BOOL)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;
-(void)willRotate;


@end


#endif