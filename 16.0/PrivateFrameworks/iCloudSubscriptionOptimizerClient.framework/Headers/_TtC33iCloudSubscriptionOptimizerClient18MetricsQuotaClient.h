// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERCLIENT18METRICSQUOTACLIENT_H
#define _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERCLIENT18METRICSQUOTACLIENT_H



#import "ISOQuotaClient.h"

@interface _TtC33iCloudSubscriptionOptimizerClient18MetricsQuotaClient : ISOQuotaClient {
    ? innerClient;
    ? clientLibEvents;
}




-(id)init;
-(id)parseDelayedOffer:(id)arg0 ;
-(id)parseDelayedOfferFromJson:(id)arg0 ;
-(id)parseNotification:(id)arg0 ;
-(void)clearNotificationState:(id)arg0 ;
-(void)isNotificationPending:(id)arg0 ;
-(void)newOffer:(id)arg0 andCallback:(id)arg1 ;


@end


#endif