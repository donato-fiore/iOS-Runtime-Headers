// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMARKETINGITEMACTION_H
#define AMSMARKETINGITEMACTION_H

@class NSString, NSNumber, NSDictionary, NSArray, NSURL;

#import <Foundation/Foundation.h>

#import "AMSBuyParams.h"

@interface AMSMarketingItemAction : NSObject

@property (readonly, nonatomic) AMSBuyParams *buyParams;
@property (readonly, nonatomic) NSString *callToActionLabel;
@property (readonly, nonatomic) NSString *disclaimerText;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) BOOL isFamily;
@property (readonly, nonatomic) BOOL isRecommended;
@property (readonly, nonatomic) NSString *offerID;
@property (readonly, nonatomic) NSNumber *price;
@property (readonly, nonatomic) NSNumber *priceDiff;
@property (readonly, nonatomic) NSString *priceDiffForDisplay;
@property (readonly, nonatomic) NSString *priceForDisplay;
@property (retain, nonatomic) NSDictionary *rawValues; // ivar: _rawValues
@property (readonly, nonatomic) NSArray *serviceComponents;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *valuePropDetail;
@property (readonly, nonatomic) NSString *valuePropInfo;


-(BOOL)isYearly;
-(id)_serviceComponentsFromMap:(id)arg0 withNames:(id)arg1 ;
-(id)_serviceNames;
-(id)_servicesData;
-(id)description;
-(id)dismissLabel;
-(id)freeTrialPeriod;
-(id)inAppID;
-(id)initWithDictionary:(id)arg0 ;
-(id)introOfferPeriod;
-(id)introOfferPrice;
-(id)introOfferPriceForDisplay;
-(id)name;
-(id)recurringSubscriptionPeriod;


@end


#endif