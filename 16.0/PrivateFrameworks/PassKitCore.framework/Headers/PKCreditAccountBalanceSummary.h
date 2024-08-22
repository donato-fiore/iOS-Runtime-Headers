// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCREDITACCOUNTBALANCESUMMARY_H
#define PKCREDITACCOUNTBALANCESUMMARY_H

@class NSDecimalNumber, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCreditAccountBalanceSummary : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDecimalNumber *balanceTransfers; // ivar: _balanceTransfers
@property (copy, nonatomic) NSDate *closingDate; // ivar: _closingDate
@property (copy, nonatomic) NSDecimalNumber *credits; // ivar: _credits
@property (copy, nonatomic) NSDecimalNumber *feesCharged; // ivar: _feesCharged
@property (copy, nonatomic) NSDecimalNumber *interestCharged; // ivar: _interestCharged
@property (copy, nonatomic) NSDate *openingDate; // ivar: _openingDate
@property (copy, nonatomic) NSDecimalNumber *payments; // ivar: _payments
@property (copy, nonatomic) NSDecimalNumber *paymentsAndCredits; // ivar: _paymentsAndCredits
@property (copy, nonatomic) NSDecimalNumber *pendingPurchases; // ivar: _pendingPurchases
@property (copy, nonatomic) NSDecimalNumber *purchases; // ivar: _purchases
@property (copy, nonatomic) NSDecimalNumber *rewardsEarned; // ivar: _rewardsEarned
@property (copy, nonatomic) NSDecimalNumber *rewardsRedeemed; // ivar: _rewardsRedeemed


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif