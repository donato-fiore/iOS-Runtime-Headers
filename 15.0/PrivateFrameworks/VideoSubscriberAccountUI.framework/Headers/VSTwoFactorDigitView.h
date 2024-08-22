// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSTWOFACTORDIGITVIEW_H
#define VSTWOFACTORDIGITVIEW_H

@class UIControl, NSString, NSArray, UITextInputPasswordRules;
@protocol UIKeyInput, UITextInputTraits, VSTwoFactorDigitViewDelegate;



@interface VSTwoFactorDigitView : UIControl <UIKeyInput, UITextInputTraits>



@property (nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSTwoFactorDigitViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger digitCount; // ivar: _digitCount
@property (retain, nonatomic) NSArray *digits; // ivar: _digits
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText; // ivar: _hasText
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType; // ivar: _returnKeyType
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSString *textContentType; // ivar: _textContentType


-(BOOL)canBecomeFirstResponder;
-(id)initWithDigitCount:(NSUInteger)arg0 ;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)onTouchUpInside:(id)arg0 ;
-(void)setupDigitViews;


@end


#endif