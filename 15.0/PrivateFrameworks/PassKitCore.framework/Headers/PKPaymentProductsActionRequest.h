// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPRODUCTSACTIONREQUEST_H
#define PKPAYMENTPRODUCTSACTIONREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentProductsActionRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif