// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKONETIMECODEVIEW_H
#define PKONETIMECODEVIEW_H

@class UIView, NSMutableString, NSArray, UITapGestureRecognizer, NSString, UITextInputPasswordRules;
@protocol UIKeyInput, PKOneTimeCodeViewDelegate;


#import "PKOneTimeCodeDigitFieldView.h"
#import "PKIconTextLabel.h"

@interface PKOneTimeCodeView : UIView <UIKeyInput>

 {
    id<PKOneTimeCodeViewDelegate> *_delegate;
    NSMutableString *_value;
    NSArray *_codeFields;
    PKOneTimeCodeDigitFieldView *_templateField;
    PKIconTextLabel *_entryErrorLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSArray *_constraints;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) CGFloat codeLength; // ivar: _codeLength
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableEntry; // ivar: _disableEntry
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) NSUInteger entryError; // ivar: _entryError
@property (nonatomic) CGFloat entrySpacing; // ivar: _entrySpacing
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;


-(BOOL)canBecomeFirstResponder;
-(id)_firstCodeField;
-(id)currentCode;
-(id)initWithCodeLength:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_passcodeFieldTapped:(id)arg0 ;
-(void)_updateLabels;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif