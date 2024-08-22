// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBALANCESUMMARY_H
#define PKBALANCESUMMARY_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "PKPaymentTransactionGroup.h"

@interface PKBalanceSummary : NSObject

@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) BOOL isLoading; // ivar: _isLoading
@property (retain, nonatomic) PKPaymentTransactionGroup *orderedCredits; // ivar: _orderedCredits
@property (retain, nonatomic) PKPaymentTransactionGroup *orderedInterestCharges; // ivar: _orderedInterestCharges
@property (retain, nonatomic) PKPaymentTransactionGroup *orderedSpendingTransactions; // ivar: _orderedSpendingTransactions
@property (retain, nonatomic) PKPaymentTransactionGroup *rewards; // ivar: _rewards
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSUInteger summaryType; // ivar: _summaryType




@end


#endif