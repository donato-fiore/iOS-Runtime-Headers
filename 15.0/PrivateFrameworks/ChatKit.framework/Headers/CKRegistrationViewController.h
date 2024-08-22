// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREGISTRATIONVIEWCONTROLLER_H
#define CKREGISTRATIONVIEWCONTROLLER_H

@class UIViewController, AKTapToSignInViewController, NSString, OBPrivacyLinkController;
@protocol AKTapToSignInViewControllerDelegate;



@interface CKRegistrationViewController : UIViewController <AKTapToSignInViewControllerDelegate>



@property (retain, nonatomic) AKTapToSignInViewController *akSignInVC; // ivar: _akSignInVC
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // ivar: _privacyLinkController
@property (readonly) Class superclass;


+(BOOL)_shouldShowAuthKitSignIn;
+(BOOL)shouldShowRegistration;
+(id)_inProgressRegisteringNonPhoneAccount;
-(BOOL)canBecomeFirstResponder;
-(id)accountRegistrar;
-(id)init;
-(void)_handleRegistrarCompletion:(BOOL)arg0 errorAlertController:(id)arg1 ;
-(void)dealloc;
-(void)keyboardDidShow:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)setErrorPresentationViewController:(id)arg0 ;
-(void)tapToSignInViewController:(id)arg0 didAuthenticateWithResults:(id)arg1 error:(id)arg2 ;
-(void)updateInsetsForKeyboardFrame:(struct CGRect )arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif