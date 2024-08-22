// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSPASSCODEFIELD_H
#define PSPASSCODEFIELD_H

@class UIView, NSMutableArray, NSMutableString, NSString, NSArray, UIColor, UITextInputPasswordRules;
@protocol UIKeyInput, PSPasscodeFieldDelegate;



@interface PSPasscodeField : UIView <UIKeyInput>

 {
    NSMutableArray *_dotOutlineViews;
    NSMutableArray *_dotFullViews;
    NSMutableArray *_dashViews;
    NSMutableArray *_digitViews;
    NSMutableString *_stringValue;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSPasscodeFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (retain, nonatomic) NSArray *fieldSpacing; // ivar: _fieldSpacing
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance; // ivar: _keyboardAppearance
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) NSUInteger numberOfEntryFields; // ivar: _numberOfEntryFields
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic) BOOL securePasscodeEntry; // ivar: _securePasscodeEntry
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) BOOL shouldBecomeFirstResponderOnTap; // ivar: _shouldBecomeFirstResponderOnTap
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)initWithNumberOfEntryFields:(NSUInteger)arg0 ;
-(id)stringValue;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_delegateEnteredPasscode:(id)arg0 ;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)layoutSubviews;
-(void)passcodeFieldTapped:(id)arg0 ;
-(void)setStringValue:(id)arg0 ;


@end


#endif