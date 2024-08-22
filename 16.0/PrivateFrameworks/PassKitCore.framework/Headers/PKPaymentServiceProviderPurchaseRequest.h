// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSERVICEPROVIDERPURCHASEREQUEST_H
#define PKPAYMENTSERVICEPROVIDERPURCHASEREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *purchaseIdentifier; // ivar: _purchaseIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithPurchaseIdentifier:(id)arg0 ;


@end


#endif