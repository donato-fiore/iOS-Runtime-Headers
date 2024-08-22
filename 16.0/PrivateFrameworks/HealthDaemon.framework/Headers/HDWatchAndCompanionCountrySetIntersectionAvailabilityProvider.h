// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWATCHANDCOMPANIONCOUNTRYSETINTERSECTIONAVAILABILITYPROVIDER_H
#define HDWATCHANDCOMPANIONCOUNTRYSETINTERSECTIONAVAILABILITYPROVIDER_H

@class NSUUID, NSString;
@protocol HDAllowedCountriesDataSourceObserver, HDObservableRegionAvailabilityProviding, HDAllowedCountriesDataSource, HDPairedDeviceCapabilityProviding, OS_os_log, HDRegionAvailabilityProvidingDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDWatchAndCompanionCountrySetIntersectionAvailabilityProvider : NSObject <HDAllowedCountriesDataSourceObserver, HDObservableRegionAvailabilityProviding>

 {
    id<HDAllowedCountriesDataSource> *_allowedCountriesDataSource;
    HDProfile *_profile;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceCapabilityProvider;
    NSUUID *_featureCapability;
    BOOL _reloadsLocalCountrySetOnRemoteCountrySetUpdate;
    NSObject<OS_os_log> *_loggingCategory;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDRegionAvailabilityProvidingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)lastContentVersionDuringReloadAttemptDomainForProfile:(id)arg0 ;
-(id)initWithAllowedCountriesDataSource:(id)arg0 profile:(id)arg1 pairedDeviceCapabilityProvider:(id)arg2 featureCapability:(id)arg3 loggingCategory:(id)arg4 ;
-(id)initWithAllowedCountriesDataSource:(id)arg0 profile:(id)arg1 pairedDeviceCapabilityProvider:(id)arg2 featureCapability:(id)arg3 reloadsLocalCountrySetOnRemoteCountrySetUpdate:(BOOL)arg4 loggingCategory:(id)arg5 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 device:(id)arg1 ;
-(id)regionAvailability;
-(id)regionAvailabilityForDevice:(id)arg0 ;
-(void)allowedCountriesDataSourceDidUpdateActiveRemoteCountrySet:(id)arg0 ;
-(void)allowedCountriesDataSourceDidUpdateLocalCountrySet:(id)arg0 ;


@end


#endif