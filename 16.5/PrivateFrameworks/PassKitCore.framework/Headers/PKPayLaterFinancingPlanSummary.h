// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANSUMMARY_H
#define PKPAYLATERFINANCINGPLANSUMMARY_H

@class NSDecimalNumber, NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPayLaterFinancingPlanSummary : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDecimalNumber *apr; // ivar: _apr
@property (copy, nonatomic) NSDate *cancellationDate; // ivar: _cancellationDate
@property (copy, nonatomic) PKCurrencyAmount *currentBalance; // ivar: _currentBalance
@property (nonatomic) NSInteger daysPastDue; // ivar: _daysPastDue
@property (copy, nonatomic) NSDate *endInstallmentDate; // ivar: _endInstallmentDate
@property (nonatomic) BOOL hasAPR; // ivar: _hasAPR
@property (copy, nonatomic) PKCurrencyAmount *installmentAmount; // ivar: _installmentAmount
@property (nonatomic) NSUInteger installmentCount; // ivar: _installmentCount
@property (copy, nonatomic) PKCurrencyAmount *interestPaidToDate; // ivar: _interestPaidToDate
@property (copy, nonatomic) NSDate *nextInstallmentDueDate; // ivar: _nextInstallmentDueDate
@property (copy, nonatomic) NSString *panSuffix; // ivar: _panSuffix
@property (copy, nonatomic) PKCurrencyAmount *pastDueAmount; // ivar: _pastDueAmount
@property (copy, nonatomic) PKCurrencyAmount *paymentAmountToDate; // ivar: _paymentAmountToDate
@property (copy, nonatomic) PKCurrencyAmount *payoffAmount; // ivar: _payoffAmount
@property (copy, nonatomic) PKCurrencyAmount *principalPaidToDate; // ivar: _principalPaidToDate
@property (readonly, nonatomic) CGFloat progress;
@property (copy, nonatomic) NSDate *startInstallmentDate; // ivar: _startInstallmentDate
@property (copy, nonatomic) PKCurrencyAmount *totalAmount; // ivar: _totalAmount
@property (copy, nonatomic) PKCurrencyAmount *totalInterest; // ivar: _totalInterest
@property (copy, nonatomic) PKCurrencyAmount *totalPrincipal; // ivar: _totalPrincipal
@property (copy, nonatomic) NSDate *transactionDate; // ivar: _transactionDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPayLaterFinancingPlanSummary:(id)arg0 ;
-(BOOL)isNextInstallmentPastDue;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif