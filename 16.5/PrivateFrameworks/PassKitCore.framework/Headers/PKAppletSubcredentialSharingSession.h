// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGSESSION_H
#define PKAPPLETSUBCREDENTIALSHARINGSESSION_H

@class DAKeySharingSession;


#import "PKDASession.h"

@interface PKAppletSubcredentialSharingSession : PKDASession

@property (retain, nonatomic) DAKeySharingSession *session;


+(id)createPendingSessionWithDelegate:(id)arg0 ;
+(id)createSessionWithDelegate:(id)arg0 ;
-(BOOL)cancelSharingInvitationWithIdentifier:(id)arg0 ;
-(BOOL)startSession;
-(void)acceptShareForSharingInvitation:(id)arg0 transportChannelIdentifier:(id)arg1 activationCode:(id)arg2 completion:(id)arg3 ;
-(void)acceptSharingInvitation:(id)arg0 completion:(id)arg1 ;
-(void)accountAttestionRequestForCredential:(id)arg0 withCompletion:(id)arg1 ;
-(void)createInviteForShare:(id)arg0 forCredential:(id)arg1 authorization:(id)arg2 completion:(id)arg3 ;
-(void)getPretrackRequestForKeyWithIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestSharingInvitation:(id)arg0 from:(id)arg1 completion:(id)arg2 ;
-(void)retryActivationCodeForCredentialIdentifier:(id)arg0 activationCode:(id)arg1 completion:(id)arg2 ;
-(void)sendSharingInvitation:(id)arg0 forInvitationRequest:(id)arg1 completion:(id)arg2 ;
-(void)sendSharingInvitationWithRequest:(id)arg0 auth:(id)arg1 completion:(id)arg2 ;
-(void)setAccountAttestation:(id)arg0 forCredential:(id)arg1 withCompletion:(id)arg2 ;
-(void)setTransportChannelIdentifier:(id)arg0 forCredential:(id)arg1 forCredentialShare:(id)arg2 completion:(id)arg3 ;


@end


#endif