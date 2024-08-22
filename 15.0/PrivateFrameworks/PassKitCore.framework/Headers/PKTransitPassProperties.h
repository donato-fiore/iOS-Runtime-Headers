// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSITPASSPROPERTIES_H
#define PKTRANSITPASSPROPERTIES_H

@class NSDate, NSDecimalNumber, NSString;


#import "PKStoredValuePassProperties.h"
#import "PKFelicaPassProperties.h"

@interface PKTransitPassProperties : PKStoredValuePassProperties

@property (readonly, nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;
@property (readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
@property (readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;




@end


#endif