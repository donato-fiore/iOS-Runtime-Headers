// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQMLBIOMEPUBLISHER_H
#define ICQMLBIOMEPUBLISHER_H


#import <Foundation/Foundation.h>


@interface ICQMLBiomePublisher : NSObject



+(id)_createEventWithMlServerScore:(id)arg0 totalQuota:(id)arg1 totalUsed:(id)arg2 totalAvailable:(id)arg3 bundleQuotaInBytes:(id)arg4 commerceQuotaInBytes:(id)arg5 iCloudSubscriptionEventType:(int)arg6 displayEntry:(int)arg7 ;
+(id)_createEventWithQuotaInfoFrom:(id)arg0 withType:(int)arg1 ;
+(void)_publishEvent:(id)arg0 ;
+(void)publishEventWithFetchOffersResponse:(id)arg0 ;
+(void)publishEventWithPushNotification:(id)arg0 ;
+(void)publishEventWithRefreshOfferDetailsResponse:(id)arg0 ;
+(void)publishOfferBuyActionEvent;
+(void)publishOfferDisplayActionEvent;
+(void)publishOfferDisplayActionEventWithBundleId:(id)arg0 ;


@end


#endif