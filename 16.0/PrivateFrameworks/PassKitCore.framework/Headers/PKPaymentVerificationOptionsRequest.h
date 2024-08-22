// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTVERIFICATIONOPTIONSREQUEST_H
#define PKPAYMENTVERIFICATIONOPTIONSREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPass.h"

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (copy, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier


+(id)requestWithPass:(id)arg0 ;
-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;


@end


#endif