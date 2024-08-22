// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDLOCALCOUNTRYSETAVAILABILITYPROVIDER_H
#define HDLOCALCOUNTRYSETAVAILABILITYPROVIDER_H

@class NSString, HKCountrySet, NSUserDefaults;
@protocol HDOTAFeatureAvailabilityObserver, HDObservableRegionAvailabilityProviding, HDRegionAvailabilityProvidingDelegate;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDLocalCountrySetAvailabilityProvider : NSObject <HDOTAFeatureAvailabilityObserver, HDObservableRegionAvailabilityProviding>

 {
    NSString *_featureIdentifier;
    HKCountrySet *_defaultCountrySet;
    HDDaemon *_healthDaemon;
    NSUserDefaults *_overrideUserDefaults;
}


@property (readonly, copy, nonatomic) HKCountrySet *countrySet;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDRegionAvailabilityProvidingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFeatureIdentifier:(id)arg0 defaultCountrySet:(id)arg1 healthDaemon:(id)arg2 ;
-(id)initWithFeatureIdentifier:(id)arg0 defaultCountrySet:(id)arg1 healthDaemon:(id)arg2 overrideUserDefaults:(id)arg3 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 device:(id)arg1 ;
-(id)regionAvailability;
-(id)regionAvailabilityForDevice:(id)arg0 ;
-(void)OTAFeatureAvailabilityManagerDidUpdateFeatureAvailabilityInfo:(id)arg0 ;
-(void)dealloc;
-(void)downloadLatestOTAAvailabilityInfoWithCompletion:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif