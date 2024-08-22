// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKFINDMYSIGNOUTCONTROLLER_H
#define DKFINDMYSIGNOUTCONTROLLER_H

@class OBWelcomeController, ACAccount, AKAppleIDAuthenticationInAppContext, UIView, NSString, UIButton, UITextField;
@protocol AKInlineSignInViewControllerDelegate, AKAppleIDAuthenticationDelegate, UITextFieldDelegate;



@interface DKFindMySignOutController : OBWelcomeController <AKInlineSignInViewControllerDelegate, AKAppleIDAuthenticationDelegate, UITextFieldDelegate>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) AKAppleIDAuthenticationInAppContext *authContext; // ivar: _authContext
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) UIView *containerOutlineView; // ivar: _containerOutlineView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *forgotButton; // ivar: _forgotButton
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAuthInProgress; // ivar: _isAuthInProgress
@property (retain, nonatomic) UITextField *passwordField; // ivar: _passwordField
@property (readonly) Class superclass;


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_messageForError:(id)arg0 ;
-(id)_titleForError:(id)arg0 ;
-(id)initWithAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)_authenticateWithPassword:(id)arg0 ;
-(void)_cancelTapped:(id)arg0 ;
-(void)_disableFindMy:(id)arg0 withPassword:(id)arg1 ;
-(void)_handleFMIPAuthenticationResponse:(id)arg0 withError:(id)arg1 forContext:(id)arg2 completion:(id)arg3 ;
-(void)_passwordRecoveryButtonWasTapped:(id)arg0 ;
-(void)_turnOffTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif