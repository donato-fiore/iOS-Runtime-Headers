// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALPROVISIONINGACCEPTINVITATIONCONFIGURATION_H
#define PKSUBCREDENTIALPROVISIONINGACCEPTINVITATIONCONFIGURATION_H



#import "PKSubcredentialProvisioningLocalDeviceConfiguration.h"
#import "PKAppletSubcredentialSharingInvitation.h"
#import "PKAppletSubcredentialSharingInvitationMetadata.h"
#import "PKPaymentWebService.h"
#import "PKAppletSubcredentialSharingSession.h"

@interface PKSubcredentialProvisioningAcceptInvitationConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration

@property (readonly, nonatomic) BOOL declineRelatedInvitations; // ivar: _declineRelatedInvitations
@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitation *invitation; // ivar: _invitation
@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitationMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) PKPaymentWebService *remoteDeviceWebService; // ivar: _remoteDeviceWebService
@property (readonly, weak, nonatomic) PKAppletSubcredentialSharingSession *session; // ivar: _session


-(NSInteger)startingState;
-(id)description;
-(id)initWithSession:(id)arg0 invitation:(id)arg1 metadata:(id)arg2 declineRelatedInvitations:(BOOL)arg3 localDeviceWebService:(id)arg4 remoteDeviceWebService:(id)arg5 ;
-(id)initWithSession:(id)arg0 invitation:(id)arg1 metadata:(id)arg2 webService:(id)arg3 ;
-(id)transitionTable;


@end


#endif