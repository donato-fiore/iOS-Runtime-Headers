// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBPASSCODEFIELD_H
#define OBPASSCODEFIELD_H

@class UIStackView, NSString, NSArray, UITextInputPasswordRules, NSMutableString;
@protocol UIKeyInput, OBPasscodeFieldDelegate;



@interface OBPasscodeField : UIStackView <UIKeyInput>



@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<OBPasscodeFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *dotViews; // ivar: _dotViews
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) NSUInteger numberOfEntryFields; // ivar: _numberOfEntryFields
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (copy, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (retain, nonatomic) NSMutableString *value; // ivar: _value


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)initWithNumberOfEntryFields:(NSUInteger)arg0 ;
-(void)_passcodeFieldTapped:(id)arg0 ;
-(void)_updateDots;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;


@end


#endif