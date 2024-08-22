// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTEREODISPARITYPROCESSORCONTROLLERCONFIGURATION_H
#define BWSTEREODISPARITYPROCESSORCONTROLLERCONFIGURATION_H



#import "BWStillImageProcessorControllerConfiguration.h"

@interface BWStereoDisparityProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (nonatomic) ? disparityOutputDimensions; // ivar: _disparityOutputDimensions
@property (nonatomic) int fsdNetStereoImagesAlignment; // ivar: _fsdNetStereoImagesAlignment
@property (nonatomic) ? inputDimensions; // ivar: _inputDimensions
@property (nonatomic) BOOL shouldComputeDisparityWhenCalibrationFails; // ivar: _shouldComputeDisparityWhenCalibrationFails
@property (nonatomic) int stillImageDepthDataType; // ivar: _stillImageDepthDataType




@end


#endif