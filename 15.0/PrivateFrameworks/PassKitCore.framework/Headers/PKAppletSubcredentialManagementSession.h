// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLETSUBCREDENTIALMANAGEMENTSESSION_H
#define PKAPPLETSUBCREDENTIALMANAGEMENTSESSION_H

@class DAKeyManagementSession;


#import "PKDASession.h"

@interface PKAppletSubcredentialManagementSession : PKDASession

@property (retain, nonatomic) DAKeyManagementSession *session;


+(id)createSessionWithDelegate:(id)arg0 ;
-(id)trackSubcredential:(id)arg0 slotIdentifier:(id)arg1 confidentialMailboxData:(id)arg2 ephemeralPublicKey:(id)arg3 withReceipt:(id)arg4 ;
-(void)deleteCredential:(id)arg0 completionHandler:(id)arg1 ;
-(void)immobilizerTokensCountForCredential:(id)arg0 withCompletion:(id)arg1 ;
-(void)listCredentialsWithCompletion:(id)arg0 ;
-(void)listReceivedSharingInvitationsWithCompletion:(id)arg0 ;
-(void)listSharingInvitationsForKeyIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeSharedCredentialsWithIdentifiers:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)rescindInvitations:(id)arg0 onCredential:(id)arg1 withCompletion:(id)arg2 ;
-(void)revokeSharedCredentials:(id)arg0 onCredential:(id)arg1 withCompletion:(id)arg2 ;
-(void)signData:(id)arg0 auth:(id)arg1 bundleIdentifier:(id)arg2 nonce:(id)arg3 credential:(id)arg4 completion:(id)arg5 ;


@end


#endif