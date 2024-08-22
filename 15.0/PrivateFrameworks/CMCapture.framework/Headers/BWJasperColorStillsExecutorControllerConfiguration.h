// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWJASPERCOLORSTILLSEXECUTORCONTROLLERCONFIGURATION_H
#define BWJASPERCOLORSTILLSEXECUTORCONTROLLERCONFIGURATION_H



#import "BWStillImageProcessorConfiguration.h"
#import "BWVideoFormat.h"

@interface BWJasperColorStillsExecutorControllerConfiguration : BWStillImageProcessorConfiguration

@property (nonatomic) int horizontalSensorBinningFactor; // ivar: _horizontalSensorBinningFactor
@property (retain, nonatomic) BWVideoFormat *inputColorFormat; // ivar: _inputColorFormat
@property (retain, nonatomic) BWVideoFormat *outputDepthFormat; // ivar: _outputDepthFormat
@property (nonatomic) int verticalSensorBinningFactor; // ivar: _verticalSensorBinningFactor


-(void)dealloc;


@end


#endif