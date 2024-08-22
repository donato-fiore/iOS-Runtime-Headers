// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYPROVIDINGDATASOURCE_H
#define HKFEATUREAVAILABILITYPROVIDINGDATASOURCE_H

@class NSMutableDictionary;
@protocol HKFeatureAvailabilityHealthDataSource, HKFeatureAvailabilityProviding, OS_dispatch_queue;


#import "HKObserverBridge.h"

@interface HKFeatureAvailabilityProvidingDataSource : HKObserverBridge

@property (readonly, nonatomic) NSMutableDictionary *featureAvailabilityProvidingByFeatureIdentifier; // ivar: _featureAvailabilityProvidingByFeatureIdentifier
@property (readonly, weak, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *healthDataSource; // ivar: _healthDataSource
@property (weak, nonatomic) NSObject<HKFeatureAvailabilityProviding> *knownFeatureAvailabilityProviding; // ivar: _knownFeatureAvailabilityProviding
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // ivar: _observationQueue


-(id)featureAvailabilityProvidingForFeatureIdentifier:(id)arg0 ;
-(id)initWithHealthDataSource:(id)arg0 ;
-(id)makeAndRegisterBridgedObserverForKey:(id)arg0 handle:(id)arg1 ;
-(void)unregisterBridgedObserver:(id)arg0 forKey:(id)arg1 ;


@end


#endif