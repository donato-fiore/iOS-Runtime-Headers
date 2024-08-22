// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALPAIRINGFLOWCONTROLLERCONTEXT_H
#define PKSUBCREDENTIALPAIRINGFLOWCONTROLLERCONTEXT_H

@class PKEntitlementWhitelist, PKAddCarKeyPassConfiguration, PKAppletSubcredential, PKPaymentProvisioningController, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingRequest;
@protocol NSCopying;


#import "PKSubcredentialProvisioningFlowControllerContext.h"

@interface PKSubcredentialPairingFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying>



@property (retain, nonatomic) PKEntitlementWhitelist *appEntitlementWhitelist; // ivar: _appEntitlementWhitelist
@property (retain, nonatomic) PKAddCarKeyPassConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) PKAppletSubcredential *credentialToShare; // ivar: _credentialToShare
@property (nonatomic) BOOL declineRelatedInvitations; // ivar: _declineRelatedInvitations
@property (nonatomic) BOOL passwordManuallyEntered; // ivar: _passwordManuallyEntered
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation; // ivar: _remoteDeviceInvitation
@property (retain, nonatomic) PKAppletSubcredentialSharingRequest *remoteDeviceSharingRequest; // ivar: _remoteDeviceSharingRequest
@property (nonatomic) BOOL shouldRequestInvitation; // ivar: _shouldRequestInvitation


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFlowType:(NSInteger)arg0 ;


@end


#endif