// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDAMANAGER_H
#define PKDAMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKDAPairingSessionManager.h"
#import "PKDASessionManager.h"

@interface PKDAManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PKDAPairingSessionManager *_pairingSessionManager;
    PKDASessionManager *_managementSessionManager;
    PKDASessionManager *_sharingSessionManager;
}


@property (readonly, nonatomic, getter=isSupported) BOOL supported;


-(BOOL)deletePrivacyKey:(id)arg0 outError:(*id)arg1 ;
-(BOOL)hasLongTermPrivacyKeyForGroupIdentifier:(id)arg0 ;
-(id)createPrivacyKeyForGroupIdentifier:(id)arg0 outError:(*id)arg1 ;
-(id)decryptData:(id)arg0 withCredential:(id)arg1 ephemeralPublicKey:(id)arg2 ;
-(id)decryptPayload:(id)arg0 groupIdentifier:(id)arg1 outError:(*id)arg2 ;
-(id)description;
-(id)encryptData:(id)arg0 scheme:(id)arg1 recipientPublicKey:(id)arg2 outError:(*id)arg3 ;
-(id)init;
-(id)privacyKeysForGroupIdentifier:(id)arg0 privacyKeyIdentifier:(id)arg1 outError:(*id)arg2 ;
-(id)storeSEBlobForSubcredentialIdentifier:(id)arg0 seBlob:(id)arg1 ;
-(void)_deviceCredentialForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)acceptShareForSharingMessage:(id)arg0 transportChannelIdentifier:(id)arg1 activationCode:(id)arg2 completion:(id)arg3 ;
-(void)accountAttestionRequestForCredential:(id)arg0 withCompletion:(id)arg1 ;
-(void)createInviteForShare:(id)arg0 forCredential:(id)arg1 authorization:(id)arg2 completion:(id)arg3 ;
-(void)declineSharingInvitation:(id)arg0 completion:(id)arg1 ;
-(void)deleteCredential:(id)arg0 completion:(id)arg1 ;
-(void)deleteCredentials:(id)arg0 completion:(id)arg1 ;
-(void)generateSEEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateTransactionKeyWithParameters:(id)arg0 withCompletion:(id)arg1 ;
-(void)generateTransactionKeyWithReaderIdentifier:(id)arg0 readerPublicKey:(id)arg1 withCompletion:(id)arg2 ;
-(void)handleOutstandingMessage:(id)arg0 subcredentialIdentifier:(id)arg1 credentialShareIdentifier:(id)arg2 transportIdentifier:(id)arg3 completion:(id)arg4 ;
-(void)immobilizerTokensCountForCredential:(id)arg0 withCompletion:(id)arg1 ;
-(void)listCredentialsWithCompletion:(id)arg0 ;
-(void)listCredentialsWithSession:(id)arg0 seid:(id)arg1 completion:(id)arg2 ;
-(void)listDACredentialsWithSession:(id)arg0 seid:(id)arg1 completion:(id)arg2 ;
-(void)outstandingInvitesForCredential:(id)arg0 completion:(id)arg1 ;
-(void)prewarmWithManufacturerIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)probeTerminalForPairingStatusWithCompletion:(id)arg0 ;
-(void)rejectInvitation:(id)arg0 completion:(id)arg1 ;
-(void)removeSharedCredentialsWithIdentifiers:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)requestSharingInvitation:(id)arg0 from:(id)arg1 completion:(id)arg2 ;
-(void)rescindInvitations:(id)arg0 onCredential:(id)arg1 withCompletion:(id)arg2 ;
-(void)retryActivationCodeForCredentialIdentifier:(id)arg0 activationCode:(id)arg1 completion:(id)arg2 ;
-(void)revokeSharedCredentials:(id)arg0 onCredential:(id)arg1 withCompletion:(id)arg2 ;
-(void)sendSharingInvitation:(id)arg0 forInvitationRequest:(id)arg1 completion:(id)arg2 ;
-(void)sendSharingInvitationWithRequest:(id)arg0 auth:(id)arg1 completion:(id)arg2 ;
-(void)setAccountAttestation:(id)arg0 forCredential:(id)arg1 withCompletion:(id)arg2 ;
-(void)setTransportChannelIdentifier:(id)arg0 forCredential:(id)arg1 forCredentialShare:(id)arg2 completion:(id)arg3 ;
-(void)signData:(id)arg0 auth:(id)arg1 bundleIdentifier:(id)arg2 nonce:(id)arg3 credential:(id)arg4 completion:(id)arg5 ;
-(void)statusForReceivedSharingInvitationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)statusForSentSharingInvitationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateTrackingAttestation:(id)arg0 forCredential:(id)arg1 decrytedData:(id)arg2 completion:(id)arg3 ;


@end


#endif