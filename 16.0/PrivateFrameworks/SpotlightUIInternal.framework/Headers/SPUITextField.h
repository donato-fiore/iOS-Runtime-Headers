// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUITEXTFIELD_H
#define SPUITEXTFIELD_H

@class UISearchTextField, UIView, UIGestureRecognizer, NSString, MTMaterialView, UIImage, UIColor, UIResponder, UIScribbleInteraction, SPSearchEntity, NSTimer;
@protocol UIGestureRecognizerDelegate, UIScribbleInteractionDelegate, UITextCursorAssertion, SPUITextFieldDelegate;


#import "SPUIHeaderBlurView.h"
#import "SPUICompletionStringView.h"
#import "SPUICompletionStringModel.h"

@interface SPUITextField : UISearchTextField <UIGestureRecognizerDelegate, UIScribbleInteractionDelegate>



@property (nonatomic) NSInteger activeInterfaceOrientation; // ivar: _activeInterfaceOrientation
@property (retain) id *animateAssertion; // ivar: _animateAssertion
@property (readonly) UIView *backgroundBlurView;
@property (retain, nonatomic) SPUIHeaderBlurView *blurView; // ivar: _blurView
@property (retain) NSObject<UITextCursorAssertion> *caretAssertion; // ivar: _caretAssertion
@property (readonly) BOOL completionResultIsPotentiallyPunchout;
@property (retain) UIGestureRecognizer *completionTapGestureRecognizer; // ivar: _completionTapGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SPUITextFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) SPUICompletionStringView *hintingView; // ivar: _hintingView
@property BOOL ignoreTokensUpdate; // ivar: _ignoreTokensUpdate
@property (readonly) BOOL isOnDarkBackground; // ivar: _isOnDarkBackground
@property BOOL lastUpdateWasDeletion; // ivar: _lastUpdateWasDeletion
@property (retain) MTMaterialView *materialView; // ivar: _materialView
@property (retain) UIImage *microphoneImage; // ivar: _microphoneImage
@property (readonly, nonatomic) BOOL needsLandscapeHeight;
@property (readonly, nonatomic) BOOL optOutOfGoButton;
@property (readonly) UIColor *primaryColor; // ivar: _primaryColor
@property (weak, nonatomic) UIResponder *responderForKeyboardInput; // ivar: _responderForKeyboardInput
@property (retain) NSString *restorationStringOnKBMovement; // ivar: _restorationStringOnKBMovement
@property (retain) UIScribbleInteraction *scribbleInteraction; // ivar: _scribbleInteraction
@property (readonly) SPSearchEntity *searchEntity;
@property (retain, nonatomic) SPUICompletionStringModel *searchFieldModel; // ivar: _searchFieldModel
@property (readonly) UIColor *secondaryColor; // ivar: _secondaryColor
@property (readonly) Class superclass;
@property (retain) NSTimer *switchBackToSuggestionsTimer; // ivar: _switchBackToSuggestionsTimer
@property (readonly, nonatomic) NSString *textIncludingTokens;
@property (retain) UIView *tintView; // ivar: _tintView
@property (nonatomic) BOOL useChunkyMetrics; // ivar: _useChunkyMetrics


+(Class)_backgroundViewClass;
+(id)removeDictationCharacterInString:(id)arg0 ;
+(id)webEntityStringForEntity:(id)arg0 ;
+(void)updateBlueButton;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasContent;
-(BOOL)keyboardInput:(id)arg0 shouldInsertText:(id)arg1 isMarkedText:(BOOL)arg2 ;
-(BOOL)keyboardInputShouldDelete:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)shouldPromoteCompletion;
-(CGFloat)textFieldHeight;
-(CGFloat)widthOfPlaceholderLabel;
-(NSInteger)_focusItemDeferralMode;
-(id)currentQueryContext;
-(id)focusGroupIdentifier;
-(id)init;
-(id)keyCommands;
-(id)nextResponder;
-(id)preferredFocusEnvironments;
-(struct CGRect )_shiftedBoundsForText:(struct CGRect )arg0 ;
-(struct CGRect )clearButtonRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )leftViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )placeholderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rectForMagnifierForOriginalRect:(struct CGRect )arg0 bounds:(struct CGRect )arg1 isLeftSide:(BOOL)arg2 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct _NSRange )insertFilteredText:(id)arg0 ;
-(void)_promoteCompletionAndMoveForward:(BOOL)arg0 ;
-(void)applyMetrics;
-(void)beginFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)clearAllTokens;
-(void)commandBPressed;
-(void)commandCPressed;
-(void)commitToCommitedSearch;
-(void)detokenizeIfNeededAndSearch:(BOOL)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)enterKeyPressed;
-(void)escapeKeyCommand;
-(void)insertText:(id)arg0 ;
-(void)keyboardFrameChanged:(id)arg0 ;
-(void)keyboardInputChangedSelection:(id)arg0 ;
-(void)layoutSubviews;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)promoteCompletionIfPossibleAndMoveForward:(BOOL)arg0 ;
-(void)removeCaretAssertion;
-(void)removeCompletionAndHighlight;
-(void)removeCompletionsOrEntitiesAndGoToSuggestions:(BOOL)arg0 ;
-(void)resetClearButtonWithScale:(NSInteger)arg0 ;
-(void)resetDeletion;
-(void)resetMicrophoneButtonWithScale:(NSInteger)arg0 ;
-(void)resetPhoneClearButton;
-(void)scribbleInteractionWillBeginWriting:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;
-(void)spotlight_leftArrowPressed;
-(void)spotlight_rightArrowPressed;
-(void)textFieldWasTapped;
-(void)tintColorDidChange;
-(void)toggleBackToCommittedSearch;
-(void)toggleCommitedSearch;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unmarkText;
-(void)updateBorderVisualStyling;
-(void)updateCaretVisibility;
-(void)updateCaretVisibility:(BOOL)arg0 ;
-(void)updateFocusResult:(id)arg0 cardSection:(id)arg1 focusIsOnFirstResult:(BOOL)arg2 ;
-(void)updateRightView;
-(void)updateTextRange:(id)arg0 ;
-(void)updateToken:(id)arg0 ;
-(void)updateWithPrimaryColor:(id)arg0 secondaryColor:(id)arg1 isOnDarkBackground:(BOOL)arg2 ;


@end


#endif