// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCREDENTIALNONCEREQUEST_H
#define PKPAYMENTCREDENTIALNONCEREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKSecureElementPass.h"

@interface PKPaymentCredentialNonceRequest : PKPaymentWebServiceRequest

@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) PKSecureElementPass *paymentPass; // ivar: _paymentPass


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg0 deviceIdentifier:(id)arg1 ;


@end


#endif