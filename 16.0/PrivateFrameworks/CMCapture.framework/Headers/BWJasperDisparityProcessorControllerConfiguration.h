// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWJASPERDISPARITYPROCESSORCONTROLLERCONFIGURATION_H
#define BWJASPERDISPARITYPROCESSORCONTROLLERCONFIGURATION_H



#import "BWStillImageProcessorControllerConfiguration.h"
#import "BWVideoFormat.h"

@interface BWJasperDisparityProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (nonatomic) int horizontalSensorBinningFactor; // ivar: _horizontalSensorBinningFactor
@property (retain, nonatomic) BWVideoFormat *inputColorFormat; // ivar: _inputColorFormat
@property (retain, nonatomic) BWVideoFormat *outputDepthFormat; // ivar: _outputDepthFormat
@property (nonatomic) int pointCloudTimeMachineCapacity; // ivar: _pointCloudTimeMachineCapacity
@property (nonatomic) int verticalSensorBinningFactor; // ivar: _verticalSensorBinningFactor


-(void)dealloc;


@end


#endif