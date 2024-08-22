// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFHEALTHFEATUREAVAILABILITY_H
#define WFHEALTHFEATUREAVAILABILITY_H

@class NSString, HKSPFeatureAvailabilityStore;
@protocol HKFeatureAvailabilityProvidingObserver, WFHealthFeatureObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFHealthFeatureAvailability : NSObject <HKFeatureAvailabilityProvidingObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<WFHealthFeatureObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSString *onboardingCompletedKey; // ivar: _onboardingCompletedKey
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger sleepOnboardingStatus;
@property (retain, nonatomic) HKSPFeatureAvailabilityStore *store; // ivar: _store
@property (readonly) Class superclass;


-(id)initWithSleepFeature:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)getSleepOnboardingStatus:(id)arg0 ;


@end


#endif