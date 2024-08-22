// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGSENDINVITATIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGSENDINVITATIONOPERATION_H



#import "PKSubcredentialProvisioningSharingSessionOperation.h"
#import "PKAppletSubcredentialSharingRequest.h"
#import "PKAppletSubcredentialSharingInvitation.h"
#import "PKAppletSubcredential.h"
#import "PKPaymentWebService.h"
#import "PKAppletSubcredentialSharingInvitationReceipt.h"

@interface PKSubcredentialProvisioningSendInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation {
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    PKAppletSubcredentialSharingInvitation *_invitation;
    PKAppletSubcredential *_credential;
    PKPaymentWebService *_localDeviceWebService;
    PKPaymentWebService *_remoteDeviceWebService;
    PKAppletSubcredentialSharingInvitationReceipt *_invitationReceipt;
    BOOL _hasFinished;
}




-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(id)userAuthDelegate;
-(void)canAcceptInvitationWithCompletion:(id)arg0 ;
-(void)initializeAccountAttestationIfNecessaryWithCompletion:(id)arg0 ;
-(void)performOperation;
-(void)sendInvitation;
-(void)sendInvitationWithAuth:(id)arg0 completion:(id)arg1 ;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;


@end


#endif