// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKRPWATCHAPPINSTALLABILITYDATASOURCE_H
#define _HKRPWATCHAPPINSTALLABILITYDATASOURCE_H

@class NSUserDefaults, NRDevice, NSString;
@protocol HKRPWatchAppInstallabilityDataSource;

#import <Foundation/Foundation.h>

#import "HKRPOxygenSaturationAvailability.h"
#import "HKRPOxygenSaturationOnboardingCache.h"

@interface _HKRPWatchAppInstallabilityDataSource : NSObject <HKRPWatchAppInstallabilityDataSource>

 {
    NSUserDefaults *_userDefaults;
    HKRPOxygenSaturationAvailability *_availability;
    HKRPOxygenSaturationOnboardingCache *_onboardingCache;
    NRDevice *_device;
}


@property (readonly, nonatomic, getter=isBloodOxygenSaturationEnabled) BOOL bloodOxygenSaturationEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDeviceSupported) BOOL deviceSupported;
@property (readonly, nonatomic) BOOL hasCompletedOnboarding;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRunningStoreDemoMode) BOOL runningStoreDemoMode;
@property (readonly, copy, nonatomic) NSString *selectedCountry;
@property (readonly, nonatomic) BOOL shouldForceAppInstall;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTinkerModeEnabled) BOOL tinkerModeEnabled;


-(id)init;
-(id)initWithDevice:(id)arg0 ;


@end


#endif