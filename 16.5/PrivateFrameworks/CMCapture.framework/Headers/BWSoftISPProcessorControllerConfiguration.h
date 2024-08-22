// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSOFTISPPROCESSORCONTROLLERCONFIGURATION_H
#define BWSOFTISPPROCESSORCONTROLLERCONFIGURATION_H



#import "BWStillImageProcessorControllerConfiguration.h"

@interface BWSoftISPProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (nonatomic) BOOL deepFusionEnabled; // ivar: _deepFusionEnabled
@property (nonatomic) int digitalFlashProgressiveFusionBatchSize; // ivar: _digitalFlashProgressiveFusionBatchSize
@property (nonatomic) BOOL gdcEnabled; // ivar: _gdcEnabled
@property (nonatomic) ? inputDimensions; // ivar: _inputDimensions
@property (nonatomic) BOOL learnedNREnabled; // ivar: _learnedNREnabled
@property (nonatomic) BOOL linearRGBForDisparityEnabled; // ivar: _linearRGBForDisparityEnabled
@property (nonatomic) int lossyCompressionLevel; // ivar: _lossyCompressionLevel
@property (nonatomic) ? outputDimensions; // ivar: _outputDimensions
@property (nonatomic) BOOL quadraProcessingEnabled; // ivar: _quadraProcessingEnabled
@property (nonatomic) unsigned int sensorRawPixelFormat; // ivar: _sensorRawPixelFormat
@property (nonatomic) BOOL standardYUVProcessingEnabled; // ivar: _standardYUVProcessingEnabled
@property (nonatomic) BOOL ultraHighResolutionBinningEnabled; // ivar: _ultraHighResolutionBinningEnabled
@property (nonatomic) ? ultraHighResolutionInputDimensions; // ivar: _ultraHighResolutionInputDimensions
@property (nonatomic) ? ultraHighResolutionOutputDimensions; // ivar: _ultraHighResolutionOutputDimensions




@end


#endif