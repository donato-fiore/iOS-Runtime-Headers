// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMSUBSCRIPTIONINFO_H
#define EDAMSUBSCRIPTIONINFO_H

@class NSString, NSNumber, NSSet;


#import "FATObject.h"

@interface EDAMSubscriptionInfo : FATObject

@property (retain, nonatomic) NSString *currentSku; // ivar: _currentSku
@property (retain, nonatomic) NSNumber *currentTime; // ivar: _currentTime
@property (retain, nonatomic) NSNumber *currentlySubscribed; // ivar: _currentlySubscribed
@property (retain, nonatomic) NSNumber *itunesReceiptRequested; // ivar: _itunesReceiptRequested
@property (retain, nonatomic) NSSet *serviceLevelsEligibleForPurchase; // ivar: _serviceLevelsEligibleForPurchase
@property (retain, nonatomic) NSNumber *subscriptionCancellationPending; // ivar: _subscriptionCancellationPending
@property (retain, nonatomic) NSNumber *subscriptionExpirationDate; // ivar: _subscriptionExpirationDate
@property (retain, nonatomic) NSNumber *subscriptionPending; // ivar: _subscriptionPending
@property (retain, nonatomic) NSNumber *subscriptionRecurring; // ivar: _subscriptionRecurring
@property (retain, nonatomic) NSNumber *validUntil; // ivar: _validUntil


+(id)structFields;
+(id)structName;


@end


#endif