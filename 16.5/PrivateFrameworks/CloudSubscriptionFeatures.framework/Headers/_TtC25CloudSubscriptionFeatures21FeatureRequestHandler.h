// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC25CLOUDSUBSCRIPTIONFEATURES21FEATUREREQUESTHANDLER_H
#define _TTC25CLOUDSUBSCRIPTIONFEATURES21FEATUREREQUESTHANDLER_H

@protocol _TtP25CloudSubscriptionFeatures22FeaturesServiceRequest_;

#import <Foundation/Foundation.h>


@interface _TtC25CloudSubscriptionFeatures21FeatureRequestHandler : NSObject <_TtP25CloudSubscriptionFeatures22FeaturesServiceRequest_>

 {
    ? taskLimiters;
    ? geoCache;
    ? accountStore;
}




-(id)init;
-(void)clearCacheAndNotify;
-(void)getFeatureEligibilityFor:(id)arg0 bundleID:(id)arg1 completion:(id)arg2 ;
-(void)requestFeatureWithId:(id)arg0 ignoreCache:(BOOL)arg1 completion:(id)arg2 ;
-(void)requestGeoClassificationFor:(id)arg0 bundleID:(id)arg1 altDSID:(id)arg2 ignoreCache:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif