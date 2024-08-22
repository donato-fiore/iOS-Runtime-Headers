// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FHSTATEMENTDETAILS_H
#define FHSTATEMENTDETAILS_H

@class NSDecimalNumber, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FHStatementDetails : NSObject

@property (retain, nonatomic) NSDecimalNumber *creditLimit; // ivar: _creditLimit
@property (retain, nonatomic) NSDecimalNumber *currentBalance; // ivar: _currentBalance
@property (retain, nonatomic) NSString *currentStatementIdentifier; // ivar: _currentStatementIdentifier
@property (nonatomic) BOOL isMonthOne; // ivar: _isMonthOne
@property (nonatomic) BOOL isMonthZero; // ivar: _isMonthZero
@property (retain, nonatomic) NSDecimalNumber *minimumDue; // ivar: _minimumDue
@property (retain, nonatomic) NSDecimalNumber *remainingMinimumPayment; // ivar: _remainingMinimumPayment
@property (retain, nonatomic) NSDecimalNumber *remainingStatementBalance; // ivar: _remainingStatementBalance
@property (retain, nonatomic) NSDecimalNumber *statementBalance; // ivar: _statementBalance
@property (retain, nonatomic) NSString *statementIdentifier; // ivar: _statementIdentifier
@property (retain, nonatomic) NSArray *transactionPaymentDetails; // ivar: _transactionPaymentDetails
@property (retain, nonatomic) NSArray *transactionPurchasesDetails; // ivar: _transactionPurchasesDetails




@end


#endif