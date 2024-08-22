// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTACTTEXTVIEW_H
#define WFCONTACTTEXTVIEW_H

@class UITextView, NSSet, NSAttributedString, UIColor, NSString, UIFont;
@protocol WFTextField, WFVariableProvider, WFVariableUIDelegate;


#import "WFVariableInputCoordinator.h"

@interface WFContactTextView : UITextView <WFTextField>



@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (nonatomic) BOOL allowsTextEntry; // ivar: _allowsTextEntry
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartQuotesType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedPersonProperties; // ivar: _supportedPersonProperties
@property (nonatomic) NSUInteger syntaxHighlightingType; // ivar: _syntaxHighlightingType
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) id *variableBlock; // ivar: _variableBlock
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // ivar: _variableCoordinator
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)attributesByAddingTintColorToAttributes:(id)arg0 ;
-(id)attributesForPasting;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)paste:(id)arg0 ;
-(void)pasteAttributedString:(id)arg0 ;
-(void)setReturnKeyType:(NSInteger)arg0 ;
-(void)textDidChange:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateAllowedVariableTypes;
-(void)updateDoneButtonPresence;
-(void)updateTextAttachments;
-(void)updateTextContainerInsets;


@end


#endif