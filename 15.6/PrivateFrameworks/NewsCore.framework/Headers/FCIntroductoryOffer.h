// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCINTRODUCTORYOFFER_H
#define FCINTRODUCTORYOFFER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCIntroductoryOffer : NSObject

@property (nonatomic) NSUInteger numOfPeriods; // ivar: _numOfPeriods
@property (nonatomic) int offerType; // ivar: _offerType
@property (copy, nonatomic) NSString *priceFormatted; // ivar: _priceFormatted
@property (copy, nonatomic) NSString *subscriptionPeriodInISO_8601; // ivar: _subscriptionPeriodInISO_8601


-(id)initWithOfferType:(int)arg0 priceFormatted:(id)arg1 recurringSubscriptionPeriod:(id)arg2 numOfPeriods:(NSUInteger)arg3 ;


@end


#endif