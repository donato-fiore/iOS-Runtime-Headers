// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPUSHPROVISIONINGSHARINGSTATUSREQUEST_H
#define PKPAYMENTPUSHPROVISIONINGSHARINGSTATUSREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKEncryptedPushProvisioningTarget.h"

@interface PKPaymentPushProvisioningSharingStatusRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *cardConfigurationIdentifer; // ivar: _cardConfigurationIdentifer
@property (retain, nonatomic) PKEncryptedPushProvisioningTarget *encryptedProvisioningTarget; // ivar: _encryptedProvisioningTarget
@property (copy, nonatomic) NSString *sharingIdentifier; // ivar: _sharingIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithEncryptedProvisioningTarget:(id)arg0 ;
-(id)initWithProvisioningSharingIdentifier:(id)arg0 cardCardConfigurationIdentifer:(id)arg1 ;
-(id)requestBody;


@end


#endif