// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAKEYMANAGEMENTSESSION_H
#define DAKEYMANAGEMENTSESSION_H

@class NSString;
@protocol KmlSessionCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyPreTrackDataUpdate, DAKeyImmobilizerTokenUpdate;


#import "DASession.h"

@interface DAKeyManagementSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyPreTrackDataUpdate, DAKeyImmobilizerTokenUpdate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)setTrackingReceipt:(id)arg0 forKeyWithIdentifier:(id)arg1 ;
-(id)setTrackingReceipt:(id)arg0 slotIdentifier:(id)arg1 confidentialMailboxData:(id)arg2 ephemeralPublicKey:(id)arg3 forKeyWithIdentifier:(id)arg4 ;
-(void)cancelAllFriendInvitationsWithCompletionHandler:(id)arg0 ;
-(void)cancelInvitationsWithIdentifiers:(id)arg0 sentByOwnerKeyWithIdentifier:(id)arg1 callback:(id)arg2 ;
-(void)countImmobilizerTokensForKeyWithIdentifier:(id)arg0 callback:(id)arg1 ;
-(void)deleteKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)didEnd:(id)arg0 ;
-(void)didStart:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endPointPrivacyDecryption:(id)arg0 encryptedData:(id)arg1 publicKey:(id)arg2 callback:(id)arg3 ;
-(void)getPreTrackRequestForKeyWithIdentifier:(id)arg0 callback:(id)arg1 ;
-(void)listKeysWithHandler:(id)arg0 ;
-(void)listKeysWithSession:(id)arg0 seid:(id)arg1 callback:(id)arg2 ;
-(void)listReceivedSharingInvitationsWithCallback:(id)arg0 ;
-(void)listSharingInvitationsForKeyIdentifier:(id)arg0 callback:(id)arg1 ;
-(void)localDeleteKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeSharedKeysWithIdentifiers:(id)arg0 ownerKeyWithIdentifier:(id)arg1 callback:(id)arg2 ;
-(void)removeSharingInvitationWithId:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestBindingAttestationDataForKeyWithIdentifier:(id)arg0 callback:(id)arg1 ;
-(void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)arg0 callback:(id)arg1 ;
-(void)revokeKeysWithIdentifiers:(id)arg0 sharedByOwnerKeyWithIdentifier:(id)arg1 callback:(id)arg2 ;
-(void)setBindingAttestation:(id)arg0 forKeyWithIdentifier:(id)arg1 callback:(id)arg2 ;
-(void)setImmobilizerTokens:(id)arg0 publicKey:(id)arg1 forKeyWithIdentifier:(id)arg2 callback:(id)arg3 ;
-(void)signAppData:(id)arg0 appBundleIdentifier:(id)arg1 nonce:(id)arg2 auth:(id)arg3 keyIdentifier:(id)arg4 callback:(id)arg5 ;


@end


#endif