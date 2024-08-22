// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCAGENT_H
#define ASCAGENT_H

@class NSArray, NSXPCConnection, NSString, NSUUID, NSURL;
@protocol _TtP26AuthenticationServicesCore21ASCABLEClientDelegate_, ASCAuthorizationPresenterDelegate, ASCAgentProtocol, ASPublicKeyCredentialManagerDelegate, ASPublicKeyCredentialManagerInterface, OS_os_activity;

#import <Foundation/Foundation.h>

#import "ASCAuthorizationTrafficController.h"
#import "ASCCredentialRequestContext.h"
#import "ASCAuthorizationPresenter.h"
#import "_TtC26AuthenticationServicesCore13ASCABLEClient.h"
#import "_TtC26AuthenticationServicesCore20ASCABLEAuthenticator.h"

@interface ASCAgent : NSObject <_TtP26AuthenticationServicesCore21ASCABLEClientDelegate_, ASCAuthorizationPresenterDelegate, ASCAgentProtocol, ASPublicKeyCredentialManagerDelegate>

 {
    ASCAuthorizationTrafficController *_authorizationTrafficController;
    BOOL _existingAppleIDCredentialAvailableForLogIn;
    NSArray *_passwordCredentials;
    NSXPCConnection *_connection;
    ASCCredentialRequestContext *_requestContext;
    NSString *_clientApplicationIdentifier;
    ASCAuthorizationPresenter *_requestPresenter;
    BOOL _isClientEntitledWebBrowser;
    id *_authorizationCompletionHandler;
    id<ASPublicKeyCredentialManagerInterface> *_publicKeyCredentialManager;
    NSArray *_platformLoginChoices;
    NSArray *_securityKeyLoginChoices;
    id *_didLoadPlatformCredentialsCallback;
    id *_userEnteredPINCallback;
    id *_pinResultCallback;
    id *_passkeyCredentialCallback;
    NSUUID *_publicKeyCredentialOperationUUID;
    NSObject<OS_os_activity> *_authorizationActivity;
    _TtC26AuthenticationServicesCore13ASCABLEClient *_cableClient;
    BOOL _didStartCABLEClient;
    NSURL *_cableAuthenticationURL;
    _TtC26AuthenticationServicesCore20ASCABLEAuthenticator *_cableAuthenticator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_allowListExclusivelyMatchesPlatformLoginChoices:(id)arg0 ;
-(BOOL)_clientHasAuthKitDeveloperEntitlement;
-(BOOL)_clientHasNecessaryAuthKitEntitlements;
-(BOOL)_clientIsAuthKitOwner;
-(BOOL)_clientIsInternalAuthKit;
-(BOOL)_clientIsPrivateAuthKit;
-(BOOL)_hasAnyCredentialsAvailableForRequestTypes:(NSUInteger)arg0 ;
-(BOOL)_hasSignInOptionsForRequestTypes:(NSUInteger)arg0 ;
-(BOOL)_isClientWithApplicationIdentifier:(id)arg0 associatedWithRelyingParty:(id)arg1 ;
-(BOOL)_isClientWithApplicationIdentifier:(id)arg0 properlyEntitledForRequestContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldAddCABLEChoiceForRequestContext:(id)arg0 ;
-(BOOL)_shouldApplyQuirksToClientWithApplicationIdentifier:(id)arg0 ;
-(NSUInteger)_allowedAuthenticatorModalitiesForRequestContext:(id)arg0 ;
-(NSUInteger)test_allowedAuthenticatorModalitiesForRequestContext:(id)arg0 ;
-(id)_allAvailableLoginChoicesForRequestContext:(id)arg0 ;
-(id)_allTransportsForAssertionRequest:(id)arg0 ;
-(id)_bundleIDfromAppID:(id)arg0 ;
-(id)_cableLoginChoice;
-(id)_implicitlySelectAssertionLoginChoiceFromChoices:(id)arg0 forContext:(id)arg1 ;
-(id)_noCredentialsFoundErrorForRequestContext:(id)arg0 ;
-(id)encodeGetAssertionCTAPCommandForAuthenticatorWithUserVerificationAvailability:(NSUInteger)arg0 ;
-(id)encodeMakeCredentialCTAPCommandForAuthenticatorWithUserVerificationAvailability:(NSUInteger)arg0 ;
-(id)initWithTrafficController:(id)arg0 connection:(id)arg1 publicKeyCredentialManager:(id)arg2 ;
-(void)_authorizationCompletedWithCredential:(id)arg0 error:(id)arg1 ;
-(void)_configureAppleIDCredentialwithCompletionHandler:(id)arg0 ;
-(void)_configureLoginChoicesForPresentationContext:(id)arg0 withRequestContext:(id)arg1 ;
-(void)_configurePasswordCredentialsWithCompletionHandler:(id)arg0 ;
-(void)_configurePublicKeyCredentialsWithAssertionOptions:(id)arg0 forProcessWithApplicationIdentifier:(id)arg1 requestStyle:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)_credentialRequestedForCABLELoginChoice:(id)arg0 ;
-(void)_credentialRequestedForPasswordLoginChoice:(id)arg0 completionHandler:(id)arg1 ;
-(void)_credentialRequestedForPlatformLoginChoice:(id)arg0 authenticatedContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)_credentialRequestedForSecurityKeyLoginChoice:(id)arg0 ;
-(void)_performAuthKitAuthorizationValidation;
-(void)_prepareForAuthorizationRequestsForContext:(id)arg0 clientConnection:(id)arg1 withPresentationHandler:(id)arg2 ;
-(void)_presentAuthorizationRequestWithContext:(id)arg0 forProcess:(id)arg1 completionHandler:(id)arg2 ;
-(void)authorizationPresenter:(id)arg0 credentialRequestedForLoginChoice:(id)arg1 authenticatedContext:(id)arg2 completionHandler:(id)arg3 ;
-(void)authorizationPresenter:(id)arg0 startCABLEAuthenticationWithCompletionHandler:(id)arg1 ;
-(void)authorizationPresenter:(id)arg0 validateUserEnteredPIN:(id)arg1 completionHandler:(id)arg2 ;
-(void)cableClientWillAuthenticate:(id)arg0 ;
-(void)cableClientWillConnect:(id)arg0 ;
-(void)cancelCurrentRequest;
-(void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)didCompleteAssertionWithCredential:(id)arg0 error:(id)arg1 ;
-(void)didCompleteRegistrationWithCredential:(id)arg0 error:(id)arg1 ;
-(void)didFetchPlatformLoginChoices:(id)arg0 ;
-(void)didFetchSecurityKeyLoginChoices:(id)arg0 ;
-(void)didReceiveError:(NSInteger)arg0 ;
-(void)getArePasskeysDisallowedForRelyingParty:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getCanCurrentProcessAccessPasskeysForRelyingParty:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id)arg0 ;
-(void)openCABLEURL:(id)arg0 fromSourceApplication:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)performAuthorizationRequestsForContext:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)performSilentAuthorizationRequestsForContext:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)presentCABLESheetWithCompletionHandler:(id)arg0 ;
-(void)requestPINWithRemainingRetries:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)test_setIsClientEntitledWebBrowser:(BOOL)arg0 ;
-(void)userSelectedLoginChoice:(id)arg0 authenticatedContext:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif