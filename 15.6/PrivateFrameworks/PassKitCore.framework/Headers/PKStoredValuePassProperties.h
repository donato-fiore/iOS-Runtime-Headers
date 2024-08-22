// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTOREDVALUEPASSPROPERTIES_H
#define PKSTOREDVALUEPASSPROPERTIES_H

@class NSString, NSDecimalNumber, NSArray, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKStoredValuePassProperties : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *appletFormat; // ivar: _appletFormat
@property (readonly, copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) PKCurrencyAmount *balanceAmount; // ivar: _balanceAmount
@property (copy, nonatomic) NSArray *balances; // ivar: _balances
@property (readonly, nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property (nonatomic, getter=isBlocked) BOOL blocked; // ivar: _blocked
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSDecimalNumber *decimalTransitBalance; // ivar: _decimalTransitBalance
@property (readonly, nonatomic) NSString *displayableBalance;
@property (readonly, nonatomic) NSString *displayableTransitBalance;
@property (copy, nonatomic) NSArray *enrouteTransitTypes; // ivar: _enrouteTransitTypes
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic, getter=isInStation) BOOL inStation; // ivar: _inStation
@property (readonly, nonatomic) BOOL isEnRoute;


+(BOOL)supportsSecureCoding;
+(Class)equalityClass;
+(id)passPropertiesForPass:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)balanceWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decimalBalance;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransitAppletState:(id)arg0 paymentApplication:(id)arg1 fieldCollection:(id)arg2 ;
-(id)primaryCashBalance;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif