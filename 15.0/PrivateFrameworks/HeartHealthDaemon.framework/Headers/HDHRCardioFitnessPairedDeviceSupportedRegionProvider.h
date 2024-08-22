// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHRCARDIOFITNESSPAIREDDEVICESUPPORTEDREGIONPROVIDER_H
#define HDHRCARDIOFITNESSPAIREDDEVICESUPPORTEDREGIONPROVIDER_H

@class NSDictionary, NSString;
@protocol HDHRCardioFitnessPairedDeviceSupportedRegionProviding;

#import <Foundation/Foundation.h>


@interface HDHRCardioFitnessPairedDeviceSupportedRegionProvider : NSObject <HDHRCardioFitnessPairedDeviceSupportedRegionProviding>

 {
    NSDictionary *_localSupportedRegions;
    NSString *_deviceProperty;
}




-(id)initWithLocalSupportedRegions:(id)arg0 ;
-(id)localSupportedRegions;
-(id)phoneSupportedRegionsOnDevice:(id)arg0 ;
-(id)watchSupportedRegionsOnDevice:(id)arg0 ;


@end


#endif