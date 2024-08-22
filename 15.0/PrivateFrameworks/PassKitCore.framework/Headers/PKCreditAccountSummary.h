// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDITACCOUNTSUMMARY_H
#define PKCREDITACCOUNTSUMMARY_H

@class NSSet, NSDecimalNumber, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCreditAccountBalanceSummary.h"
#import "PKCreditAccountStatement.h"
#import "PKCreditAccountMergeSummary.h"

@interface PKCreditAccountSummary : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSSet *accountUserActivity; // ivar: _accountUserActivity
@property (copy, nonatomic) NSDecimalNumber *adjustedBalance; // ivar: _adjustedBalance
@property (nonatomic) BOOL autoPayEnabled; // ivar: _autoPayEnabled
@property (copy, nonatomic) NSDecimalNumber *availableCredit; // ivar: _availableCredit
@property (nonatomic) NSUInteger balanceStatus; // ivar: _balanceStatus
@property (retain, nonatomic) PKCreditAccountBalanceSummary *balanceSummary; // ivar: _balanceSummary
@property (copy, nonatomic) NSDecimalNumber *chargeOffPreventionAmount; // ivar: _chargeOffPreventionAmount
@property (copy, nonatomic) NSDecimalNumber *creditLimit; // ivar: _creditLimit
@property (copy, nonatomic) NSDecimalNumber *currentBalance; // ivar: _currentBalance
@property (retain, nonatomic) PKCreditAccountStatement *currentStatement; // ivar: _currentStatement
@property (nonatomic) NSInteger cyclesPastDue; // ivar: _cyclesPastDue
@property (nonatomic) BOOL inGrace; // ivar: _inGrace
@property (copy, nonatomic) NSDecimalNumber *installmentBalance; // ivar: _installmentBalance
@property (copy, nonatomic) NSDate *lastPaymentDate; // ivar: _lastPaymentDate
@property (retain, nonatomic) PKCreditAccountMergeSummary *mergeSummary; // ivar: _mergeSummary
@property (copy, nonatomic) NSDecimalNumber *pastDueAmount; // ivar: _pastDueAmount
@property (copy, nonatomic) NSDate *paymentDueDate; // ivar: _paymentDueDate
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPayment; // ivar: _remainingMinimumPayment
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPaymentExcludedFromInterestCalculation; // ivar: _remainingMinimumPaymentExcludedFromInterestCalculation
@property (copy, nonatomic) NSDecimalNumber *remainingStatementBalance; // ivar: _remainingStatementBalance
@property (copy, nonatomic) NSDecimalNumber *remainingStatementBalanceForInterestCalculation; // ivar: _remainingStatementBalanceForInterestCalculation
@property (nonatomic) BOOL requiresDebtCollectionNotices; // ivar: _requiresDebtCollectionNotices
@property (copy, nonatomic) NSDecimalNumber *rewardsBalance; // ivar: _rewardsBalance
@property (copy, nonatomic) NSDecimalNumber *unpostedInterest; // ivar: _unpostedInterest
@property (copy, nonatomic) NSDate *unpostedInterestTimestamp; // ivar: _unpostedInterestTimestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)accountUserActivityForAccountUserAltDSID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ingestExtendedAccountDetails:(id)arg0 ;


@end


#endif