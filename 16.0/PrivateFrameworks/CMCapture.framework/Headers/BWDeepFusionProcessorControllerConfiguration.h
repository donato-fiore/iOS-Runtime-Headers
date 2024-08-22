// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEEPFUSIONPROCESSORCONTROLLERCONFIGURATION_H
#define BWDEEPFUSIONPROCESSORCONTROLLERCONFIGURATION_H

@class NSDictionary;


#import "BWStillImageProcessorControllerConfiguration.h"

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (nonatomic) BOOL delayPrepareAndCacheBuffers; // ivar: _delayPrepareAndCacheBuffers
@property (nonatomic) ? maxInputDimensions; // ivar: _maxInputDimensions
@property (nonatomic) ? maxOutputDimensions; // ivar: _maxOutputDimensions
@property (nonatomic) BOOL quadraSupportEnabled; // ivar: _quadraSupportEnabled
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType; // ivar: _rawColorCalibrationsByPortType
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType; // ivar: _rawLensShadingCorrectionCoefficientsByPortType
@property (nonatomic) int stillImageFusionScheme; // ivar: _stillImageFusionScheme


-(void)dealloc;


@end


#endif