// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI221SPORTSSESSIONOBSERVER_H
#define _TTC7NEWSUI221SPORTSSESSIONOBSERVER_H

@protocol FCUserInfoObserving, FCBundleSubscriptionChangeObserver, FCSubscriptionObserving;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI221SportsSessionObserver : NSObject <FCUserInfoObserving, FCBundleSubscriptionChangeObserver, FCSubscriptionObserving>

 {
    ? sessionManager;
    ? commandCenter;
    ? cloudContext;
    ? client;
    ? subscriptionController;
    ? syncTracker;
}




-(id)init;
-(void)bundleSubscriptionDidChange:(id)arg0 previousBundleSubscription:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg0 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg0 ;
-(void)pushMobileData;
-(void)pushUserSubscriptionContextData;
-(void)subscriptionController:(id)arg0 didAddTags:(id)arg1 changeTags:(id)arg2 moveTags:(id)arg3 removeTags:(id)arg4 subscriptionType:(NSUInteger)arg5 ;
-(void)userInfoDidChangeSportsUserID:(id)arg0 ;


@end


#endif