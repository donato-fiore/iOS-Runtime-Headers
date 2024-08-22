// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWPOINTCLOUDDENSIFICATIONNODECONFIGURATION_H
#define BWPOINTCLOUDDENSIFICATIONNODECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "BWSensorConfiguration.h"

@interface BWPointCloudDensificationNodeConfiguration : NSObject

@property (readonly, nonatomic) ? depthOutputDimensions; // ivar: _depthOutputDimensions
@property (readonly, nonatomic) unsigned int depthPixelFormat; // ivar: _depthPixelFormat
@property (readonly, nonatomic) BOOL filteringEnabled; // ivar: _filteringEnabled
@property (readonly, nonatomic) int rgbCameraHorizontalSensorBinningFactor; // ivar: _rgbCameraHorizontalSensorBinningFactor
@property (readonly, nonatomic) int rgbCameraVerticalSensorBinningFactor; // ivar: _rgbCameraVerticalSensorBinningFactor
@property (readonly, nonatomic) BWSensorConfiguration *rgbSensorConfiguration; // ivar: _rgbSensorConfiguration
@property (readonly, nonatomic) BWSensorConfiguration *timeOfFlightSensorConfiguration; // ivar: _timeOfFlightSensorConfiguration
@property (readonly, nonatomic) ? videoInputDimensions; // ivar: _videoInputDimensions


-(id)initWithRGBSensorConfiguration:(id)arg0 timeOfFlightSensorConfiguration:(id)arg1 rgbCameraHorizontalSensorBinningFactor:(int)arg2 rgbCameraVerticalSensorBinningFactor:(int)arg3 filteringEnabled:(BOOL)arg4 depthPixelFormat:(unsigned int)arg5 depthOutputDimensions:(struct ? )arg6 videoInputDimensions:(struct ? )arg7 ;
-(void)dealloc;


@end


#endif