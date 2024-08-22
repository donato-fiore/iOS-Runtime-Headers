// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSLISTCONTROLLER_H
#define TPSLISTCONTROLLER_H

@class PSListController, CTXPCServiceSubscriptionContext, NSOrderedSet;



@interface TPSListController : PSListController

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (copy, nonatomic) NSOrderedSet *subscriptions; // ivar: _subscriptions


-(void)setSpecifier:(id)arg0 ;


@end


#endif