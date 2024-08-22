// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPINCODEFIELD_H
#define PKPINCODEFIELD_H

@class UIView, NSCharacterSet, NSMutableString, NSArray, UIImage, UILabel, NSString, UITextInputPasswordRules;
@protocol UIKeyInput, PKPinCodeFieldDelegate;



@interface PKPinCodeField : UIView <UIKeyInput>

 {
    NSUInteger _pinCodeLength;
    NSCharacterSet *_numbersOnlyCharacterSet;
    NSMutableString *_pinCode;
    CGFloat _fontHeight;
    NSArray *_numberLabels;
    NSArray *_dashViews;
    NSArray *_dotViews;
    UIImage *_dotImage;
    UILabel *_hyphenLabel;
    BOOL _keyboardOverrideEnabled;
    NSUInteger _style;
    ? _config;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPinCodeFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hyphenatePinCode; // ivar: _hyphenatePinCode
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy, nonatomic) NSString *pinCode;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // ivar: _secureTextEntry
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;


-(BOOL)canBecomeFirstResponder;
-(id)initWithPinCodeLength:(NSUInteger)arg0 delegate:(id)arg1 ;
-(id)initWithPinCodeLength:(NSUInteger)arg0 style:(NSUInteger)arg1 delegate:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateCharacterVisibility;


@end


#endif