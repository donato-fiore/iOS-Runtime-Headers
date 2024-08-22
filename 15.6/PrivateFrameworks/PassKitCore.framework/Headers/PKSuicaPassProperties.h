// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUICAPASSPROPERTIES_H
#define PKSUICAPASSPROPERTIES_H

@class NSDecimalNumber, NSString;


#import "PKTransitPassProperties.h"

@interface PKSuicaPassProperties : PKTransitPassProperties

@property (readonly, nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute; // ivar: _balanceAllowedForCommute
@property (readonly, nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property (readonly, nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed; // ivar: _greenCarTicketUsed
@property (readonly, nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation;
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;
@property (readonly, nonatomic, getter=isLowBalanceGateNotificationEnabled) BOOL lowBalanceGateNotificationEnabled; // ivar: _lowBalanceGateNotificationEnabled
@property (readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
@property (readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;


+(Class)equalityClass;
+(id)passPropertiesForPass:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithProperties:(id)arg0 ;


@end


#endif