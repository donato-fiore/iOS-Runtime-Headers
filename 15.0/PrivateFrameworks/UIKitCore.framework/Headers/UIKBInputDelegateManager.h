// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBINPUTDELEGATEMANAGER_H
#define UIKBINPUTDELEGATEMANAGER_H

@class NSString, UIResponder<UIKeyInput>;
@protocol UIKeyInput, UIKeyboardImplStateProtocol, UIKeyboardInput;

#import <Foundation/Foundation.h>

#import "UITextInputPasswordRules.h"
#import "UITextInteractionSelectableInputDelegate.h"
#import "UITextInputTraits.h"
#import "UITextInteractionAssistant.h"

@interface UIKBInputDelegateManager : NSObject <UIKeyInput>

 {
    int m_delegateConformanceType;
    BOOL _forwardingInputDelegateConformsToWKInteraction;
    BOOL m_firstResponderAdoptsTextInput;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (nonatomic) BOOL continuousSpellCheckingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (weak, nonatomic) UIResponder<UIKeyInput> *forwardingInputDelegate; // ivar: _forwardingInputDelegate
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL insideKeyInputDelegateCall; // ivar: _insideKeyInputDelegateCall
@property (retain, nonatomic) UIResponder<UIKeyInput> *keyInputDelegate; // ivar: _keyInputDelegate
@property (nonatomic) NSInteger keyboardAppearance;
@property (weak, nonatomic) NSObject<UIKeyboardImplStateProtocol> *keyboardStateDelegate; // ivar: _keyboardStateDelegate
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) NSObject<UIKeyboardInput> *legacyInputDelegate;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (retain, nonatomic) UITextInteractionSelectableInputDelegate *selectableDelegate; // ivar: _selectableDelegate
@property (nonatomic) BOOL shouldRespectForwardingInputDelegate; // ivar: _shouldRespectForwardingInputDelegate
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UITextInputTraits *textInputTraits;
@property (readonly, nonatomic) UITextInteractionAssistant *textInteractionAssistant;


+(struct _NSRange )rangeForTextRange:(id)arg0 document:(id)arg1 ;
-(BOOL)_deleteForwardAndNotify:(BOOL)arg0 ;
-(BOOL)_hasMarkedText;
-(BOOL)callShouldReplaceExtendedRange:(NSInteger)arg0 withText:(id)arg1 includeMarkedText:(BOOL)arg2 ;
-(BOOL)delegateAdoptsWebTextInputPrivate;
-(BOOL)insertSupplementalItem:(id)arg0 candidate:(id)arg1 replacementRange:(id)arg2 ;
-(BOOL)requiresKeyEvents;
-(BOOL)selectionIsEndOfWord;
-(BOOL)selectionIsWord;
-(BOOL)shouldDeleteForward;
-(BOOL)shouldSuppressUpdateCandidateView;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(id)__content;
-(id)_rangeOfText:(id)arg0 endingAtPosition:(id)arg1 ;
-(id)_textRangeFromNSRange:(struct _NSRange )arg0 ;
-(id)asynchronousInputDelegate;
-(id)attributedMarkedText;
-(id)beginningOfDocument;
-(id)delegateAsResponder;
-(id)delegateRespectingForwardingDelegate:(BOOL)arg0 ;
-(id)endOfDocument;
-(id)init;
-(id)inputSystemSourceSession;
-(id)markedText;
-(id)markedTextRange;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)privateInputDelegate;
-(id)privateKeyInputDelegate;
-(id)selectedTextRange;
-(id)textInRange:(id)arg0 ;
-(id)textInputDelegate;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(unsigned int)_characterBeforeCaretSelection;
-(void)_deleteBackwardAndNotify:(BOOL)arg0 ;
-(void)_firstResponderDidChange:(id)arg0 ;
-(void)_moveCurrentSelection:(int)arg0 ;
-(void)_setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)_setSelectionToPosition:(id)arg0 ;
-(void)applyAutocorrection:(id)arg0 toString:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)changedSelection;
-(void)clearDelegate;
-(void)clearForwardingInputDelegateAndResign:(BOOL)arg0 ;
-(void)collapseSelectionAndAdjustByOffset:(NSInteger)arg0 ;
-(void)deleteBackward;
-(void)handleClearWithInsertBeforeAdvance:(id)arg0 ;
-(void)handleKeyWebEvent:(id)arg0 ;
-(void)handleKeyWebEvent:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)insertAttributedText:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)insertText:(id)arg0 alternatives:(id)arg1 style:(NSInteger)arg2 ;
-(void)insertText:(id)arg0 updateInputSource:(BOOL)arg1 ;
-(void)insertTextAfterSelection:(id)arg0 ;
-(void)insertTextSuggestion:(id)arg0 ;
-(void)moveSelectionToEndOfWord;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 forKeyboardAction:(int)arg2 ;
-(void)setAttributedMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setSelectedTextRange:(id)arg0 ;
-(void)setupResponderChangeListeners;
-(void)storeDelegateConformance;
-(void)unmarkText;
-(void)unmarkText:(id)arg0 ;
-(void)updateSelectableInputDelegateIfNecessary;


@end


#endif