// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIPASSCODEENTRYFIELD_H
#define SBUIPASSCODEENTRYFIELD_H

@class UIView, NSMutableCharacterSet, UIColor, NSString, UIFont, UITextField;
@protocol UITextFieldDelegate, SBUIPasscodeEntryFieldDelegate;



@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate>

 {
    NSMutableCharacterSet *_numericTrimmingSet;
    BOOL _ignoreCallbacks;
    BOOL _resigningFirstResponder;
}


@property (retain, nonatomic) UIColor *customBackgroundColor; // ivar: _customBackgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBUIPasscodeEntryFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_textField) UITextField *textField; // ivar: _textField


+(BOOL)_usesTextFieldForFirstResponder;
-(BOOL)_hasAnyCharacters;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)shouldInsertPasscodeText:(id)arg0 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg0 ;
-(struct CGSize )_viewSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_appendString:(id)arg0 ;
-(void)_autofillForBiometricAuthenticationWithCompletion:(id)arg0 ;
-(void)_deleteLastCharacter;
-(void)_handleKeyUIEvent:(id)arg0 source:(int)arg1 ;
-(void)_resetForFailedPasscode:(BOOL)arg0 ;
-(void)_setLuminosityBoost:(CGFloat)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)deleteLastCharacter;
-(void)notePasscodeFieldDidAcceptEntry;
-(void)notePasscodeFieldTextDidChange;
-(void)reset;
-(void)textFieldDidResignFirstResponder:(id)arg0 ;


@end


#endif