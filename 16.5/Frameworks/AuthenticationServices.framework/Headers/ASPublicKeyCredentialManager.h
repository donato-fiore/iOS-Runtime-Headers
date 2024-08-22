// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASPUBLICKEYCREDENTIALMANAGER_H
#define ASPUBLICKEYCREDENTIALMANAGER_H

@class NSMutableDictionary, NSMapTable, NSString;
@protocol _WKWebAuthenticationPanelDelegate, ASPublicKeyCredentialManagerInterface, ASPasskeyAutoFillManagerDelegate;

#import <Foundation/Foundation.h>


@interface ASPublicKeyCredentialManager : NSObject <_WKWebAuthenticationPanelDelegate, ASPublicKeyCredentialManagerInterface>

 {
    os_unfair_lock_s _operationsLock;
    NSMutableDictionary *_uuidToOperation;
    NSMapTable *_panelToWeakOperation;
    NSMapTable *_applicationIdentifierToWeakOperation;
    NSMapTable *_webFrameIdentifierToWeakOperationForBrowser;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<ASPasskeyAutoFillManagerDelegate> *passkeyAutoFillManagerDelegate; // ivar: _passkeyAutoFillManagerDelegate
@property (readonly) Class superclass;


-(id)_allowedCredentialsForAssertionOptions:(id)arg0 ;
-(id)_asToWKCredentialAssertionOptions:(id)arg0 ;
-(id)_asToWKCredentialCreationOptions:(id)arg0 forCredentialKind:(NSUInteger)arg1 ;
-(id)_createCredentialOfKind:(NSUInteger)arg0 withOptions:(id)arg1 authenticatedLAContext:(id)arg2 delegate:(id)arg3 webFrameIdentifier:(id)arg4 parentActivity:(id)arg5 ;
-(id)_newOperationWithRelyingPartyIdentifier:(id)arg0 delegate:(id)arg1 sourceApplicationIdentifier:(id)arg2 webFrameIdentifier:(id)arg3 shouldRequireUserVerification:(BOOL)arg4 parentActivity:(id)arg5 ;
-(id)_newPanelForOperation:(id)arg0 ;
-(id)_operationForApplicationIdentifierIfExists:(id)arg0 ;
-(id)_operationForPanel:(id)arg0 ;
-(id)_operationForPanelIfExists:(id)arg0 ;
-(id)_operationForUUID:(id)arg0 ;
-(id)_operationForUUIDIfExists:(id)arg0 ;
-(id)_operationForWebFrameIdentifier:(id)arg0 ;
-(id)autoFillOperationUUIDForApplicationIdentifier:(id)arg0 ;
-(id)autoFillOperationUUIDForWebFrameIdentifier:(id)arg0 ;
-(id)autoFillPasskeysForOperationUUID:(id)arg0 ;
-(id)beginAssertionsWithOptions:(id)arg0 forProcessWithApplicationIdentifier:(id)arg1 delegate:(id)arg2 requestStyle:(NSInteger)arg3 webFrameIdentifier:(id)arg4 parentActivity:(id)arg5 ;
-(id)beginCreatingNewSecurityKeyCredentialIfAvailableWithOptions:(id)arg0 delegate:(id)arg1 webFrameIdentifier:(id)arg2 parentActivity:(id)arg3 ;
-(id)browserPasskeysForRelyingParty:(id)arg0 ;
-(id)createNewPlatformCredentialWithOptions:(id)arg0 authenticatedContext:(id)arg1 delegate:(id)arg2 webFrameIdentifier:(id)arg3 parentActivity:(id)arg4 ;
-(id)encodeGetAssertionCommandWithOptions:(id)arg0 authenticatorUserVerificationAvailability:(NSUInteger)arg1 ;
-(id)encodeMakeCredentialCommandWithOptions:(id)arg0 authenticatorUserVerificationAvailability:(NSUInteger)arg1 ;
-(id)init;
-(void)_finishAssertionForOperationWithUUID:(id)arg0 identifier:(id)arg1 authenticatedContext:(id)arg2 ;
-(void)_tearDownOperationWithUUID:(id)arg0 ;
-(void)assertUsingAutoFillPasskeyWithIdentifier:(id)arg0 authenticatedContext:(id)arg1 forOperationUUID:(id)arg2 ;
-(void)assertUsingPlatformCredentialForLoginChoice:(id)arg0 authenticatedContext:(id)arg1 ;
-(void)assertUsingSecurityKeyCredentialForLoginChoice:(id)arg0 ;
-(void)cancelOperationIfNecessaryWithUUID:(id)arg0 overrideError:(id)arg1 ;
-(void)clearAllCredentials;
-(void)panel:(id)arg0 dismissWebAuthenticationPanelWithResult:(NSInteger)arg1 ;
-(void)panel:(id)arg0 requestLAContextForUserVerificationWithCompletionHandler:(id)arg1 ;
-(void)panel:(id)arg0 requestPINWithRemainingRetries:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)panel:(id)arg0 selectAssertionResponse:(id)arg1 source:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)panel:(id)arg0 updateWebAuthenticationPanel:(NSInteger)arg1 ;
-(void)presentCABLESheetForOperationUUID:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif