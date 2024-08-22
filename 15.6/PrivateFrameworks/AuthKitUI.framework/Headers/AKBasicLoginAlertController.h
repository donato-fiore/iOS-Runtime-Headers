// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKBASICLOGINALERTCONTROLLER_H
#define AKBASICLOGINALERTCONTROLLER_H

@class UIAlertController, NSString;
@protocol UITextFieldDelegate, AKBasicLoginPasswordFieldProtocol, AKSecondFactorCodeEntry, AKBasicLoginAnimateProtocol, NSObject, AKBasicLoginControllerDelegate;


#import "AKBasicLoginActions.h"
#import "AKBasicLoginSecondFactorActions.h"

@interface AKBasicLoginAlertController : UIAlertController <UITextFieldDelegate, AKBasicLoginPasswordFieldProtocol, AKSecondFactorCodeEntry, AKBasicLoginAnimateProtocol>

 {
    NSInteger _alertStyle;
    id<NSObject> *_didEnterCodeObserver;
}


@property (nonatomic) NSInteger alertStyle;
@property (copy, nonatomic) NSString *authenticateButtonTitle; // ivar: _ak_authenticateButtonTitle
@property (copy, nonatomic) NSString *authenticateTitle; // ivar: _ak_title
@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _ak_cancelButtonTitle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKBasicLoginControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *generatedCode; // ivar: _generatedCode
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) AKBasicLoginActions *loginActions; // ivar: _loginActions
@property (copy, nonatomic) NSString *password; // ivar: _ak_password
@property (copy, nonatomic) NSString *reason; // ivar: _ak_reason
@property (copy, nonatomic) AKBasicLoginSecondFactorActions *secondFactorActions; // ivar: _secondFactorActions
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _ak_username


-(BOOL)disablesAutomaticKeyboardDismissal;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_wrappedCancelAction;
-(id)initWithAlertStyle:(NSInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_beginObservingDidEnterCodeNotifications;
-(void)_didEnterCode:(id)arg0 ;
-(void)_dismissAndShowiForgot:(id)arg0 ;
-(void)_endObservingDidEnterCodeNotifications;
-(void)_passwordFieldDidChange:(id)arg0 ;
-(void)_setupAuthenticateAndCancelButtons;
-(void)_setupAuthenticateAndCancelButtonsWithIForgot:(BOOL)arg0 ;
-(void)_setupViewControllerForAlertStyle;
-(void)_setupViewControllerForDefaultStyle;
-(void)_setupViewControllerForIForgotStyle;
-(void)_setupViewControllerForNonEditableUsernameFieldStyle;
-(void)_setupViewControllerForSecondFactorEntryStyle;
-(void)_setupViewControllerForUserOrCreateAppleIDStyle;
-(void)_syncUsernameAndPasswordPropertiesWithTextFieldContent;
-(void)clearPasswordField;
-(void)clearSecondFactorEntry;
-(void)dealloc;
-(void)jiggleAView;
-(void)setPasscodeFieldDisabled:(BOOL)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif