// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALPROVISIONINGREMOTEDEVICESHARINGCONFIGURATION_H
#define PKSUBCREDENTIALPROVISIONINGREMOTEDEVICESHARINGCONFIGURATION_H

@protocol PKSubcredentialProvisioningUserAuthDelegate;


#import "PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration.h"
#import "PKAppletSubcredentialSharingRequest.h"
#import "PKAppletSubcredentialSharingSession.h"

@interface PKSubcredentialProvisioningRemoteDeviceSharingConfiguration : PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration

@property (readonly, nonatomic) PKAppletSubcredentialSharingRequest *sharingRequest; // ivar: _sharingRequest
@property (readonly, nonatomic) PKAppletSubcredentialSharingSession *sharingSession; // ivar: _sharingSession
@property (readonly, weak, nonatomic) NSObject<PKSubcredentialProvisioningUserAuthDelegate> *userAuthDelegate; // ivar: _userAuthDelegate


-(NSInteger)startingState;
-(id)description;
-(id)initWithSharingRequest:(id)arg0 sharingSession:(id)arg1 localDeviceWebService:(id)arg2 remoteDeviceWebService:(id)arg3 userAuthDelegate:(id)arg4 ;
-(id)transitionTable;


@end


#endif