// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERDAEMON15FEATUREPROVIDER_H
#define _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERDAEMON15FEATUREPROVIDER_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC33iCloudSubscriptionOptimizerDaemon15FeatureProvider : SwiftObject <MLFeatureProvider>

 {
    ? biomeManager;
    ? timestamp;
    ? displayTimestamp;
    ? offsetTimeInterval;
    ? offsetMins;
    ? featureNamesToBuildFeatureArray;
    ? pushTimestamp;
    ? featureNames;
    ? $__lazy_storage_$_biomeNotificationFeatureProvider;
    ? $__lazy_storage_$_biomeFocusFeatureProvider;
    ? $__lazy_storage_$_appLaunchFeatureProvier;
    ? $__lazy_storage_$_usageTrackingFeatureProvider;
    ? $__lazy_storage_$_simpleTimeFeatureProvider;
}


@property (nonatomic, copy) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif