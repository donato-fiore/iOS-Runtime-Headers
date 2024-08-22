// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES26SUBSCRIPTIONSTATUSPROVIDER_H
#define _TTC12NEWSARTICLES26SUBSCRIPTIONSTATUSPROVIDER_H


#import <Foundation/Foundation.h>


@interface _TtC12NewsArticles26SubscriptionStatusProvider : NSObject {
    ? headline;
    ? paidAccessChecker;
    ? bundleSubscriptionManager;
    ? bundlePurchasePrewarmer;
    ? observers;
}


@property (nonatomic) NSInteger bundleSubscriptionStatus; // ivar: bundleSubscriptionStatus
@property (nonatomic) NSInteger channelSubscriptionStatus; // ivar: channelSubscriptionStatus


-(id)init;
-(void)purchaseListChangedWithNotification:(id)arg0 ;


@end


#endif