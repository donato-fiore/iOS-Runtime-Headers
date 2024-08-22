// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGSESSION_H
#define PKAPPLETSUBCREDENTIALSHARINGSESSION_H

@class DAKeySharingSession;


#import "PKDASession.h"

@interface PKAppletSubcredentialSharingSession : PKDASession

@property (retain, nonatomic) DAKeySharingSession *session;


+(id)createSessionWithDelegate:(id)arg0 ;
-(BOOL)cancelSharingInvitationWithIdentifier:(id)arg0 ;
-(void)acceptSharingInvitation:(id)arg0 completion:(id)arg1 ;
-(void)accountAttestionRequestForCredential:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestSharingInvitation:(id)arg0 from:(id)arg1 completion:(id)arg2 ;
-(void)sendSharingInvitation:(id)arg0 forInvitationRequest:(id)arg1 withSharedCredential:(id)arg2 completion:(id)arg3 ;
-(void)sendSharingInvitationWithRequest:(id)arg0 auth:(id)arg1 completion:(id)arg2 ;
-(void)setAccountAttestation:(id)arg0 forCredential:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif