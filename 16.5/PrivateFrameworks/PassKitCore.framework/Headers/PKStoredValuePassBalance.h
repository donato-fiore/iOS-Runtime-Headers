// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSTOREDVALUEPASSBALANCE_H
#define PKSTOREDVALUEPASSBALANCE_H

@class NSDecimalNumber, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKStoredValuePassBalance : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, copy, nonatomic) NSString *balanceType; // ivar: _balanceType
@property (readonly, copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (copy) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isCurrencyBalance;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBalance:(id)arg0 ;
-(BOOL)isExpired;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrencyAmount:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 amount:(id)arg1 balanceType:(id)arg2 expiryDate:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 cashAmount:(id)arg1 currencyCode:(id)arg2 expiryDate:(id)arg3 ;
-(id)initWithTransitAppletBalance:(id)arg0 balanceField:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif