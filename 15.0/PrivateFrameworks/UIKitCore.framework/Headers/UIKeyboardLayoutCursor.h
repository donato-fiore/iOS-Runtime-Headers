// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDLAYOUTCURSOR_H
#define UIKEYBOARDLAYOUTCURSOR_H

@class NSArray, NSString;
@protocol UIKBAlertControllerDelegate;


#import "UIKeyboardLayoutStar.h"
#import "UIKBTree.h"
#import "UIView.h"
#import "UILexicon.h"
#import "UILabel.h"
#import "UIWindow.h"
#import "UIAlertController.h"

@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar <UIKBAlertControllerDelegate>

 {
    UIKBTree *_indirectKeyboard;
    UIView *_selectionView;
    NSArray *_keyplaneKeys;
    NSInteger _selectedKeyIndex;
    BOOL _ignoreEventsUntilPressEnds;
    UILexicon *_recentInputs;
    BOOL _disableTouchInput;
    BOOL _suppressOperations;
    UIKBTree *_cachedMultitapKeyplane;
    BOOL _cachedCanMultitap;
    UILabel *_dictationHelpLabel;
    BOOL _didVariantDelete;
    BOOL _isForwardingEvent;
    BOOL _overrideInitialKey;
    int _overridenSelectedKeyType;
    BOOL _shouldConfigureFloatingContentView;
    BOOL _shouldToggleLetterCaseNext;
    CGPoint _keyplaneSwitchSelectedKeyFrameCenter;
    BOOL _selectInitialKey;
    NSUInteger _lastSelectedKeyIndex;
}


@property (readonly, nonatomic) UIKBTree *currentKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIWindow *focusWindow; // ivar: _focusWindow
@property (readonly, nonatomic) CGRect globalFrameForCurrentKey;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *keyplaneBeforeDictation; // ivar: _keyplaneBeforeDictation
@property (retain, nonatomic) UIAlertController *recentInputsAlert; // ivar: _recentInputsAlert
@property (nonatomic) NSInteger selectedKeyBeforeDictation; // ivar: _selectedKeyBeforeDictation
@property (readonly, nonatomic, getter=isSlimLinearKeyboardTV) BOOL slimLinearKeyboardTV;
@property (readonly) Class superclass;


