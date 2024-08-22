// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPURCHASELOOKUPRESULT_H
#define FCPURCHASELOOKUPRESULT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "FCIntroductoryOffer.h"

@interface FCPurchaseLookupResult : NSObject {
    NSString *_purchaseID;
    NSString *_offerName;
    NSString *_subscriptionPeriodInISO_8601;
    NSString *_subscriptionPriceFormatted;
    NSNumber *_price;
    NSNumber *_appAdamID;
    FCIntroductoryOffer *_introOffer;
}






@end


#endif