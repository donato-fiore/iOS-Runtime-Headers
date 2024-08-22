// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTREWARDS_H
#define PKACCOUNTREWARDS_H

@class NSString, NSSet;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKPaymentTransactionRewards.h"

@interface PKAccountRewards : NSObject <NSSecureCoding, PKRecordObject>



@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards; // ivar: _rewards
@property (copy, nonatomic) NSSet *rewardsAddedIdentifiers; // ivar: _rewardsAddedIdentifiers
@property (copy, nonatomic) NSString *status; // ivar: _status
@property (nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *transactionIdentifiers; // ivar: _transactionIdentifiers
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountEvent:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif