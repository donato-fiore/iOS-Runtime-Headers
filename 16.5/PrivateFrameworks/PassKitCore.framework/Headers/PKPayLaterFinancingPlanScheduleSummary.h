// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANSCHEDULESUMMARY_H
#define PKPAYLATERFINANCINGPLANSCHEDULESUMMARY_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanScheduleSummary : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *installments; // ivar: _installments
@property (copy, nonatomic) NSArray *payments; // ivar: _payments
@property (nonatomic) NSUInteger scheduleSummaryReason; // ivar: _scheduleSummaryReason


+(BOOL)supportsSecureCoding;
+(id)totalAmountForInstallments:(id)arg0 fallbackAmount:(id)arg1 ;
+(id)totalDueForInstallments:(id)arg0 fallbackAmount:(id)arg1 ;
+(id)totalPaidForInstallments:(id)arg0 fallbackAmount:(id)arg1 ;
-(BOOL)hasPaymentsOccurredAfterPayment:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPayLaterScheduleSummary:(id)arg0 ;
-(BOOL)paymentIdentifierDidPayoffFinancingPlan:(id)arg0 ;
-(NSInteger)countOfInstallmentsAffectedByPaymentIdentifier:(id)arg0 ;
-(NSInteger)installmentNumberForInstallmentIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currencyAmountOfPaymentIdentifierAffectingOtherInstallments:(id)arg0 relativeInstallmentIdentifier:(id)arg1 installmentsAreInOrder:(*BOOL)arg2 countOfInstallments:(*NSInteger)arg3 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)firstInstallmentIdentifierAffectedByPaymentIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)installmentsAffectedByPaymentIdentifier:(id)arg0 ;
-(id)lastPayment;
-(id)nextDueInstallment;
-(id)paymentsOfType:(NSUInteger)arg0 ;
-(id)paymentsWithIdentifier:(id)arg0 ;
-(id)relevantInstallmentsFromDueDateStart:(id)arg0 dueDateEnd:(id)arg1 statues:(id)arg2 ;
-(id)relevantInstallmentsFromPayoffDateStart:(id)arg0 payoffDateEnd:(id)arg1 statues:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif