// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLOUDSUBSCRIPTIONFEATURES_H
#define CLOUDSUBSCRIPTIONFEATURES_H


#import <Foundation/Foundation.h>


@interface CloudSubscriptionFeatures : NSObject



+(id)addFeatureChangeObserverWithChange:(id)arg0 ;
+(id)registerForFeatureChangeNotificationsUsingBlock:(id)arg0 ;
+(void)clearCacheAndNotify;
+(void)clearFeatureCacheAndNotify;
+(void)getFeatureEligibilityForFeatureWithId:(id)arg0 bundleId:(id)arg1 completion:(id)arg2 ;
+(void)processPushNotificationDictionary:(id)arg0 ;
+(void)processPushNotificationWithDictionary:(id)arg0 ;
+(void)removeFeatureChangeObserverWithToken:(id)arg0 ;
+(void)requestFeatureWithId:(id)arg0 completion:(id)arg1 ;
+(void)unregisterForFeatureChangeNotificationsUsingObserver:(id)arg0 ;


@end


#endif