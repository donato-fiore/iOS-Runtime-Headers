// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKINLINESIGNINVIEWCONTROLLER_H
#define AKINLINESIGNINVIEWCONTROLLER_H

@class NSString, UIButton, UIColor, UIView, UIActivityIndicatorView;
@protocol UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate;


#import "AKBaseSignInViewController.h"
#import "AKAppleIDAuthenticationInAppContext.h"
#import "AKTextField.h"

@interface AKInlineSignInViewController : AKBaseSignInViewController <UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate>

 {
    BOOL _usesDarkMode;
    BOOL _usesVibrancy;
    BOOL _createAppleIDAllowed;
    NSInteger _blurEffectStyle;
    NSString *_secondaryButtonTitle;
    NSString *_tertiaryButtonTitle;
    AKAppleIDAuthenticationInAppContext *_context;
    id *_passwordRequiredCompletion;
}


@property (retain, nonatomic) AKTextField *appleIDField; // ivar: _appleIDField
@property (nonatomic) NSInteger blurEffectStyle;
@property (retain, nonatomic) UIButton *createAppleIDButton; // ivar: _createAppleIDButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *entryDescriptionTextColor; // ivar: _entryDescriptionTextColor
@property (retain, nonatomic) UIColor *entryFieldTextColor; // ivar: _entryFieldTextColor
@property (retain, nonatomic) UIColor *fieldBackgroundColor; // ivar: _fieldBackgroundColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *iforgotButton; // ivar: _iforgotButton
@property (retain, nonatomic) UIView *loginFieldsContainer; // ivar: _loginFieldsContainer
@property (retain, nonatomic) AKTextField *passwordField; // ivar: _passwordField
@property (nonatomic, getter=isPrimaryButtonHidden) BOOL primaryButtonHidden; // ivar: _primaryButtonHidden
@property (readonly, nonatomic) NSString *primaryButtonTitle; // ivar: _primaryButtonTitle
@property (copy, nonatomic) NSString *secondaryButtonTitle;
@property (nonatomic) BOOL shouldPromptForPasswordOnly; // ivar: _shouldPromptForPasswordOnly
@property (retain, nonatomic) UIButton *signInButton; // ivar: _signInButton
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tertiaryButtonTitle;
@property (nonatomic) BOOL usesVibrancy;
@property (nonatomic) BOOL wantsAuthenticationProgress; // ivar: _wantsAuthenticationProgress


-(BOOL)_canShowWhileLocked;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)usesDarkMode;
-(id)context;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_appleIDTextFieldDidChange:(id)arg0 ;
-(void)_applyStyleForButton:(id)arg0 ;
-(void)_beginAuthenticationIfPossibleWithOption:(NSUInteger)arg0 ;
-(void)_passwordTextFieldDidChange:(id)arg0 ;
-(void)_prefillAuthFields;
-(void)_setButtonTitles;
-(void)_updateFonts:(id)arg0 ;
-(void)_updatePlaceholderIfNeeded;
-(void)_updateSignInButtonState;
-(void)_updateSignInFieldStatuses;
-(void)_updateVibrancyAndBlurInTextFields;
-(void)context:(id)arg0 needsPasswordWithCompletion:(id)arg1 ;
-(void)createAppleIDButtonWasTapped:(id)arg0 ;
-(void)dealloc;
-(void)iForgotButtonWasTapped:(id)arg0 ;
-(void)refreshCreateAppleIDButton;
-(void)setContext:(id)arg0 ;
-(void)setSecondaryButtonTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setTertiaryButtonTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setUsesDarkMode:(BOOL)arg0 ;
-(void)signInButtonWasTapped:(id)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif