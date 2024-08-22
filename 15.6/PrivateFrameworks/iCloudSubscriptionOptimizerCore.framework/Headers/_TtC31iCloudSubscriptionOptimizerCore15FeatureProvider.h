// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC31ICLOUDSUBSCRIPTIONOPTIMIZERCORE15FEATUREPROVIDER_H
#define _TTC31ICLOUDSUBSCRIPTIONOPTIMIZERCORE15FEATUREPROVIDER_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC31iCloudSubscriptionOptimizerCore15FeatureProvider : SwiftObject <MLFeatureProvider>

 {
    ? biomeManager;
    ? timestamp;
    ? displayTimestamp;
    ? offsetTimeInterval;
    ? featureNames;
}


@property (nonatomic, copy) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif