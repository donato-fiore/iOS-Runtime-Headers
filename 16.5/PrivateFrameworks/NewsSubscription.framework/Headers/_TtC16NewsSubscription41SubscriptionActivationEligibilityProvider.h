// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16NEWSSUBSCRIPTION41SUBSCRIPTIONACTIVATIONELIGIBILITYPROVIDER_H
#define _TTC16NEWSSUBSCRIPTION41SUBSCRIPTIONACTIVATIONELIGIBILITYPROVIDER_H

@protocol SXSubscriptionActivationEligibilityProviding;

#import <Foundation/Foundation.h>


@interface _TtC16NewsSubscription41SubscriptionActivationEligibilityProvider : NSObject <SXSubscriptionActivationEligibilityProviding>

 {
    ? offerManager;
    ? observers;
    ? didProcessInitialOffer;
}


@property (nonatomic, readonly) NSInteger eligibility;


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif