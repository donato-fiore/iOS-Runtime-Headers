// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGACCEPTREMOTEINVITATIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGACCEPTREMOTEINVITATIONOPERATION_H

@protocol PKPaymentWebServiceTargetDeviceProtocol;


#import "PKSubcredentialProvisioningOperation.h"
#import "PKPaymentWebService.h"
#import "PKAppletSubcredentialSharingInvitation.h"

@interface PKSubcredentialProvisioningAcceptRemoteInvitationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentWebService *_remoteDeviceWebService;
    PKPaymentWebService *_localDeviceWebService;
    id<PKPaymentWebServiceTargetDeviceProtocol> *_remoteTargetDevice;
    id<PKPaymentWebServiceTargetDeviceProtocol> *_localTargetDevice;
    PKAppletSubcredentialSharingInvitation *_invitation;
}




+(BOOL)canDeviceAcceptInvitation:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)_handleAcceptInviteResponseWithPass:(id)arg0 error:(id)arg1 ;
-(void)acceptCrossPlatformInvitation;
-(void)acceptIDSInvitation;
-(void)acceptInvitation:(id)arg0 withMetadata:(id)arg1 ;
-(void)canAcceptInvitation:(id)arg0 withCompletion:(id)arg1 ;
-(void)getMatchingInvitation:(id)arg0 withCompletion:(id)arg1 ;
-(void)metadataForInvitation:(id)arg0 withCompletion:(id)arg1 ;
-(void)performOperation;


@end


#endif