// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPURCHASE_H
#define FCPURCHASE_H

@class NSNumber, NSString, SKMutablePayment;

#import <Foundation/Foundation.h>

#import "FCIntroductoryOffer.h"

@interface FCPurchase : NSObject

@property (readonly, nonatomic) NSNumber *appAdamID; // ivar: _appAdamID
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic, getter=isFreeTrialEligible) BOOL freeTrialEligible;
@property (readonly, nonatomic) FCIntroductoryOffer *introductoryOffer; // ivar: _introductoryOffer
@property (readonly, nonatomic) NSString *offerName; // ivar: _offerName
@property (readonly, nonatomic) SKMutablePayment *payment; // ivar: _payment
@property (readonly, nonatomic) NSNumber *price; // ivar: _price
@property (readonly, nonatomic) NSString *purchaseID; // ivar: _purchaseID
@property (readonly, nonatomic) NSNumber *storeExternalVersion; // ivar: _storeExternalVersion
@property (readonly, nonatomic) NSString *subscriptionPeriodInISO_8601; // ivar: _subscriptionPeriodInISO_8601
@property (readonly, nonatomic) NSString *subscriptionPriceFormatted; // ivar: _subscriptionPriceFormatted


-(id)initWithPurchaseID:(id)arg0 appAdamID:(id)arg1 subscriptionPriceFormatted:(id)arg2 subscriptionPeriodInISO_8601:(id)arg3 offerName:(id)arg4 storeExternalVersion:(id)arg5 bundleID:(id)arg6 price:(id)arg7 introOffer:(id)arg8 payment:(id)arg9 ;


@end


#endif