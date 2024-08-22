// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC31ICLOUDSUBSCRIPTIONOPTIMIZERCORE40BUNDLEDNOTIFICATIONDELAYCLASSIFIEROUTPUT_H
#define _TTC31ICLOUDSUBSCRIPTIONOPTIMIZERCORE40BUNDLEDNOTIFICATIONDELAYCLASSIFIEROUTPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC31iCloudSubscriptionOptimizerCore40BundledNotificationDelayClassifierOutput : SwiftObject <MLFeatureProvider>

 {
    ? provider;
    ? $__lazy_storage_$_shouldDelay;
    ? $__lazy_storage_$_shouldDelayProbability;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif