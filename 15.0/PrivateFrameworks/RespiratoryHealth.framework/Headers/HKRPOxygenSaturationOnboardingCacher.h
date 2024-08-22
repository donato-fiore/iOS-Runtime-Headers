// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKRPOXYGENSATURATIONONBOARDINGCACHER_H
#define HKRPOXYGENSATURATIONONBOARDINGCACHER_H

@class NSUserDefaults, NSString;
@protocol HKFeatureAvailabilityProvidingObserver, HKFeatureAvailabilityProviding, HKRPUserDefaultsSyncProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKRPOxygenSaturationOnboardingCacher : NSObject <HKFeatureAvailabilityProvidingObserver>

 {
    id<HKFeatureAvailabilityProviding> *_featureAvailabilityProvider;
    NSUserDefaults *_userDefaults;
    id<HKRPUserDefaultsSyncProviding> *_userDefaultsSyncProvider;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFeatureAvailabilityProviding:(id)arg0 userDefaults:(id)arg1 userDefaultsSyncProvider:(id)arg2 ;
-(id)initWithFeatureAvailabilityProviding:(id)arg0 userDefaults:(id)arg1 userDefaultsSyncProvider:(id)arg2 didStart:(id)arg3 ;
-(void)_queue_featureAvailabilityDidChange;
-(void)dealloc;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;


@end


#endif