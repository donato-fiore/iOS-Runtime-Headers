// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPASSWORDPICKERSERVICEVIEWCONTROLLER_H
#define SFPASSWORDPICKERSERVICEVIEWCONTROLLER_H

@class _ASPasswordCredentialAuthenticationViewController, NSURL, NSString, NSArray, _ASIncomingCallObserver;
@protocol SFCredentialProviderExtensionManagerObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate, UIPresentationControllerDelegatePrivate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFPasswordPickerServiceViewControllerProtocol;


#import "SFPasswordServiceViewController.h"
#import "SFAccountPickerViewController.h"
#import "_SFAuthenticationContext.h"

@interface SFPasswordPickerServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate, UIPresentationControllerDelegatePrivate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFPasswordPickerServiceViewControllerProtocol>

 {
    _ASPasswordCredentialAuthenticationViewController *_externalCredentialViewController;
    SFAccountPickerViewController *_accountPickerViewController;
    BOOL _presentInPopover;
    BOOL _hasAuthenticationForOtherPasswords;
    NSURL *_webViewURL;
    _SFAuthenticationContext *_context;
    NSString *_remoteAppID;
    NSString *_remoteLocalizedAppName;
    NSString *_remoteUnlocalizedAppName;
    NSArray *_externallyVerifiedAssociatedDomains;
    CGFloat _authenticationGracePeriod;
    id *_presentCredentialsHandler;
    _ASIncomingCallObserver *_callObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)contextRequiresSessionBasedAuthentication:(id)arg0 ;
-(BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg0 ;
-(BOOL)contextShouldAllowPasscodeFallback:(id)arg0 ;
-(BOOL)displayMessageAsTitleForContext:(id)arg0 ;
-(id)_actionForPresentingPasswordManagerExtension:(id)arg0 ;
-(id)_context;
-(id)authenticationCustomUIProgressObserverForContext:(id)arg0 ;
-(id)authenticationMessageForContext:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)passcodePromptForContext:(id)arg0 ;
-(void)_authenticateAndSetPresentCredentialsHandlerWithCompletion:(id)arg0 ;
-(void)_authenticateToViewOtherPasswordsWithCompletion:(id)arg0 ;
-(void)_dismiss;
-(void)_fillCredential:(id)arg0 needsAuthentication:(BOOL)arg1 ;
-(void)_presentCredentialListForExtension:(id)arg0 ;
-(void)_sendCredentialToClientAndDismiss:(id)arg0 ;
-(void)authenticateToPresentInPopover:(BOOL)arg0 completion:(id)arg1 ;
-(void)credentialListViewController:(id)arg0 didFinishWithCredential:(id)arg1 completion:(id)arg2 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg0 ;
-(void)passwordCredentialAuthenticationViewController:(id)arg0 didFinishWithCredential:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)setAuthenticationGracePeriod:(CGFloat)arg0 ;
-(void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg0 ;
-(void)setRemoteAppID:(id)arg0 ;
-(void)setRemoteLocalizedAppName:(id)arg0 ;
-(void)setRemoteUnlocalizedAppName:(id)arg0 ;
-(void)setWebViewURL:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif