// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTRANSACTIONREQUEST_H
#define PKPAYMENTTRANSACTIONREQUEST_H

@class NSString, NSDate, NSArray, NSDecimalNumber, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKMerchant.h"

@interface PKPaymentTransactionRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (nonatomic) NSInteger amountComparison; // ivar: _amountComparison
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) NSInteger dateOrder; // ivar: _dateOrder
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (retain, nonatomic) PKMerchant *merchant; // ivar: _merchant
@property (nonatomic) NSInteger merchantCategory; // ivar: _merchantCategory
@property (retain, nonatomic) NSString *panIdentifier; // ivar: _panIdentifier
@property (nonatomic) NSInteger peerPaymentSubType; // ivar: _peerPaymentSubType
@property (retain, nonatomic) NSArray *regions; // ivar: _regions
@property (retain, nonatomic) NSDecimalNumber *rewardsValue; // ivar: _rewardsValue
@property (nonatomic) NSUInteger rewardsValueUnit; // ivar: _rewardsValueUnit
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSSet *tags; // ivar: _tags
@property (retain, nonatomic) NSSet *transactionSourceIdentifiers; // ivar: _transactionSourceIdentifiers
@property (retain, nonatomic) NSArray *transactionSources; // ivar: _transactionSources
@property (retain, nonatomic) NSArray *transactionStatuses; // ivar: _transactionStatuses
@property (retain, nonatomic) NSArray *transactionTypes; // ivar: _transactionTypes


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif