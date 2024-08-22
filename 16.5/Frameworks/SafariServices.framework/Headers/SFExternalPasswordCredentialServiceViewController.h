// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFEXTERNALPASSWORDCREDENTIALSERVICEVIEWCONTROLLER_H
#define SFEXTERNALPASSWORDCREDENTIALSERVICEVIEWCONTROLLER_H

@class _ASCredentialAuthenticationViewController, NSString;
@protocol SFCredentialProviderExtensionManagerObserver, _ASCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFExternalPasswordCredentialServiceViewControllerProtocol;


#import "SFPasswordServiceViewController.h"
#import "_SFAuthenticationContext.h"

@interface SFExternalPasswordCredentialServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, _ASCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFExternalPasswordCredentialServiceViewControllerProtocol>

 {
    _SFAuthenticationContext *_authenticationContext;
    _ASCredentialAuthenticationViewController *_extensionController;
    NSInteger _completionAction;
    id *_getCredentialCompletion;
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
-(id)_authenticationContext;
-(id)authenticationCustomUIProgressObserverForContext:(id)arg0 ;
-(id)authenticationMessageForContext:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)passcodePromptForContext:(id)arg0 ;
-(void)_dismiss;
-(void)_finishRequestToAutoFillCredential:(id)arg0 extensionShowedUI:(BOOL)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)_finishRequestToReturnCredential:(id)arg0 extensionShowedUI:(BOOL)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)autoFillWithCredentialIdentity:(id)arg0 ;
-(void)credentialAuthenticationViewController:(id)arg0 didFinishWithCredential:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg0 ;
-(void)getCredentialForCredentialIdentity:(id)arg0 completion:(id)arg1 ;
-(void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg0 ;


@end


#endif