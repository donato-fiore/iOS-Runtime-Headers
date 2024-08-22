// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


-(id)decryptData:(id)arg0 withCredential:(id)arg1 ephemeralPublicKey:(id)arg2 ;
-(id)description;
-(id)init;
-(id)storeSEBlobForSubcredentialIdentifier:(id)arg0 seBlob:(id)arg1 ;
-(void)declineSharingInvitation:(id)arg0 completion:(id)arg1 ;
-(void)deleteCredential:(id)arg0 completion:(id)arg1 ;
-(void)deleteCredentials:(id)arg0 completion:(id)arg1 ;
-(void)generateSEEncryptionCertificateForSubCredentialId:(id)arg0 completion:(id)arg1 ;
-(void)generateTransactionKeyWithParameters:(id)arg0 withCompletion:(id)arg1 ;
-(void)generateTransactionKeyWithReaderIdentifier:(id)arg0 readerPublicKey:(id)arg1 withCompletion:(id)arg2 ;
-(void)immobilizerTokensCountForCredential:(id)arg0 withCompletion:(id)arg1 ;
-(void)listCredentialsWithCompletion:(id)arg0 ;
-(void)listCredentialsWithSession:(id)arg0 seid:(id)arg1 completion:(id)arg2 ;
-(void)listDACredentialsWithSession:(id)arg0 seid:(id)arg1 completion:(id)arg2 ;
-(void)prewarmWithIssuerName:(id)arg0 completion:(id)arg1 ;
-(void)probeTerminalForPairingStatusWithCompletion:(id)arg0 ;
-(void)removeSharedCredentialsWithIdentifiers:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)requestSharingInvitation:(id)arg0 from:(id)arg1 completion:(id)arg2 ;
-(void)rescindInvitations:(id)arg0 onCredential:(id)arg1 withCompletion:(id)arg2 ;
-(void)revokeSharedCredentials:(id)arg0 onCredential:(id)arg1 withCompletion:(id)arg2 ;
-(void)sendSharingInvitation:(id)arg0 forInvitationRequest:(id)arg1 withSharedCredential:(id)arg2 completion:(id)arg3 ;
-(void)sendSharingInvitationWithRequest:(id)arg0 auth:(id)arg1 completion:(id)arg2 ;
-(void)signData:(id)arg0 auth:(id)arg1 bundleIdentifier:(id)arg2 nonce:(id)arg3 credential:(id)arg4 completion:(id)arg5 ;
-(void)statusForReceivedSharingInvitationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)statusForSentSharingInvitationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateTrackingAttestation:(id)arg0 forCredential:(id)arg1 decrytedData:(id)arg2 completion:(id)arg3 ;


@end


#endif