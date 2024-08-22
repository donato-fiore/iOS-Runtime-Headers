// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERPAYMENT_H
#define PKPAYLATERPAYMENT_H

@class NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKPayLaterPaymentFundingSource.h"

@interface PKPayLaterPayment : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (copy, nonatomic) NSString *associatedTransactionPaymentHash; // ivar: _associatedTransactionPaymentHash
@property (retain, nonatomic) PKPayLaterPaymentFundingSource *fundingSource; // ivar: _fundingSource
@property (retain, nonatomic) PKCurrencyAmount *fundingSourceRefundAmount; // ivar: _fundingSourceRefundAmount
@property (retain, nonatomic) PKCurrencyAmount *interestPaid; // ivar: _interestPaid
@property (copy, nonatomic) NSString *paymentIdentifier; // ivar: _paymentIdentifier
@property (copy, nonatomic) NSDate *postedDate; // ivar: _postedDate
@property (retain, nonatomic) PKCurrencyAmount *principalPaid; // ivar: _principalPaid
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPayLaterPayment:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif