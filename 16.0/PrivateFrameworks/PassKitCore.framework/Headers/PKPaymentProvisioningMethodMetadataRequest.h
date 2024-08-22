// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPROVISIONINGMETHODMETADATAREQUEST_H
#define PKPAYMENTPROVISIONINGMETHODMETADATAREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentProvisioningMethodMetadataRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (copy, nonatomic) NSString *provisioningMethod; // ivar: _provisioningMethod


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithProductIdentifier:(id)arg0 provisioningMethod:(id)arg1 ;


@end


#endif