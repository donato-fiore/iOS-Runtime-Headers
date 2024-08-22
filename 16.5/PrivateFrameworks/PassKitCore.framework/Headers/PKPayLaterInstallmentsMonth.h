// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERINSTALLMENTSMONTH_H
#define PKPAYLATERINSTALLMENTSMONTH_H

@class NSArray, NSDictionary, NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPayLaterInstallmentsMonth : NSObject {
    PKCurrencyAmount *_totalDue;
    PKCurrencyAmount *_totalPaid;
    PKCurrencyAmount *_fallbackAmount;
    NSArray *_allInstallments;
    NSDictionary *_financingPlanByInstallmentIdentifier;
    NSMutableDictionary *_installmentsByDate;
}


@property (readonly, copy, nonatomic) NSArray *activeInstallments; // ivar: _activeInstallments
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSArray *financingPlans; // ivar: _financingPlans
@property (readonly, copy, nonatomic) NSArray *paidInstallments; // ivar: _paidInstallments
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)description;
-(id)financingPlanForInstallmentIdentifier:(id)arg0 ;
-(id)initWithFinancingPlans:(id)arg0 fallbackAmount:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)installmentsDueInDate:(id)arg0 ;
-(id)totalDue;
-(id)totalPaid;
-(void)_updateValues;


@end


#endif