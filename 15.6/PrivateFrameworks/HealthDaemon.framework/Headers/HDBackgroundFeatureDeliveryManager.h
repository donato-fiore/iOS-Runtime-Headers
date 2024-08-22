// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDBACKGROUNDFEATUREDELIVERYMANAGER_H
#define HDBACKGROUNDFEATUREDELIVERYMANAGER_H

@class NSString;
@protocol HDFeatureAvailabilityExtensionObserver, HDProfileReadyObserver, HDPeriodicCountryMonitorObserver, HDFeatureAvailabilityExtension, HDBackgroundFeatureDeliveryCriteriaProviding, HDBackgroundFeatureDeliverySettingsProviding, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDPeriodicCountryMonitor.h"

@interface HDBackgroundFeatureDeliveryManager : NSObject <HDFeatureAvailabilityExtensionObserver, HDProfileReadyObserver, HDPeriodicCountryMonitorObserver>

 {
    HDProfile *_profile;
    HDPeriodicCountryMonitor *_periodicCountryMonitor;
    id<HDFeatureAvailabilityExtension> *_featureAvailabilityExtension;
    id<HDBackgroundFeatureDeliveryCriteriaProviding> *_featureSpecificDeliveryCriteria;
    id<HDBackgroundFeatureDeliverySettingsProviding> *_settingsProvider;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithProfile:(id)arg0 periodicCountryMonitor:(id)arg1 featureAvailabilityExtension:(id)arg2 deliveryCriteria:(id)arg3 settingsProvider:(id)arg4 loggingCategory:(id)arg5 ;
-(id)initWithProfile:(id)arg0 featureAvailabilityExtension:(id)arg1 deliveryCriteria:(id)arg2 settingsProvider:(id)arg3 loggingCategory:(id)arg4 ;
-(id)initWithProfile:(id)arg0 featureAvailabilityExtension:(id)arg1 loggingCategory:(id)arg2 ;
-(void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg0 ;
-(void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateSettings:(id)arg0 ;
-(void)periodicCountryMonitor:(id)arg0 didFetchISOCountryCode:(id)arg1 countryCodeProvenance:(NSInteger)arg2 ;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif