// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCOMPOUNDINTERESTCALCULATOR_H
#define PKCOMPOUNDINTERESTCALCULATOR_H

@class NSCalendar, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PKCompoundInterestCalculatorConfiguration.h"

@interface PKCompoundInterestCalculator : NSObject {
    NSCalendar *_calendar;
    NSMutableDictionary *_toDateCache;
}


@property (readonly, nonatomic) PKCompoundInterestCalculatorConfiguration *configuration; // ivar: _configuration


-(BOOL)_date:(id)arg0 isApplicableForProcessingDate:(id)arg1 ;
-(BOOL)_interestCanBeCalculated;
-(id)_additionalBalanceForProcessingDate:(id)arg0 ;
-(id)_creditsForProcessingDate:(id)arg0 ;
-(id)_rawCompoundInterestForPaymentOfAmount:(id)arg0 onDate:(id)arg1 includeNewBalance:(BOOL)arg2 ;
-(id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)arg0 onDate:(id)arg1 includeNewPurchases:(BOOL)arg2 ;
-(id)compoundInterest;
-(id)compoundInterestForPaymentOfAmount:(id)arg0 onDate:(id)arg1 ;
-(id)compoundInterestWithPaymentOfAmount:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif