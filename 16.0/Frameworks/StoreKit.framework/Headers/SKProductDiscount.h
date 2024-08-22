// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPRODUCTDISCOUNT_H
#define SKPRODUCTDISCOUNT_H

@class NSString, NSDecimalNumber, NSLocale;

#import <Foundation/Foundation.h>

#import "SKProductSubscriptionPeriod.h"

@interface SKProductDiscount : NSObject {
    id *_internal;
}


@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUInteger numberOfPeriods;
@property (readonly, nonatomic) NSUInteger paymentMode;
@property (readonly, nonatomic) NSDecimalNumber *price;
@property (readonly, nonatomic) NSLocale *priceLocale;
@property (readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
@property (readonly, nonatomic) NSUInteger type;


-(id)copyXPCEncoding;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif