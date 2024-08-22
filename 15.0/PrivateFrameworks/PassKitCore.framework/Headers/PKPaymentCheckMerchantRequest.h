// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTCHECKMERCHANTREQUEST_H
#define PKPAYMENTCHECKMERCHANTREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentCheckMerchantRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *domainName; // ivar: _domainName
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 ;
-(id)initWithMerchantIdentifier:(id)arg0 domainName:(id)arg1 ;


@end


#endif