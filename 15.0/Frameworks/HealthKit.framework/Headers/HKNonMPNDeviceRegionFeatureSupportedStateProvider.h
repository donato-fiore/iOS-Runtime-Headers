// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKNONMPNDEVICEREGIONFEATURESUPPORTEDSTATEPROVIDER_H
#define HKNONMPNDEVICEREGIONFEATURESUPPORTEDSTATEPROVIDER_H

@class NSString;
@protocol HKDeviceRegionFeatureSupportedStateProvider;

#import <Foundation/Foundation.h>


@interface HKNonMPNDeviceRegionFeatureSupportedStateProvider : NSObject <HKDeviceRegionFeatureSupportedStateProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;
+(NSUInteger)atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg0 ;
+(NSUInteger)electrocardiogramSupportedOnPhone:(id)arg0 iOSVersionString:(id)arg1 ;
+(NSUInteger)electrocardiogramSupportedStateForCurrentDeviceRegion;
+(NSUInteger)electrocardiogramSupportedStateForDeviceRegion:(id)arg0 ;


@end


#endif