// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPROVISIONINGNONCEREQUEST_H
#define PKPAYMENTPROVISIONINGNONCEREQUEST_H



#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentProvisioningNonceRequest : PKPaymentWebServiceRequest

@property (nonatomic) NSUInteger nonceType; // ivar: _nonceType


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithNonceType:(NSUInteger)arg0 ;


@end


#endif