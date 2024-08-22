// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTDELETEREQUEST_H
#define PKPAYMENTDELETEREQUEST_H



#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPass.h"

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg0 ;


@end


#endif