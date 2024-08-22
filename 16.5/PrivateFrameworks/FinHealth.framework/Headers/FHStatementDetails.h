// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FHSTATEMENTDETAILS_H
#define FHSTATEMENTDETAILS_H

@class NSDate, NSDecimalNumber, NSString;

#import <Foundation/Foundation.h>


@interface FHStatementDetails : NSObject

@property (retain, nonatomic) NSDate *closingDate; // ivar: _closingDate
@property (retain, nonatomic) NSDecimalNumber *combinedBalance; // ivar: _combinedBalance
@property (retain, nonatomic) NSDecimalNumber *creditLimit; // ivar: _creditLimit
@property (retain, nonatomic) NSDecimalNumber *currentBalance; // ivar: _currentBalance
@property (retain, nonatomic) NSDecimalNumber *currentBalanceForMonthZero; // ivar: _currentBalanceForMonthZero
@property (retain, nonatomic) NSString *currentStatementIdentifier; // ivar: _currentStatementIdentifier
@property (nonatomic) BOOL isMonthOfMerge; // ivar: _isMonthOfMerge
@property (nonatomic) BOOL isMonthOne; // ivar: _isMonthOne
@property (nonatomic) BOOL isMonthZero; // ivar: _isMonthZero
@property (retain, nonatomic) NSDecimalNumber *minimumDue; // ivar: _minimumDue
@property (retain, nonatomic) NSDate *openingDate; // ivar: _openingDate
@property (retain, nonatomic) NSDecimalNumber *remainingMinimumPayment; // ivar: _remainingMinimumPayment
@property (retain, nonatomic) NSDecimalNumber *remainingStatementBalance; // ivar: _remainingStatementBalance
@property (retain, nonatomic) NSDecimalNumber *statementBalance; // ivar: _statementBalance
@property (retain, nonatomic) NSString *statementIdentifier; // ivar: _statementIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif