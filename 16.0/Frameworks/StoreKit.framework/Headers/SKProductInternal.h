// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPRODUCTINTERNAL_H
#define SKPRODUCTINTERNAL_H

@class NSString, NSArray, NSDecimalNumber, NSLocale;

#import <Foundation/Foundation.h>

#import "SKProductDiscount.h"
#import "SKProductSubscriptionPeriod.h"

@interface SKProductInternal : NSObject {
    NSString *_contentVersion;
    BOOL _downloadable;
    BOOL _familyShareable;
    NSArray *_downloadContentLengths;
    SKProductDiscount *_introductoryPrice;
    NSString *_localeIdentifier;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSString *_productIdentifier;
    NSString *_subscriptionGroupIdentifier;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    NSArray *_discounts;
}






@end


#endif