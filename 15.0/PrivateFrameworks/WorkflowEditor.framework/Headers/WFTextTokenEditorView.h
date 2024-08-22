// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTEXTTOKENEDITORVIEW_H
#define WFTEXTTOKENEDITORVIEW_H

@class UIView, NSSet, NSAttributedString, UIColor, UIView<WFTextTokenFieldImpl>, NSString, UIFont, WFTextScrollView, WFVariableString;
@protocol UITextFieldDelegate, UITextViewDelegate, WFVariableInsertionFieldDelegate, WFTextTokenField, WFTextTokenEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;


#import "WFTextTokenTextField.h"

@interface WFTextTokenEditorView : UIView <UITextFieldDelegate, UITextViewDelegate, WFVariableInsertionFieldDelegate, WFTextTokenField>

 {
    BOOL _switching;
}


@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UIView<WFTextTokenFieldImpl> *currentField;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFTextTokenEditorViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance; // ivar: _keyboardAppearance
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (copy, nonatomic) id *revealBlock; // ivar: _revealBlock
@property (retain, nonatomic) WFTextScrollView *scrollView; // ivar: _scrollView
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // ivar: _secureTextEntry
@property (nonatomic) _NSRange selectedRange; // ivar: _selectedRange
@property (nonatomic) NSInteger smartDashesType; // ivar: _smartDashesType
@property (nonatomic) NSInteger smartQuotesType; // ivar: _smartQuotesType
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger syntaxHighlightingType; // ivar: _syntaxHighlightingType
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) NSString *textContentType; // ivar: _textContentType
@property (retain, nonatomic) WFTextTokenTextField *textField; // ivar: _textField
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (nonatomic) NSUInteger variableResultType; // ivar: _variableResultType
@property (copy, nonatomic) WFVariableString *variableString;
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)usesTextView;
-(id)currentView;
-(id)init;
-(void)beginEditingWithContext:(id)arg0 ;
-(void)dealloc;
-(void)insertVariable:(id)arg0 ;
-(void)layoutSubviews;
-(void)paste:(id)arg0 ;
-(void)removeTextChangeObserver;
-(void)selectRange:(struct _NSRange )arg0 ;
-(void)setUsesTextView:(BOOL)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif