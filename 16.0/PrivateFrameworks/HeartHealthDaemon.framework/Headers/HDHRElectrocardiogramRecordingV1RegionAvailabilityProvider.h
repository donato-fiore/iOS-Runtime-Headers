// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRELECTROCARDIOGRAMRECORDINGV1REGIONAVAILABILITYPROVIDER_H
#define HDHRELECTROCARDIOGRAMRECORDINGV1REGIONAVAILABILITYPROVIDER_H

@class NSString;
@protocol HDObservableRegionAvailabilityProviding, HDPairedDeviceCapabilityProviding, HDRegionAvailabilityProvidingDelegate;

#import <Foundation/Foundation.h>


@interface HDHRElectrocardiogramRecordingV1RegionAvailabilityProvider : NSObject <HDObservableRegionAvailabilityProviding>

 {
    id<HDObservableRegionAvailabilityProviding> *_backingProvider;
    id<HDPairedDeviceCapabilityProviding> *_capabilityProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDRegionAvailabilityProvidingDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRegionAvailabilityProvider:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 ;
-(id)onboardingEligibilityForCountryCode:(id)arg0 device:(id)arg1 ;
-(id)regionAvailability;
-(id)regionAvailabilityForDevice:(id)arg0 ;


@end


#endif