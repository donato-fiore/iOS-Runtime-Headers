// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDRESPIRATORYPROFILEEXTENSION_H
#define HDRESPIRATORYPROFILEEXTENSION_H

@class HKRPOxygenSaturationOnboardingCacher, HKRPOxygenSaturationSettings, NSString, HDProfile;
@protocol HDFeatureAvailabilityExtensionObserver, HDProfileExtension, HDFeatureAvailabilityExtensionProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDRPRespiratoryDailyAnalytics.h"
#import "HDRPFeatureAvailabilityManager.h"

@interface HDRespiratoryProfileExtension : NSObject <HDFeatureAvailabilityExtensionObserver, HDProfileExtension, HDFeatureAvailabilityExtensionProvider>

 {
    HKRPOxygenSaturationOnboardingCacher *_onboardingCacher;
    HKRPOxygenSaturationSettings *_settings;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) HDRPRespiratoryDailyAnalytics *dailyAnalytics; // ivar: _dailyAnalytics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HDRPFeatureAvailabilityManager *featureAvailabilityManager; // ivar: _featureAvailabilityManager
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_healthLiteSessionWithDelegateHandler; // ivar: _unitTesting_healthLiteSessionWithDelegateHandler


-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 forcingFeaturesEnabled:(BOOL)arg1 ;
-(id)initWithProfile:(id)arg0 forcingFeaturesEnabled:(BOOL)arg1 featureAvailabilityManager:(id)arg2 ;
-(id)oxygenSaturationSessionWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)_updateBackgroundMeasurmentsSettings;
-(void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg0 ;
-(void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;


@end


#endif