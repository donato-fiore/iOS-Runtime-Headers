// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKACTIVEWATCHREMOTEFEATUREAVAILABILITYDATASOURCE_H
#define HKACTIVEWATCHREMOTEFEATUREAVAILABILITYDATASOURCE_H

@class NSString, NRPairedDeviceRegistry;
@protocol HKRemoteFeatureAvailabilityDataSource;

#import <Foundation/Foundation.h>


@interface HKActiveWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *onboardingCountryCode; // ivar: _onboardingCountryCode
@property (retain, nonatomic) NRPairedDeviceRegistry *pairedDeviceRegistry; // ivar: _pairedDeviceRegistry
@property (readonly) Class superclass;


-(id)_activeWatch;
-(id)iOSBuildVersion;
-(id)init;
-(id)watchBuildType;
-(id)watchCompanionDevicePlatform;
-(id)watchModelNumber;
-(id)watchOSBuildVersion;
-(id)watchProductType;
-(id)watchRegion;
-(id)watchRegionInfo;
-(struct ? )_operatingSystemVersionForOSVersion:(unsigned int)arg0 ;
-(struct ? )iOSVersion;
-(struct ? )watchAtrialFibrillationDetectionVersion;
-(struct ? )watchElectrocardiogramVersion;
-(struct ? )watchOSVersion;


@end


#endif