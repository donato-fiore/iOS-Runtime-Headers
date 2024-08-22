// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC31ICLOUDSUBSCRIPTIONOPTIMIZERCORE39BUNDLEDNOTIFICATIONDELAYCLASSIFIERINPUT_H
#define _TTC31ICLOUDSUBSCRIPTIONOPTIMIZERCORE39BUNDLEDNOTIFICATIONDELAYCLASSIFIERINPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC31iCloudSubscriptionOptimizerCore39BundledNotificationDelayClassifierInput : SwiftObject <MLFeatureProvider>

 {
    ? hourOfDay;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif