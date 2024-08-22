// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTPAYMENTFUNDINGDETAILSBANKACCOUNT_H
#define PKACCOUNTPAYMENTFUNDINGDETAILSBANKACCOUNT_H

@class NSString;
@protocol NSSecureCoding;


#import "PKAccountPaymentFundingDetails.h"

@interface PKAccountPaymentFundingDetailsBankAccount : PKAccountPaymentFundingDetails <NSSecureCoding>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *routingNumber; // ivar: _routingNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fundingDetailsUnencryptedDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif