// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTDEPROVISIONREQUEST_H
#define PKPAYMENTDEPROVISIONREQUEST_H



#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPass.h"

@interface PKPaymentDeprovisionRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPaymentPass:(id)arg0 ;


@end


#endif