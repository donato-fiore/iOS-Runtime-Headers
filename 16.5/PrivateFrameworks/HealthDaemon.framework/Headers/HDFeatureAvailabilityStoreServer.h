// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDFEATUREAVAILABILITYSTORESERVER_H
#define HDFEATUREAVAILABILITYSTORESERVER_H

@class NSString;
@protocol HKFeatureAvailabilityStoreServer, HDFeatureAvailabilityExtensionObserver, HDFeatureAvailabilityExtension, OS_dispatch_queue;


#import "HDStandardTaskServer.h"

@interface HDFeatureAvailabilityStoreServer : HDStandardTaskServer <HKFeatureAvailabilityStoreServer, HDFeatureAvailabilityExtensionObserver>

 {
    id<HDFeatureAvailabilityExtension> *_extension;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg0 ;
-(void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateSettings:(id)arg0 ;
-(void)remote_canCompleteOnboardingForCountryCode:(id)arg0 completion:(id)arg1 ;
-(void)remote_earliestDateLowestOnboardingVersionCompletedWithCompletion:(id)arg0 ;
-(void)remote_getFeatureAvailabilityRequirementsWithCompletion:(id)arg0 ;
-(void)remote_getFeatureOnboardingRecordWithCompletion:(id)arg0 ;
-(void)remote_getIsCurrentOnboardingVersionCompletedWithCompletion:(id)arg0 ;
-(void)remote_getIsFeatureCapabilitySupportedOnActivePairedDeviceWithCompletion:(id)arg0 ;
-(void)remote_getPairedFeatureAttributesWithCompletion:(id)arg0 ;
-(void)remote_getRegionAvailabilityWithCompletion:(id)arg0 ;
-(void)remote_onboardedCountryCodeSupportedStateWithCompletion:(id)arg0 ;
-(void)remote_onboardingEligibilityForCountryCode:(id)arg0 completion:(id)arg1 ;
-(void)remote_removeFeatureSettingValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)remote_resetOnboardingWithCompletion:(id)arg0 ;
-(void)remote_saveOnboardingCompletion:(id)arg0 settings:(id)arg1 completion:(id)arg2 ;
-(void)remote_setCurrentOnboardingVersionCompletedForCountryCode:(id)arg0 countryCodeProvenance:(NSInteger)arg1 date:(id)arg2 settings:(id)arg3 completion:(id)arg4 ;
-(void)remote_setFeatureSettingData:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)remote_setFeatureSettingNumber:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)remote_setFeatureSettingString:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)remote_startObservingChangesWithCompletion:(id)arg0 ;
-(void)remote_stopObservingChanges;


@end


#endif