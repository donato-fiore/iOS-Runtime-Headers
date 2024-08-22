// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGREQUESTREMOTEINVITATIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGREQUESTREMOTEINVITATIONOPERATION_H

@protocol PKPaymentWebServiceTargetDeviceProtocol;


#import "PKSubcredentialProvisioningOperation.h"
#import "PKPaymentWebService.h"
#import "PKAppletSubcredentialSharingInvitation.h"

@interface PKSubcredentialProvisioningRequestRemoteInvitationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentWebService *_remoteDeviceWebService;
    id<PKPaymentWebServiceTargetDeviceProtocol> *_remoteTargetDevice;
    PKAppletSubcredentialSharingInvitation *_invitation;
}




+(BOOL)canRequestInvitation:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)performOperation;


@end


#endif