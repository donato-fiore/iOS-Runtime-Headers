// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCREDITACCOUNTUSERACTIVITY_H
#define PKCREDITACCOUNTUSERACTIVITY_H

@class NSString, NSDecimalNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCreditAccountUserActivity : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accountUserAltDSID; // ivar: _accountUserAltDSID
@property (retain, nonatomic) NSDecimalNumber *adjustedPurchases; // ivar: _adjustedPurchases
@property (retain, nonatomic) NSDecimalNumber *pendingPurchases; // ivar: _pendingPurchases
@property (retain, nonatomic) NSDecimalNumber *purchases; // ivar: _purchases
@property (retain, nonatomic) NSDecimalNumber *rewardsBalance; // ivar: _rewardsBalance
@property (retain, nonatomic) NSDecimalNumber *rewardsEarned; // ivar: _rewardsEarned
@property (retain, nonatomic) NSDecimalNumber *rewardsRedeemed; // ivar: _rewardsRedeemed
@property (readonly, nonatomic) NSDecimalNumber *totalSpending;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCreditAccountUserActivity:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)remainingMonthlySpendWithLimit:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif