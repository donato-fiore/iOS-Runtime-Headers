// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECSUBSCRIPTIONMANAGER_H
#define WBSPARSECSUBSCRIPTIONMANAGER_H

@class PSSSSubscriptionManagerInternal, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface WBSParsecSubscriptionManager : NSObject {
    PSSSSubscriptionManagerInternal *_thirdPartySubscriptionManager;
    NSMutableDictionary *_subscriptionsByProvider;
}


@property (readonly, nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (readonly, nonatomic) NSArray *subscriptionDictionaries;


+(id)sharedManager;
-(id)_init;
-(id)init;
-(void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:(id)arg0 domainWhitelist:(id)arg1 maximumExpirationLimit:(CGFloat)arg2 ;
-(void)registerSubscriptionServiceForURL:(id)arg0 withSubscriptionInfo:(id)arg1 ;
-(void)removeSubscriptionsAddedAfterDate:(id)arg0 ;
-(void)updateSubscriptionsWithBundleIdentifierWhitelist:(id)arg0 domainWhitelist:(id)arg1 maximumExpirationLimit:(CGFloat)arg2 ;


@end


#endif