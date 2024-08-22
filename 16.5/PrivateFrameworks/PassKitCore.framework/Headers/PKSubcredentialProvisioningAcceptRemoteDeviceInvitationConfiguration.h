// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGACCEPTREMOTEDEVICEINVITATIONCONFIGURATION_H
#define PKSUBCREDENTIALPROVISIONINGACCEPTREMOTEDEVICEINVITATIONCONFIGURATION_H



#import "PKSubcredentialProvisioningConfiguration.h"
#import "PKAppletSubcredentialSharingInvitation.h"
#import "PKPaymentWebService.h"

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration

@property (readonly, nonatomic) BOOL canRequestInvitation; // ivar: _canRequestInvitation
@property (readonly, nonatomic) BOOL declineRelatedInvitations; // ivar: _declineRelatedInvitations
@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitation *invitation; // ivar: _invitation
@property (readonly, nonatomic) PKPaymentWebService *localDeviceWebService; // ivar: _localDeviceWebService
@property (readonly, nonatomic) PKPaymentWebService *remoteDeviceWebService; // ivar: _remoteDeviceWebService


-(NSInteger)startingState;
-(id)description;
-(id)initWithInvitation:(id)arg0 canRequestInvitation:(BOOL)arg1 declineRelatedInvitations:(BOOL)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 ;
-(id)initWithInvitation:(id)arg0 canRequestInvitation:(BOOL)arg1 declineRelatedInvitations:(BOOL)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 configurationType:(NSInteger)arg5 ;
-(id)transitionTable;


@end


#endif