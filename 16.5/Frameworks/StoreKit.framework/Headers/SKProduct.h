// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPRODUCT_H
#define SKPRODUCT_H

@class NSString, NSArray, NSDecimalNumber, NSLocale;

#import <Foundation/Foundation.h>

#import "SKProductDiscount.h"
#import "SKProductSubscriptionPeriod.h"

@interface SKProduct : NSObject {
    id *_internal;
}


@property (copy, nonatomic, getter=_localeIdentifier, setter=_setLocaleIdentifier:) NSString *_localeIdentifier;
@property (readonly, nonatomic) NSArray *contentLengths;
@property (readonly, nonatomic) NSString *contentVersion;
@property (readonly, nonatomic) NSArray *discounts;
@property (readonly, nonatomic) NSArray *downloadContentLengths;
@property (readonly, nonatomic) NSString *downloadContentVersion;
@property (readonly, nonatomic) BOOL downloadable;
@property (readonly, nonatomic) SKProductDiscount *introductoryPrice;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL isFamilyShareable;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSDecimalNumber *price;
@property (readonly, nonatomic) NSLocale *priceLocale;
@property (readonly, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) NSString *subscriptionGroupIdentifier;
@property (readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;


+(id)productsFromDictionaries:(id)arg0 ;
+(id)productsFromXPCEncodingsArray:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initMinusLocaleWithDictionary:(id)arg0 ;
-(id)initMinusLocaleWithXPCEncoding:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_logMissingLocale;
-(void)_setFamilyShareable:(BOOL)arg0 ;


@end


#endif