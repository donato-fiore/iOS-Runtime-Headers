// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCOMPOUNDINTERESTCALCULATORCONFIGURATION_H
#define PKCOMPOUNDINTERESTCALCULATORCONFIGURATION_H

@class NSCalendar, NSDecimalNumber, NSArray, NSDate, NSTimeZone;

#import <Foundation/Foundation.h>


@interface PKCompoundInterestCalculatorConfiguration : NSObject {
    NSCalendar *_calendar;
}


@property (retain, nonatomic, setter=setAPR:) NSDecimalNumber *apr; // ivar: _apr
@property (nonatomic) NSUInteger calculationMethod; // ivar: _calculationMethod
@property (nonatomic) NSInteger compoundingPeriods; // ivar: _compoundingPeriods
@property (retain, nonatomic) NSDecimalNumber *currentBalance; // ivar: _currentBalance
@property (copy, nonatomic) NSArray *futurePayments; // ivar: _futurePayments
@property (nonatomic) BOOL inGrace; // ivar: _inGrace
@property (nonatomic) BOOL isInDisasterRecovery; // ivar: _isInDisasterRecovery
@property (retain, nonatomic) NSDate *periodEndDate; // ivar: _periodEndDate
@property (retain, nonatomic) NSDate *periodStartDate; // ivar: _periodStartDate
@property (retain, nonatomic) NSDecimalNumber *periodStartingBalance; // ivar: _periodStartingBalance
@property (copy, nonatomic) NSArray *periodTransactions; // ivar: _periodTransactions
@property (retain, nonatomic) NSTimeZone *productTimeZone; // ivar: _productTimeZone
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodMinimumPayment; // ivar: _remainingPeriodMinimumPayment
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodMinimumPaymentExcludedFromInterestCalculation; // ivar: _remainingPeriodMinimumPaymentExcludedFromInterestCalculation
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodStartingBalance; // ivar: _remainingPeriodStartingBalance
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodStartingBalanceForGracePurposes; // ivar: _remainingPeriodStartingBalanceForGracePurposes
@property (retain, nonatomic) NSDecimalNumber *unpostedInterest; // ivar: _unpostedInterest
@property (retain, nonatomic) NSDate *unpostedInterestTimestamp; // ivar: _unpostedInterestTimestamp


+(id)configurationWithCreditAccount:(id)arg0 ;
-(NSInteger)_daysInYearForDate:(id)arg0 withTimeZone:(id)arg1 ;
-(id)description;
-(id)init;
-(void)updateWithCreditAccount:(id)arg0 ;


@end


#endif