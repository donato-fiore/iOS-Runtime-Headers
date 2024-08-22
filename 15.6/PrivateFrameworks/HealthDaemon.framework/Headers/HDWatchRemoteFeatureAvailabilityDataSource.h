// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWATCHREMOTEFEATUREAVAILABILITYDATASOURCE_H
#define HDWATCHREMOTEFEATUREAVAILABILITYDATASOURCE_H

@class NRDevice, NSString;
@protocol HKRemoteFeatureAvailabilityDataSource;

#import <Foundation/Foundation.h>


@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

 {
    NRDevice *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *onboardingCountryCode; // ivar: _onboardingCountryCode
@property (readonly) Class superclass;


-(id)iOSBuildVersion;
-(id)initWithDevice:(id)arg0 ;
-(id)watchBuildType;
-(id)watchCompanionDevicePlatform;
-(id)watchModelNumber;
-(id)watchOSBuildVersion;
-(id)watchProductType;
-(id)watchRegion;
-(struct ? )iOSVersion;
-(struct ? )watchAtrialFibrillationDetectionVersion;
-(struct ? )watchElectrocardiogramVersion;
-(struct ? )watchOSVersion;


@end


#endif