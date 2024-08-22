// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCREDITACCOUNTSTATEMENT_H
#define PKCREDITACCOUNTSTATEMENT_H

@class NSString, NSDecimalNumber, NSDate;
@protocol NSSecureCoding, PKRecordObject, NSCopying;

#import <Foundation/Foundation.h>


@interface PKCreditAccountStatement : NSObject <NSSecureCoding, PKRecordObject, NSCopying>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSDecimalNumber *balanceTransfers; // ivar: _balanceTransfers
@property (copy, nonatomic) NSDate *closingDate; // ivar: _closingDate
@property (copy, nonatomic) NSDecimalNumber *credits; // ivar: _credits
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDecimalNumber *feesCharged; // ivar: _feesCharged
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDecimalNumber *interestCharged; // ivar: _interestCharged
@property (copy, nonatomic) NSDecimalNumber *minimumDue; // ivar: _minimumDue
@property (readonly, nonatomic) NSUInteger monthNumber;
@property (copy, nonatomic) NSDate *openingDate; // ivar: _openingDate
@property (copy, nonatomic) NSDate *paymentDueDate; // ivar: _paymentDueDate
@property (copy, nonatomic) NSDecimalNumber *payments; // ivar: _payments
@property (copy, nonatomic) NSDecimalNumber *paymentsAndCredits; // ivar: _paymentsAndCredits
@property (copy, nonatomic) NSDecimalNumber *purchases; // ivar: _purchases
@property (copy, nonatomic) NSDecimalNumber *rewardsBalance; // ivar: _rewardsBalance
@property (copy, nonatomic) NSDecimalNumber *rewardsEarned; // ivar: _rewardsEarned
@property (copy, nonatomic) NSDecimalNumber *rewardsLifetime; // ivar: _rewardsLifetime
@property (copy, nonatomic) NSDecimalNumber *rewardsRedeemed; // ivar: _rewardsRedeemed
@property (copy, nonatomic) NSDecimalNumber *rewardsYTD; // ivar: _rewardsYTD
@property (copy, nonatomic) NSDecimalNumber *statementBalance; // ivar: _statementBalance
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDecimalNumber *totalBalance; // ivar: _totalBalance


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif