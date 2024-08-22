// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATURESTATUSPROVIDINGDATASOURCE_H
#define HKFEATURESTATUSPROVIDINGDATASOURCE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "HKObserverBridge.h"
#import "HKFeatureAvailabilityRequirementEvaluationDataSource.h"

@interface HKFeatureStatusProvidingDataSource : HKObserverBridge

@property (weak, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSMutableDictionary *featureStatusProvidingByFeatureIdentifierAndContext; // ivar: _featureStatusProvidingByFeatureIdentifierAndContext
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // ivar: _observationQueue


-(id)_featureStatusProvidingForFeatureIdentifierAndContext:(id)arg0 ;
-(id)_makeFeatureStatusProviderForFeatureIdentifier:(id)arg0 context:(id)arg1 dataSource:(id)arg2 ;
-(id)featureStatusProvidingForFeatureIdentifier:(id)arg0 context:(id)arg1 ;
-(id)init;
-(id)makeAndRegisterBridgedObserverForKey:(id)arg0 handle:(id)arg1 ;
-(void)unregisterBridgedObserver:(id)arg0 forKey:(id)arg1 ;


@end


#endif