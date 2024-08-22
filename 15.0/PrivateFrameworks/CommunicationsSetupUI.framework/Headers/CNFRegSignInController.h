// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFREGSIGNINCONTROLLER_H
#define CNFREGSIGNINCONTROLLER_H

@class PSSpecifier, NSString;
@protocol CNFRegCreateAccountControllerDelegate;


#import "CNFRegFirstRunController.h"
#import "CNFRegLearnMoreButton.h"

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate>

 {
    PSSpecifier *_usernameSpecifier;
    PSSpecifier *_passwordSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_createAccountButtonSpecifier;
    CNFRegLearnMoreButton *_learnMoreButton;
    BOOL _useSystemAccount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideLearnMoreButton; // ivar: _hideLearnMoreButton
@property (copy, nonatomic) NSString *pendingPassword; // ivar: _pendingPassword
@property (copy, nonatomic) NSString *pendingUsername; // ivar: _pendingUsername
@property (nonatomic) NSUInteger signinFailureCount; // ivar: _signinFailureCount
@property (readonly) Class superclass;


-(BOOL)passwordIsEmpty;
-(BOOL)usernameIsEmpty;
-(id)_rightButtonItem;
-(id)bundle;
-(id)getPasswordForSpecifier:(id)arg0 ;
-(id)getUserNameForSpecifier:(id)arg0 ;
-(id)logName;
-(id)passwordTextField;
-(id)specifierList;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)usernameTextField;
-(id)validationString;
-(void)__userTappedTextField;
-(void)_buildCreateAccountButtonSpecifierCache:(id)arg0 ;
-(void)_buildCredentialSpecifierCache:(id)arg0 ;
-(void)_buildSignInGroupSpecifierCache:(id)arg0 ;
-(void)_buildSpecifierCache:(id)arg0 ;
-(void)_finishSignInWithAccount:(id)arg0 animated:(BOOL)arg1 ;
-(void)_handleTimeout;
-(void)_incrementSigninFailureCount;
-(void)_launchForgotPasswordUrl;
-(void)_layoutLearnMoreButton;
-(void)_loadRegionsIfNecessary;
-(void)_resignFirstResponders;
-(void)_returnKeyPressed;
-(void)_setFieldsEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg0 token:(id)arg1 ;
-(void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg0 ;
-(void)_setupEventHandlers;
-(void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg0 token:(id)arg1 ;
-(void)_showNewPasswordNeededSheetWithAppleID:(id)arg0 ;
-(void)_showRegistrationFailureWithError:(id)arg0 ;
-(void)_showSigninFailureAlert;
-(void)_startTimeout;
-(void)_updateControllerState;
-(void)_updateUI;
-(void)applicationDidResume;
-(void)cancelButtonTapped;
-(void)createAccountControllerDidFinish:(id)arg0 withAppleId:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)dealloc;
-(void)forgotIDButtonTapped;
-(void)handleURL:(id)arg0 ;
-(void)learnMorePressed:(id)arg0 ;
-(void)loadView;
-(void)passwordFieldDidBeginEditing:(id)arg0 ;
-(void)passwordFieldEmptyStateChanged:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setCreateAccountButtonEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setPasswordEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setPasswordText:(id)arg0 ;
-(void)setSignInButtonEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg0 ;
-(void)setUsernameEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setUsernameText:(id)arg0 ;
-(void)showCreateAccountController;
-(void)signInTapped:(id)arg0 ;
-(void)signInWithUsername:(id)arg0 password:(id)arg1 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)usernameFieldDidBeginEditing:(id)arg0 ;
-(void)usernameFieldEmptyStateChanged:(id)arg0 forSpecifier:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif