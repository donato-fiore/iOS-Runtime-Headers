// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDSUBSCRIPTIONENTITLEMENTS_H
#define ASDSUBSCRIPTIONENTITLEMENTS_H


#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDSubscriptionEntitlements : NSObject {
    ASDServiceBroker *_serviceBroker;
    int _newsCacheUpdatedNotificationToken;
    int _appStoreCacheUpdatedNotificationToken;
    int _appStoreArcadeSubscriptionBagUpdatedNotificationToken;
    int _activityCacheUpdatedNotificationToken;
    int _musicCacheUpdatedNotificationToken;
    int _tvCacheUpdatedNotificationToken;
    int _iCloudCacheUpdatedNotificationToken;
    int _podcastCacheUpdatedNotificationToken;
}




+(id)sharedInstance;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(id)arg0 ;
-(void)getCachedSubscriptionEntitlementsForSegment:(NSUInteger)arg0 withResultHandler:(id)arg1 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(id)arg0 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(id)arg0 ;
-(void)getSubscriptionEntitlementsForSegment:(NSUInteger)arg0 ignoreCaches:(BOOL)arg1 requestingBundleId:(id)arg2 withCacheInfoResultHandler:(id)arg3 ;
-(void)getSubscriptionEntitlementsForSegment:(NSUInteger)arg0 ignoreCaches:(BOOL)arg1 withCacheInfoResultHandler:(id)arg2 ;
-(void)getSubscriptionEntitlementsForSegment:(NSUInteger)arg0 ignoreCaches:(BOOL)arg1 withResultHandler:(id)arg2 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg0 forActiveAccountWithResultAndExpiryHandler:(id)arg1 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg0 forActiveAccountWithResultHandler:(id)arg1 ;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg0 forAccountID:(id)arg1 ;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg0 forAccountID:(id)arg1 segment:(NSUInteger)arg2 ;


@end


#endif