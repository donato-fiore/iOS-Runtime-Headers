// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCBIOMETRICSTORE_H
#define DCBIOMETRICSTORE_H

@class NSString;
@protocol DCBioBindingProtocol;

#import <Foundation/Foundation.h>

#import "DCBiometricStoreClient.h"

@interface DCBiometricStore : NSObject <DCBioBindingProtocol>



@property (retain) DCBiometricStoreClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)bioBindingUnboundACL:(id)arg0 ;
-(void)credentialAuthenticationTokenStatus:(id)arg0 ;
-(void)deleteGlobalAuthACLWithCompletion:(id)arg0 ;
-(void)establishPrearmTrust:(id)arg0 completion:(id)arg1 ;
-(void)establishPrearmTrustV2:(id)arg0 completion:(id)arg1 ;
-(void)generatePhoneTokenWithNonce:(id)arg0 keyBlob:(id)arg1 pairingID:(id)arg2 completion:(id)arg3 ;
-(void)generatePrearmTrustCertificateWithNonce:(id)arg0 pairingID:(id)arg1 completion:(id)arg2 ;
-(void)getCASDCertificate:(id)arg0 ;
-(void)getProgenitorKeyAttestation:(id)arg0 ;
-(void)globalAuthACLTemplateUUIDsWithCompletion:(id)arg0 ;
-(void)globalAuthACLWithCompletion:(id)arg0 ;
-(void)nonceForAuthorizationTokenWithCompletion:(id)arg0 ;
-(void)passcodeBindingUnboundACL:(id)arg0 ;
-(void)prearmCredentialWithAuthorizationToken:(id)arg0 completion:(id)arg1 ;
-(void)revokeCredentialAuthorizationToken:(id)arg0 ;
-(void)setGlobalAuthACL:(id)arg0 ofType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)setModifiedGlobalAuthACL:(id)arg0 externalizedLAContext:(id)arg1 completion:(id)arg2 ;


@end


#endif