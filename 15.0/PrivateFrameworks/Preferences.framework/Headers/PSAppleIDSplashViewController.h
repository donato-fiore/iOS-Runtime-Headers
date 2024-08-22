// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSAPPLEIDSPLASHVIEWCONTROLLER_H
#define PSAPPLEIDSPLASHVIEWCONTROLLER_H

@class AKAppleIDAuthenticationController, UIActivityIndicatorView, UIBarButtonItem, NSString, NSTimer, RemoteUIController;
@protocol AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate;


#import "PSListController.h"
#import "PSSpecifier.h"

@interface PSAppleIDSplashViewController : PSListController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate>

 {
    AKAppleIDAuthenticationController *_authController;
    id *_passwordHandler;
    UIActivityIndicatorView *_spinner;
    UIBarButtonItem *_spinnerBarItem;
    UIBarButtonItem *_nextButtonBarItem;
    UIBarButtonItem *_cancelButtonBarItem;
    PSSpecifier *_createNewAccountButtonSpecifier;
    PSSpecifier *_createNewAccountGroupSpecifier;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_passwordSpecifier;
    PSSpecifier *_userSpecifier;
    NSString *_username;
    NSString *_password;
    id *_textFieldTextDidChangeObserver;
    BOOL _isPasswordDirty;
    BOOL _shouldHideBackButton;
    *void _powerAssertion;
    NSTimer *_idleJiggleTimer;
    RemoteUIController *_remoteUIController;
    id *_remoteUICompletion;
}


@property (readonly, nonatomic) AKAppleIDAuthenticationController *authenticationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setPresentedModally:) BOOL isPresentedModally; // ivar: _isPresentedModally
@property (nonatomic) BOOL shouldShowCreateAppleIDButton; // ivar: _shouldShowCreateAppleIDButton
@property (readonly) Class superclass;


-(BOOL)_runningInMail;
-(BOOL)_shouldAnchorCreateAccountButton;
-(BOOL)_shouldShowCancelDone;
-(CGFloat)_heightForCreateNewAccountFooterWithWidth:(CGFloat)arg0 ;
-(CGFloat)_heightForCreateNewAccountSpecifierWithWidth:(CGFloat)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)_passwordForSpecifier:(id)arg0 ;
-(id)_silhouetteMonogram;
-(id)_specifierForGroupWithiForgotLink;
-(id)_specifierForLoginPasswordForm;
-(id)_specifierForLoginUserForm;
-(id)_specifiersForCreateNewAccount;
-(id)_specifiersForSignInButton;
-(id)_usernameForSpecifier:(id)arg0 ;
-(id)serviceDescription;
-(id)serviceIcon;
-(id)serviceName;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)title;
-(void)_beginiCloudCreationFlowWithContinuationData:(id)arg0 completion:(id)arg1 ;
-(void)_cancelButtonWasTapped:(id)arg0 ;
-(void)_cancelPasswordDelegateIfNecessary;
-(void)_createNewAppleIDButtonWasTapped:(id)arg0 ;
-(void)_iForgotButtonWasTapped:(id)arg0 ;
-(void)_openWebBasedCredentialRecoveryFlow;
-(void)_presentAppleIDPrivacyInformationPane;
-(void)_presentInvalidUsernameAlert;
-(void)_reloadPasswordSpecifier;
-(void)_setInteractionEnabled:(BOOL)arg0 ;
-(void)_setPassword:(id)arg0 withSpecifier:(id)arg1 ;
-(void)_setUsername:(id)arg0 withSpecifier:(id)arg1 ;
-(void)_signInButtonWasTapped:(id)arg0 ;
-(void)_signInWithUsername:(id)arg0 password:(id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg0 ;
-(void)_updateSignInButton;
-(void)context:(id)arg0 needsPasswordWithCompletion:(id)arg1 ;
-(void)createNewAppleIDWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)didFinishAuthWithContext:(id)arg0 results:(id)arg1 error:(id)arg2 ;
-(void)handleAuthCompletionWithResults:(id)arg0 ;
-(void)hideBusyUI;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;
-(void)returnPressedAtEnd;
-(void)setUsername:(id)arg0 ;
-(void)setUsernameEnabled:(BOOL)arg0 ;
-(void)showBusyUI;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBeginAuthWithContext:(id)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif