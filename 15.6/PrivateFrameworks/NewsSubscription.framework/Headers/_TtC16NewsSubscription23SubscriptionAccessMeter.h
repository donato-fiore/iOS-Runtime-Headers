// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16NEWSSUBSCRIPTION23SUBSCRIPTIONACCESSMETER_H
#define _TTC16NEWSSUBSCRIPTION23SUBSCRIPTIONACCESSMETER_H

@class SwiftObject;
@protocol NPSubscriptionAccessMeterType;



@interface _TtC16NewsSubscription23SubscriptionAccessMeter : SwiftObject <NPSubscriptionAccessMeterType>

 {
    ? userInfo;
    ? readingHistory;
    ? purchaseProvider;
    ? bundleSubscriptionManager;
    ? offeredBundlePurchaseIDs;
    ? aLaCarteSubscriptionMeteredCountMaxLimit;
    ? bundleSubscriptionMeteredCountMaxLimit;
}




-(BOOL)canAccessArticleWithHeadline:(id)arg0 articleAccess:(NSInteger)arg1 ;
-(void)incrementCountForHeadline:(id)arg0 ;


@end


#endif