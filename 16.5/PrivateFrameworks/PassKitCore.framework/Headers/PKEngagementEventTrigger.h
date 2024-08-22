// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKENGAGEMENTEVENTTRIGGER_H
#define PKENGAGEMENTEVENTTRIGGER_H


#import <Foundation/Foundation.h>


@interface PKEngagementEventTrigger : NSObject



+(BOOL)fireEngagementEventNamed:(id)arg0 ;
+(id)eventWithType:(id)arg0 ;
+(id)metrics;
+(void)fireAccountAddedEvent;
+(void)fireAccountRemovedEvent;
+(void)fireAccountUpdatedEvent;
+(void)fireApplePayContextChangedEvent;
+(void)fireCurrentLocaleChangedEvent;
+(void)fireDCINotificationForMarketAddedEvent;
+(void)fireDayChangedEvent;
+(void)fireExpressPassInfoChangedEvent;
+(void)fireFamilyCircleChangedEvent;
+(void)fireFeatureApplicationAddedEvent;
+(void)fireFeatureApplicationRemovedEvent;
+(void)fireFeatureApplicationUpdatedEvent;
+(void)fireLocationChangedEvent;
+(void)fireOpenLoopUpgradeNotificationForMarketAddedEvent;
+(void)firePassAddedEvent;
+(void)firePassRemovedEvent;
+(void)firePeerPaymentAccountUpdatedEvent;
+(void)fireRenotifyNotificationForMarketAddedEvent;
+(void)fireTransactionsUpdatedEvent;


@end


#endif