+(id)carKeyboardNameForKeyboard:(id)arg0 screenTraits:(id)arg1 ;
+(struct CGSize )keyboardSizeForInputMode:(id)arg0 screenTraits:(id)arg1 keyboardType:(NSInteger)arg2 ;
-(BOOL)_handleMoveWithEvent:(id)arg0 ;
-(BOOL)_handlePhysicalButtonEvent:(id)arg0 ;
-(BOOL)_handleRemoteControlReceivedWithEvent:(id)arg0 ;
-(BOOL)_handleWheelChangedWithEvent:(id)arg0 ;
-(BOOL)_isDirectionalHeading:(NSUInteger)arg0 ;
-(BOOL)_isKeyboardReverseOfAppLayoutDirection;
-(BOOL)_menuTapShouldExitVariants;
-(BOOL)canHandleEvent:(id)arg0 ;
-(BOOL)canMultitap;
-(BOOL)diacriticForwardCompose;
-(BOOL)handleLinearDirectionalInput:(int)arg0 ;
-(BOOL)handleVisualDirectionalInput:(int)arg0 ;
-(BOOL)ignoresShiftState;
-(BOOL)isAlphabeticPlane;
-(BOOL)isKanaPlane;
-(BOOL)isKeyplaneDisabledWithName:(id)arg0 ;
-(BOOL)isPossibleToTypeFast;
-(BOOL)refreshSelectedCellIfNecessaryForKey:(id)arg0 ;
-(BOOL)shouldAllowCurrentKeyplaneReload;
-(BOOL)shouldDeactivateWithoutWindow;
-(BOOL)shouldMatchCaseForDomainKeys;
-(BOOL)shouldMergeKey:(id)arg0 ;
-(BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg0 ;
-(BOOL)shouldRetestKey:(id)arg0 slidOffKey:(id)arg1 withKeyplane:(id)arg2 ;
-(BOOL)shouldToggleKeyplaneWithName:(id)arg0 ;
-(BOOL)supportsContinuousPath;
-(BOOL)supportsEmoji;
-(BOOL)usesAutoShift;
-(Class)keyViewAnimatorClassForCurrentKeyboardLayout;
-(NSInteger)defaultSelectedVariantIndexForKey:(id)arg0 withActions:(NSUInteger)arg1 ;
-(NSInteger)targetKeyIndexAtOffset:(struct CGPoint )arg0 fromKey:(id)arg1 ;
-(NSInteger)targetKeyIndexFromPoint:(struct CGPoint )arg0 ;
-(NSInteger)targetKeyIndexFromPoint:(struct CGPoint )arg0 inKeys:(id)arg1 ;
-(NSUInteger)_indexOfFirstKeyPassingTest:(id)arg0 ;
-(NSUInteger)cursorLocation;
-(NSUInteger)downActionFlagsForKey:(id)arg0 ;
-(NSUInteger)getNextKeyplaneIndex:(NSUInteger)arg0 ;
-(NSUInteger)targetEdgesForScreenGestureRecognition;
-(NSUInteger)variantCountForKey:(id)arg0 ;
-(id)_keyplaneForKeyplaneProperties;
-(id)cacheTokenForKeyplane:(id)arg0 ;
-(id)getRomanAccentVariantsForString:(id)arg0 inputMode:(id)arg1 keyboardVariantIndludes:(int)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyHitTestInSameRowAsCenter:(struct CGPoint )arg0 size:(struct CGSize )arg1 ;
-(id)keyViewAnimator;
-(int)activeStateForKey:(id)arg0 ;
-(int)enabledStateForKey:(id)arg0 ;
-(int)stateForCandidateListKey:(id)arg0 ;
-(int)stateForKeyplaneSwitchKey:(id)arg0 ;
-(struct CGRect )selectionFrameForKeyIndex:(NSInteger)arg0 ;
-(unsigned char)getHandRestRecognizerState;
-(void)_accessibilityBoldTextChanged:(id)arg0 ;
-(void)_configureFloatingContentViewsForTV;
-(void)_moveWithEvent:(id)arg0 ;
-(void)_reducedTransparencyDidChange:(id)arg0 ;
-(void)_wheelChangedWithEvent:(id)arg0 ;
-(void)acceptRecentInputIfNecessary;
-(void)alertDidDismiss;
-(void)clearVariantStateForKey:(id)arg0 ;
-(void)configureFloatingContentViewsIfNeeded;
-(void)deactivateKey:(id)arg0 ;
-(void)dealloc;
-(void)didSelectRecentInputString:(id)arg0 ;
-(void)endMultitapForKey:(id)arg0 ;
-(void)flushKeyCache:(id)arg0 ;
-(void)handleVariantDeleteIfNecessaryForKey:(id)arg0 ;
-(void)longPressAction;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg0 ;
-(void)restoreFocusFromEntryPoint:(struct CGPoint )arg0 ;
-(void)returnToKeyplaneAfterDictation;
-(void)runWithSuppressedActions:(id)arg0 ;
-(void)selectInitialKeyIfNecessary;
-(void)setCursorLocation:(NSUInteger)arg0 ;
-(void)setDisableTouchInput:(BOOL)arg0 ;
-(void)setHighlightedVariantIndex:(NSInteger)arg0 key:(id)arg1 ;
-(void)setKeyboardAppearance:(NSInteger)arg0 ;
-(void)setKeyboardName:(id)arg0 appearance:(NSInteger)arg1 ;
-(void)setKeyplaneName:(id)arg0 ;
-(void)setRecentInputs:(id)arg0 ;
-(void)setRenderConfig:(id)arg0 ;
-(void)setSelectedKeyIndex:(NSInteger)arg0 ;
-(void)setShift:(BOOL)arg0 ;
-(void)showKeyboardWithInputTraits:(id)arg0 screenTraits:(id)arg1 splitTraits:(id)arg2 ;
-(void)showPopupKeyplaneSwitcher;
-(void)showRecentInputsAlert;
-(void)switchToDictationKeyplaneWithActivationIdentifier:(id)arg0 ;
-(void)takeKeyAction:(id)arg0 ;
-(void)updateDictationHelpString;
-(void)updateKeyplaneSwitchEdgeBiases;
-(void)updateRecentInputsKeyIfNecessary;
-(void)updateStatesForGridSelection;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif