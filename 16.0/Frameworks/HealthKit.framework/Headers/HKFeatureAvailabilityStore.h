// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYSTORE_H
#define HKFEATUREAVAILABILITYSTORE_H

@class NSString;
@protocol HKFeatureAvailabilityStoreClient, _HKXPCExportable, HKFeatureAvailabilityProviding;

#import <Foundation/Foundation.h>

#import "HKObserverSet.h"
#import "HKTaskServerProxyProvider.h"

@interface HKFeatureAvailabilityStore : NSObject <HKFeatureAvailabilityStoreClient, _HKXPCExportable, HKFeatureAvailabilityProviding>

 {
    NSString *_featureIdentifier;
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(BOOL)_synchronouslyStartObservingWithError:(*id)arg0 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)exportedInterface;
-(id)featureAvailabilityRequirementsWithError:(*id)arg0 ;
-(id)featureOnboardingRecordWithError:(*id)arg0 ;
-(id)initWithFeatureIdentifier:(id)arg0 healthStore:(id)arg1 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(*id)arg0 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(*id)arg0 ;
-(id)onboardedCountryCodeSupportedStateWithError:(*id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)pairedFeatureAttributesWithError:(*id)arg0 ;
-(id)regionAvailabilityWithError:(*id)arg0 ;
-(id)remoteInterface;
-(void)_handleAutomaticProxyReconnection;
-(void)_notifyObserversForOnboardingCompletionUpdate;
-(void)_notifyObserversForPairedDeviceCapabilityUpdate;
-(void)_notifyObserversForSettingsUpdate;
-(void)_startObservingWithActivationHandler:(id)arg0 ;
-(void)client_featureAvailabilityExtensionDidUpdateOnboardingCompletion;
-(void)client_featureAvailabilityExtensionDidUpdatePairedDeviceCapability;
-(void)client_featureAvailabilityProvidingDidUpdateSettings;
-(void)connectionInvalidated;
-(void)getFeatureOnboardingRecordWithCompletion:(id)arg0 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 activationHandler:(id)arg2 ;
-(void)removeFeatureSettingValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)resetOnboardingWithCompletion:(id)arg0 ;
-(void)saveOnboardingCompletion:(id)arg0 settings:(id)arg1 completion:(id)arg2 ;
-(void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg0 countryCodeProvenance:(NSInteger)arg1 date:(id)arg2 settings:(id)arg3 completion:(id)arg4 ;
-(void)setFeatureSettingData:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingNumber:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setFeatureSettingString:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif