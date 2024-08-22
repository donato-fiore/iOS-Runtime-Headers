// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPRODUCTDISCOUNTINTERNAL_H
#define SKPRODUCTDISCOUNTINTERNAL_H

@class NSDecimalNumber, NSLocale, NSString;

#import <Foundation/Foundation.h>

#import "SKProductSubscriptionPeriod.h"

@interface SKProductDiscountInternal : NSObject {
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSUInteger _paymentMode;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    NSUInteger _numberOfPeriods;
    NSUInteger _type;
    NSString *_identifier;
}






@end


#endif