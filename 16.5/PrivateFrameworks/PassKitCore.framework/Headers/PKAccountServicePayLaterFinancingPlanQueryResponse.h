// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSERVICEPAYLATERFINANCINGPLANQUERYRESPONSE_H
#define PKACCOUNTSERVICEPAYLATERFINANCINGPLANQUERYRESPONSE_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKAccountServicePayLaterFinancingPlanQueryInstallments.h"

@interface PKAccountServicePayLaterFinancingPlanQueryResponse : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *activeFinancingPlans; // ivar: _activeFinancingPlans
@property (copy, nonatomic) NSArray *completedFinancingPlans; // ivar: _completedFinancingPlans
@property (retain, nonatomic) PKCurrencyAmount *dueNext30Days; // ivar: _dueNext30Days
@property (nonatomic) NSInteger financingPlanCount; // ivar: _financingPlanCount
@property (copy, nonatomic) NSArray *relevantFinancingPlans; // ivar: _relevantFinancingPlans
@property (retain, nonatomic) PKCurrencyAmount *totalPendingAmount; // ivar: _totalPendingAmount
@property (retain, nonatomic) PKAccountServicePayLaterFinancingPlanQueryInstallments *upcomingInstallments; // ivar: _upcomingInstallments


+(BOOL)supportsSecureCoding;
+(id)_financingPlanIdentifierFromList:(id)arg0 ;
-(BOOL)_isEqualToFinancingPlanQueryResponse:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif