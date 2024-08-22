// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16NEWSSUBSCRIPTION12OFFERMANAGER_H
#define _TTC16NEWSSUBSCRIPTION12OFFERMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC16NewsSubscription12OfferManager : NSObject {
    ? clientIdentifier;
    ? clientVersion;
    ? serviceType;
    ? cachedBestOffers;
    ? cachedServicesBundleOffers;
    ? cachedNewsPlusOffers;
    ? lastSeenBestOffers;
    ? configurationManager;
    ? processQueue;
    ? observers;
    ? lastSessionEndTime;
    ? offersResetTimeInterval;
    ? bundleSubscriptionManager;
    ? deduper;
    ? dedeuperToken;
}




-(id)init;


@end


#endif