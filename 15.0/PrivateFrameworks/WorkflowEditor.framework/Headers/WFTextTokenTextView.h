// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTEXTTOKENTEXTVIEW_H
#define WFTEXTTOKENTEXTVIEW_H

@class UITextView, NSSet, WFTextAttachmentInteraction, NSAttributedString, UIColor, UITextPosition, NSArray, NSString, UIFont, UITextRange, NSDictionary, UITextInputPasswordRules, UIView, WFVariableString;
@protocol WFVariableDelegate, WFTextAttachmentInteractionDelegate, WFVariableConfigurationResponderDelegate, WFVariableTypingContext, WFTextTokenFieldImpl, WFVariableInsertionFieldDelegate, UITextInputDelegate, UITextInputTokenizer, WFVariableProvider, WFVariableUIDelegate;


#import "WFVariableInputCoordinator.h"
#import "WFVariableConfigurationResponder.h"

@interface WFTextTokenTextView : UITextView <WFVariableDelegate, WFTextAttachmentInteractionDelegate, WFVariableConfigurationResponderDelegate, WFVariableTypingContext, WFTextTokenFieldImpl, WFVariableInsertionFieldDelegate>



@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (retain, nonatomic) WFTextAttachmentInteraction *attachmentInteraction; // ivar: _attachmentInteraction
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) NSArray *currentVariables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate;
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL rejectBecomingFirstResponder; // ivar: _rejectBecomingFirstResponder
@property (nonatomic) NSInteger returnKeyType;
@property (copy, nonatomic) id *revealBlock; // ivar: _revealBlock
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) _NSRange selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger syntaxHighlightingType; // ivar: syntaxHighlightingType
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (copy, nonatomic) id *textUpdatedBlock; // ivar: _textUpdatedBlock
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // ivar: _variableCoordinator
@property (copy, nonatomic) id *variableInsertionBlock; // ivar: _variableInsertionBlock
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (retain, nonatomic) WFVariableConfigurationResponder *variableResponder; // ivar: _variableResponder
@property (nonatomic) NSUInteger variableResultType; // ivar: _variableResultType
@property (copy, nonatomic) WFVariableString *variableString; // ivar: _variableString
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled


+(BOOL)doneButtonNeededForInputTraits:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)variableResponderHasText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateVariableString:(id)arg0 ;
-(void)beginConfiguringVariable:(id)arg0 ;
-(void)beginEditingWithContext:(id)arg0 ;
-(void)configureAppearanceOfVariableAttachment:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)enumerateVariablesUsingBlock:(id)arg0 ;
-(void)handleTextDidChangeNotification;
-(void)handleTextDidEndEditingNotification;
-(void)insertVariable:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)textAttachmentInteraction:(id)arg0 didTapTextAttachment:(id)arg1 inCharacterRange:(struct _NSRange )arg2 ;
-(void)tintColorDidChange;
-(void)updateAllowedVariableTypes;
-(void)updateAppearanceOfAllVariableAttachments;
-(void)updateDoneButtonPresence;
-(void)updateVariableBlock;
-(void)variableDidChange:(id)arg0 ;
-(void)variableResponder:(id)arg0 didUpdateVariable:(id)arg1 ;
// -(void)variableResponder:(id)arg0 presentPromptWithTitle:(id)arg1 message:(id)arg2 fieldConfigurationHandler:(id)arg3 commitHandler:(unk)arg4  ;
-(void)variableResponderDidBeginEditing:(id)arg0 ;
-(void)variableResponderDidDelete:(id)arg0 withReplacementText:(id)arg1 ;
-(void)variableResponderDidEndEditing:(id)arg0 ;
-(void)variableResponderDidReturnToKeyboard:(id)arg0 ;
-(void)variableResponderDidRevealAction:(id)arg0 ;
-(void)variableResponderWillEndEditing:(id)arg0 ;


@end


#endif