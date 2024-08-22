// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSFFEATUREMANAGER_H
#define CSFFEATUREMANAGER_H


#import <Foundation/Foundation.h>


@interface CSFFeatureManager : NSObject



+(BOOL)isCloudSubscriber;
+(id)addFeatureChangeObserverWithChange:(id)arg0 ;
+(id)registerForFeatureChangeNotificationsUsingBlock:(id)arg0 ;
+(void)clearCacheAndNotify;
+(void)clearFeatureCacheAndNotify;
+(void)getFeatureEligibilityForFeatureWithId:(id)arg0 bundleId:(id)arg1 completion:(id)arg2 ;
+(void)processPushNotificationDictionary:(id)arg0 ;
+(void)processPushNotificationWithDictionary:(id)arg0 ;
+(void)refreshAllGeoclassificationCache;
+(void)refreshGeoclassificationCache;
+(void)removeFeatureChangeObserverWithToken:(id)arg0 ;
+(void)requestFeatureWithId:(id)arg0 completion:(id)arg1 ;
+(void)requestGeoClassificationForFeatureID:(id)arg0 bundleID:(id)arg1 altDSID:(id)arg2 ignoreCache:(BOOL)arg3 completion:(id)arg4 ;
+(void)requestGeoClassificationForFeatureID:(id)arg0 bundleID:(id)arg1 ignoreCache:(BOOL)arg2 completion:(id)arg3 ;
+(void)unregisterForFeatureChangeNotificationsUsingObserver:(id)arg0 ;


@end


#endif