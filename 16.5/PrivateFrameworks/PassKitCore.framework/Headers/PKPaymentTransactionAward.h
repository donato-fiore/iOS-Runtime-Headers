// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONAWARD_H
#define PKPAYMENTTRANSACTIONAWARD_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKTransactionAmount.h"

@interface PKPaymentTransactionAward : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) PKTransactionAmount *amount; // ivar: _amount
@property (copy, nonatomic) NSString *awardDescription; // ivar: _awardDescription
@property (nonatomic) BOOL claimExpired; // ivar: _claimExpired
@property (copy, nonatomic) NSDate *claimExpiryDate; // ivar: _claimExpiryDate
@property (nonatomic) BOOL hasDeepLink; // ivar: _hasDeepLink
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *localizedAmount; // ivar: _localizedAmount
@property (nonatomic) NSInteger order; // ivar: _order
@property (nonatomic) BOOL redeemExpired; // ivar: _redeemExpired
@property (copy, nonatomic) NSDate *redeemExpiryDate; // ivar: _redeemExpiryDate
@property (copy, nonatomic) NSString *relevantAccountName; // ivar: _relevantAccountName
@property (copy, nonatomic) NSString *subtype; // ivar: _subtype
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *typeString; // ivar: _typeString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentTransactionAward:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)formattedStringValue;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif