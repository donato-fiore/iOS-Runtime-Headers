// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEVICEPINPANE_H
#define DEVICEPINPANE_H

@class UITransitionView, UIKeyboard, NSString, UITextInputPasswordRules, UIView<PINEntryView>;
@protocol UIKeyInput, UITextInputTraits, PSPINEntryViewDelegate;


#import "PSEditingPane.h"
#import "DevicePINKeypadContainerView.h"

@interface DevicePINPane : PSEditingPane <UIKeyInput, UITextInputTraits, PSPINEntryViewDelegate>

 {
    BOOL _transitioning;
    BOOL _keypadActive;
    BOOL _playSound;
    BOOL _isBlocked;
    BOOL _simplePIN;
    UITransitionView *_transitionView;
    UIKeyboard *_keypad;
}


@property (nonatomic) unsigned int PINLength; // ivar: _PINLength
@property (nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance; // ivar: _keyboardAppearance
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (retain) DevicePINKeypadContainerView *keypadContainerView; // ivar: _keypadContainerView
@property BOOL numericKeyboard; // ivar: _numericKeyboard
@property (copy, nonatomic) id *passcodeOptionsHandler; // ivar: _passcodeOptionsHandler
@property (copy, nonatomic) NSString *passcodeOptionsTitle; // ivar: _passcodeOptionsTitle
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (retain, nonatomic) UIView<PINEntryView> *pinView; // ivar: _pinView
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)requiresKeyboard;
-(BOOL)resignFirstResponder;
-(BOOL)simplePIN;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)password;
-(id)specifierLabel;
-(id)text;
-(void)_setKeypadState:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setPlaysKeyboardClicks:(BOOL)arg0 ;
-(void)activateKeypadView;
-(void)clearPassword;
-(void)deactivateKeypadView;
-(void)dealloc;
-(void)delayForTextEntryAnimationsWithCompletion:(id)arg0 ;
-(void)deleteBackward;
-(void)dismissKeypad;
-(void)hideError;
-(void)hideFailedAttempts;
-(void)insertText:(id)arg0 ;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)layoutSubviews;
-(void)okButtonPressed;
-(void)pinView:(id)arg0 pinEntered:(id)arg1 ;
-(void)pinView:(id)arg0 pinValueChanged:(id)arg1 ;
-(void)setKeyboardIsNumeric:(BOOL)arg0 ;
-(void)setKeyboardUserInteractionEnabled:(BOOL)arg0 ;
-(void)setPINPolicyString:(id)arg0 visible:(BOOL)arg1 ;
-(void)setSimplePIN:(BOOL)arg0 requiresKeyboard:(BOOL)arg1 ;
-(void)setSimplePIN:(BOOL)arg0 requiresKeyboard:(BOOL)arg1 numericOnly:(BOOL)arg2 ;
-(void)setSimplePIN:(BOOL)arg0 requiresKeyboard:(BOOL)arg1 numericOnly:(BOOL)arg2 showsOptions:(BOOL)arg3 ;
-(void)setText:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)showError:(id)arg0 error:(id)arg1 isBlocked:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)showFailedAttempts:(NSInteger)arg0 ;
-(void)slideToNewPasscodeField:(BOOL)arg0 requiresKeyboard:(BOOL)arg1 numericOnly:(BOOL)arg2 ;
-(void)slideToNewPasscodeField:(BOOL)arg0 requiresKeyboard:(BOOL)arg1 numericOnly:(BOOL)arg2 transition:(int)arg3 showsOptionsButton:(BOOL)arg4 ;
-(void)slideToNewPasscodeField:(BOOL)arg0 withKeyboard:(BOOL)arg1 ;
-(void)transitionToSimplePIN:(BOOL)arg0 requiresKeyboard:(BOOL)arg1 numericOnly:(BOOL)arg2 showsOptions:(BOOL)arg3 ;
-(void)transitionViewDidComplete:(id)arg0 ;


@end


#endif