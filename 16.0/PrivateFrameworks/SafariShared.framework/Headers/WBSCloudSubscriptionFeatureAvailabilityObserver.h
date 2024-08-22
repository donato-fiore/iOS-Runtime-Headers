// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCLOUDSUBSCRIPTIONFEATUREAVAILABILITYOBSERVER_H
#define WBSCLOUDSUBSCRIPTIONFEATUREAVAILABILITYOBSERVER_H

@class NSString, FeatureChangeObserver, CloudFeatureObject;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSCloudSubscriptionFeatureAvailabilityObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_featureIdentifier;
    FeatureChangeObserver *_changeObserverToken;
    CloudFeatureObject *_featureObject;
    BOOL _isEligible;
}




+(id)porcupineAvailabilityObserver;
+(id)provisionNewHideMyEmailAvailabilityObserver;
-(BOOL)_overridenAvailability;
-(id)initWithFeatureIdentifier:(id)arg0 ;
-(void)_requestFeatureEligibilityBlockingQueueUntilResponse:(BOOL)arg0 ;
-(void)_requestFeatureObjectBlockingQueueUntilResponse:(BOOL)arg0 ;
-(void)dealloc;
-(void)getFeatureAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)getFeatureEligibilityWithCompletionHandler:(id)arg0 ;


@end


#endif