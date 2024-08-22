// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWATCHANDCOMPANIONCOUNTRYLISTINTERSECTIONAVAILABILITYPROVIDER_H
#define HDWATCHANDCOMPANIONCOUNTRYLISTINTERSECTIONAVAILABILITYPROVIDER_H

@class NSUUID, NSString;
@protocol HDRegionAvailabilityDataSourceObserver, HDObservableRegionAvailabilityProviding, HDRegionAvailabilityDataSource, HDPairedDeviceCapabilityProviding, OS_os_log, HDRegionAvailabilityProvidingDelegate;

#import <Foundation/Foundation.h>


@interface HDWatchAndCompanionCountryListIntersectionAvailabilityProvider : NSObject <HDRegionAvailabilityDataSourceObserver, HDObservableRegionAvailabilityProviding>

 {
    id<HDRegionAvailabilityDataSource> *_regionAvailabilityDataSource;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceCapabilityProvider;
    NSUUID *_featureCapability;
    NSObject<OS_os_log> *_loggingCategory;
    id<HDRegionAvailabilityProvidingDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCountryCodeAllowed:(id)arg0 ;
-(id)initWithRegionAvailabilityDataSource:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 featureCapability:(id)arg2 loggingCategory:(id)arg3 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 device:(id)arg1 ;
-(id)regionAvailability;
-(id)regionAvailabilityForDevice:(id)arg0 ;
-(void)regionAvailabilityDataSourceDidUpdateActiveRemoteCountrySet:(id)arg0 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;


@end


#endif