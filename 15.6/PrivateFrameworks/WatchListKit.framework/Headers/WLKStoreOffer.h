// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKSTOREOFFER_H
#define WLKSTOREOFFER_H

@class NSString, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>

#import "WLKStoreOfferPeriod.h"

@interface WLKStoreOffer : NSObject

@property (readonly, nonatomic) NSString *buyParameters; // ivar: _buyParameters
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSString *formattedPrice; // ivar: _formattedPrice
@property (readonly, nonatomic) WLKStoreOfferPeriod *freeTrialPeriod; // ivar: _freeTrialPeriod
@property (readonly, nonatomic) WLKStoreOfferPeriod *introOfferPeriod; // ivar: _introOfferPeriod
@property (readonly, nonatomic) NSUInteger offerType; // ivar: _offerType
@property (readonly, nonatomic) NSNumber *price; // ivar: _price
@property (readonly, nonatomic) WLKStoreOfferPeriod *renewalPeriod; // ivar: _renewalPeriod
@property (readonly, nonatomic) NSUInteger subscriptionType; // ivar: _subscriptionType
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)offersWithMAPIDictionaries:(id)arg0 ;
+(id)offersWithSubscriptionDictionaries:(id)arg0 ;
-(BOOL)specialOfferEligible;
-(id)initWithMAPIDictionary:(id)arg0 ;
-(id)initWithSubscriptionDictionary:(id)arg0 ;
-(id)sui_buttonSubtitleWithServiceName:(id)arg0 ;
-(id)sui_buttonTitle;


@end


#endif