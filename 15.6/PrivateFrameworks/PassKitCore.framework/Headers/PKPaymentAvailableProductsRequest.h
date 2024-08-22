// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAVAILABLEPRODUCTSREQUEST_H
#define PKPAYMENTAVAILABLEPRODUCTSREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest

@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy, nonatomic) NSString *preferredLanguage; // ivar: _preferredLanguage


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPreferredLanguage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif