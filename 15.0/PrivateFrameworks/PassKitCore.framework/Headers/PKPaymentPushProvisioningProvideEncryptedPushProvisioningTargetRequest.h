// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPUSHPROVISIONINGPROVIDEENCRYPTEDPUSHPROVISIONINGTARGETREQUEST_H
#define PKPAYMENTPUSHPROVISIONINGPROVIDEENCRYPTEDPUSHPROVISIONINGTARGETREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKEncryptedPushProvisioningTarget.h"

@interface PKPaymentPushProvisioningProvideEncryptedPushProvisioningTargetRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) PKEncryptedPushProvisioningTarget *encryptedPushProvisioningTarget; // ivar: _encryptedPushProvisioningTarget
@property (copy, nonatomic) NSString *sharingInstanceIdentifier; // ivar: _sharingInstanceIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithEncryptedPushProvisioningTarget:(id)arg0 sharingInstanceIdentifier:(id)arg1 ;
-(id)requestBody;


@end


#endif