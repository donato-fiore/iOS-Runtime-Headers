// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSUBSCRIPTIONDATA_H
#define WLKSUBSCRIPTIONDATA_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLKSubscriptionData : NSObject <NSSecureCoding>

 {
    NSDictionary *_backingDictionary;
    NSArray *_subscriptionArray;
    NSDictionary *_account;
    NSDictionary *_family;
    NSDictionary *_subscriptionsByAdamID;
    NSInteger _activeSubscriptionsCount;
    NSDictionary *_activeTVPlusSubscription;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSubscriptionData:(id)arg0 ;
-(BOOL)isTVPlusSubscriber;
-(NSUInteger)activeSubscriptionsCount;
-(NSUInteger)hash;
-(id)activeTVPlusSubscription;
-(id)currentAccount;
-(id)currentFamily;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)subscriptionByAdamID:(id)arg0 ;
-(id)subscriptions;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif