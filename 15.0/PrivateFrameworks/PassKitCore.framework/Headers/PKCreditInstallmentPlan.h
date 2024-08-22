// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDITINSTALLMENTPLAN_H
#define PKCREDITINSTALLMENTPLAN_H

@class NSString, NSDecimalNumber, NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKInstallmentPlanMerchant.h"
#import "PKCreditInstallmentPlanPayment.h"
#import "PKCreditInstallmentPlanProduct.h"
#import "PKPaymentTransactionRewards.h"
#import "PKInstallmentPlanSummary.h"

@interface PKCreditInstallmentPlan : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accountUserAltDSID; // ivar: _accountUserAltDSID
@property (retain, nonatomic) NSDecimalNumber *apr; // ivar: _apr
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSArray *lineItems; // ivar: _lineItems
@property (retain, nonatomic) PKInstallmentPlanMerchant *merchant; // ivar: _merchant
@property (readonly, nonatomic) PKCreditInstallmentPlanPayment *nextPaymentDue;
@property (copy, nonatomic) NSArray *payments; // ivar: _payments
@property (nonatomic) NSInteger periodType; // ivar: _periodType
@property (retain, nonatomic) PKCreditInstallmentPlanProduct *product; // ivar: _product
@property (readonly, nonatomic) NSDecimalNumber *remainingAmount;
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards; // ivar: _rewards
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) PKInstallmentPlanSummary *summary; // ivar: _summary
@property (retain, nonatomic) NSDecimalNumber *totalAmount; // ivar: _totalAmount
@property (readonly, nonatomic) NSDecimalNumber *totalBilled;
@property (retain, nonatomic) NSDecimalNumber *totalInterestAmount; // ivar: _totalInterestAmount
@property (retain, nonatomic) NSDecimalNumber *totalProductAmount; // ivar: _totalProductAmount
@property (copy, nonatomic) NSString *transactionReferenceIdentifier; // ivar: _transactionReferenceIdentifier
@property (nonatomic) BOOL userViewedIntroduction; // ivar: _userViewedIntroduction


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInstallmentPlan:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif