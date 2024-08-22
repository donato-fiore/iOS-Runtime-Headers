// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMUTABLEACCOUNTUSERPREFERENCES_H
#define PKMUTABLEACCOUNTUSERPREFERENCES_H

@class NSDecimalNumber;


#import "PKAccountUserPreferences.h"

@interface PKMutableAccountUserPreferences : PKAccountUserPreferences

@property (retain, nonatomic) NSDecimalNumber *monthlySpendLimitAmount;
@property (nonatomic) BOOL monthlySpendLimitEnabled;
@property (nonatomic) BOOL showAvailableCredit;
@property (nonatomic) BOOL spendingEnabled;
@property (retain, nonatomic) NSDecimalNumber *transactionSpendLimitAmount;
@property (nonatomic) BOOL transactionSpendLimitEnabled;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif