// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSPENDINGSUMMARY_H
#define PKSPENDINGSUMMARY_H

@class NSDate, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentTransactionGroup.h"
#import "PKCurrencyAmount.h"

@interface PKSpendingSummary : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKPaymentTransactionGroup *adjustments; // ivar: _adjustments
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) PKPaymentTransactionGroup *interest; // ivar: _interest
@property (nonatomic) BOOL isLoading; // ivar: _isLoading
@property (copy, nonatomic) NSArray *orderedSpendingCategories; // ivar: _orderedSpendingCategories
@property (copy, nonatomic) NSArray *orderedSpendingPerMerchants; // ivar: _orderedSpendingPerMerchants
@property (retain, nonatomic) PKPaymentTransactionGroup *payments; // ivar: _payments
@property (retain, nonatomic) PKCurrencyAmount *previousMaxAmount; // ivar: _previousMaxAmount
@property (retain, nonatomic) PKCurrencyAmount *previousTotalSpending; // ivar: _previousTotalSpending
@property (retain, nonatomic) PKPaymentTransactionGroup *refunds; // ivar: _refunds
@property (retain, nonatomic) PKPaymentTransactionGroup *rewards; // ivar: _rewards
@property (copy, nonatomic) NSDictionary *spendingsPerAltDSID; // ivar: _spendingsPerAltDSID
@property (retain, nonatomic) NSArray *spendingsPerCalendarUnit; // ivar: _spendingsPerCalendarUnit
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSUInteger summaryType; // ivar: _summaryType
@property (nonatomic) NSUInteger summaryUnit; // ivar: _summaryUnit
@property (retain, nonatomic) PKCurrencyAmount *totalSpending; // ivar: _totalSpending


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif