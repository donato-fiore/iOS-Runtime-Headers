// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC25CLOUDSUBSCRIPTIONFEATURES21FEATUREREQUESTHANDLER25FEATUREREQUESTCOORDINATOR_H
#define _TTCC25CLOUDSUBSCRIPTIONFEATURES21FEATUREREQUESTHANDLER25FEATUREREQUESTCOORDINATOR_H

@protocol _TtP25CloudSubscriptionFeatures22FeaturesServiceRequest_;

#import <Foundation/Foundation.h>


@interface _TtCC25CloudSubscriptionFeatures21FeatureRequestHandler25FeatureRequestCoordinator : NSObject <_TtP25CloudSubscriptionFeatures22FeaturesServiceRequest_>

 {
    ? requestHandler;
    ? requestCoalescer;
    ? serialQueue;
    ? lock;
    ? subscriptions;
}




-(id)init;
-(void)clearCacheAndNotify;
-(void)getFeatureEligibilityFor:(id)arg0 bundleID:(id)arg1 completion:(id)arg2 ;
-(void)requestFeatureWithId:(id)arg0 ignoreCache:(BOOL)arg1 completion:(id)arg2 ;
-(void)requestGeoClassificationFor:(id)arg0 bundleID:(id)arg1 altDSID:(id)arg2 ignoreCache:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif