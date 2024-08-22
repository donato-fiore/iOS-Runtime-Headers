// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FHPAYMENTRINGDATA_H
#define FHPAYMENTRINGDATA_H

@class NSDecimalNumber, NSDate;

#import <Foundation/Foundation.h>


@interface FHPaymentRingData : NSObject

@property (nonatomic) NSUInteger paymentAmountCategory; // ivar: _paymentAmountCategory
@property (copy, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount
@property (copy, nonatomic) NSDate *transactionDate; // ivar: _transactionDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithTransactionDate:(id)arg0 transactionAmount:(id)arg1 paymentAmountCategory:(NSUInteger)arg2 ;


@end


#endif