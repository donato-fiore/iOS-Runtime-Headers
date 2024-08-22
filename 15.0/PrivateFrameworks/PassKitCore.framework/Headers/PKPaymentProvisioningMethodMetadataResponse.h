// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPROVISIONINGMETHODMETADATARESPONSE_H
#define PKPAYMENTPROVISIONINGMETHODMETADATARESPONSE_H



#import "PKPaymentWebServiceResponse.h"
#import "PKPaymentProvisioningMethodMetadata.h"

@interface PKPaymentProvisioningMethodMetadataResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata; // ivar: _provisioningMethodMetadata


-(id)initWithData:(id)arg0 ;


@end


#endif