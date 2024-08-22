// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNIFIEDFIELD_H
#define UNIFIEDFIELD_H

@class UITextField, NSString, UITextCursorAssertionController, UITextPosition, CKContextCompleter, UITextRange, NSDictionary, UITextInputPasswordRules, UIColor, NSArray, UIView;
@protocol UIGestureRecognizerDelegate, PKUITextInputPencilTextInput, CompletionItem, UITextCursorAssertion, UnifiedFieldDelegate, UITextInputDelegate, UITextInputTokenizer;


#import "TopHitCompletionView.h"
#import "TopHitCompletionPromotionRecognizer.h"

@interface UnifiedField : UITextField <UIGestureRecognizerDelegate, PKUITextInputPencilTextInput>

 {
    BOOL _lastEditWasADeletion;
    NSString *_pendingTopHitNavigationText;
    id<CompletionItem> *_topHit;
    TopHitCompletionView *_topHitCompletionView;
    TopHitCompletionPromotionRecognizer *_topHitCompletionPromotionRecognizer;
    NSString *_userTypedText;
    UITextCursorAssertionController *_textCursorAssertionController;
    id<UITextCursorAssertion> *_textCursorHiddenAssertion;
    BOOL _didInitializeMenuItems;
    BOOL _isResigningFirstResponder;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (retain, nonatomic) CKContextCompleter *contextCompleter; // ivar: _contextCompleter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UnifiedFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic) BOOL hasSelectedQuerySuggestion; // ivar: _hasSelectedQuerySuggestion
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate;
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) BOOL lastInputWasQuerySuggestion; // ivar: _lastInputWasQuerySuggestion
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly, nonatomic, getter=isPastingText) BOOL pastingText; // ivar: _pastingText
@property (copy, nonatomic) UIColor *placeholderColor;
@property (readonly, nonatomic) CGFloat placeholderHorizontalInset;
@property (readonly, nonatomic) NSArray *querySuggestions; // ivar: _querySuggestions
@property (retain, nonatomic) NSObject<CompletionItem> *reflectedItem; // ivar: _reflectedItem
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;
@property (readonly, nonatomic, getter=isUsingPencilInput) BOOL usingPencilInput; // ivar: _usingPencilInput
@property (nonatomic) NSInteger voiceSearchState; // ivar: _voiceSearchState


-(BOOL)_allowsReflectedTopHit;
-(BOOL)_hasContent;
-(BOOL)_updateQuerySuggestionsMatchingText:(id)arg0 ;
-(BOOL)_waitingForTopHitForCurrentText;
-(BOOL)_wantsPriorityOverFocusUpdates;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)keyboardInput:(id)arg0 shouldInsertText:(id)arg1 isMarkedText:(BOOL)arg2 ;
-(BOOL)keyboardInputShouldDelete:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)supportsImagePaste;
-(NSUInteger)_unifiedFieldInputType;
-(id)_allCombinationsOfModifierKeys;
-(id)_textForPasteboard;
-(id)_textWithoutWhitespace;
-(id)_topHitForCurrentText;
-(id)_voiceSearchInputModeForFirstResponder:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyCommands;
-(struct CGRect )editRect;
-(struct CGRect )placeholderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(void)_cancelPendingTopHitNavigation;
-(void)_endEditingWithCurrentText;
-(void)_handlePasteboardChangedNotification:(id)arg0 ;
-(void)_layoutTopHitCompletionView;
-(void)_promoteCompletionToSelection;
-(void)_promoteCompletionToSelectionSelectingSuffix:(BOOL)arg0 andMoveForward:(BOOL)arg1 ;
-(void)_removeTopHitCompletionView;
-(void)_restoreUserTypedText;
-(void)_setTopHit:(id)arg0 ;
-(void)_textDidChangeFromTyping;
-(void)_updateMenuItems;
-(void)_updateReturnKey;
-(void)clearUserTypedText;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dictationDidFinish:(id)arg0 ;
-(void)dictationRecognitionFailed;
-(void)dictationRecordingDidEnd;
-(void)focusAndInsertCursorAtEnd;
-(void)focusNextKeyViewKeyPressed;
-(void)focusPreviousKeyViewKeyPressed;
-(void)insertTextSuggestion:(id)arg0 ;
-(void)layoutSubviews;
-(void)moveLeftKeyPressed;
-(void)moveRightKeyPressed;
-(void)nextCompletionSelectionByRowKeyPressed;
-(void)nextCompletionSelectionBySectionKeyPressed;
-(void)paste:(id)arg0 ;
-(void)pasteAndGo:(id)arg0 ;
-(void)pasteAndSearch:(id)arg0 ;
-(void)previousCompletionSelectionByRowKeyPressed;
-(void)previousCompletionSelectionBySectionKeyPressed;
-(void)selectAll:(id)arg0 ;
-(void)selectCompletionKeyPressed;
-(void)setAttributedText:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)topHitDidBecomeReady;
-(void)updateQuerySuggestionsFromUserTypedText;
-(void)willBeginPencilTextInputEditing;


@end


#endif