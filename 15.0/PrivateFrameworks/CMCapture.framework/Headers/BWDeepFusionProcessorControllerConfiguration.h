// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEEPFUSIONPROCESSORCONTROLLERCONFIGURATION_H
#define BWDEEPFUSIONPROCESSORCONTROLLERCONFIGURATION_H

@class NSDictionary;


#import "BWStillImageProcessorConfiguration.h"
#import "BWVideoFormat.h"

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat; // ivar: _inputFormat
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType; // ivar: _rawColorCalibrationsByPortType
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType; // ivar: _rawLensShadingCorrectionCoefficientsByPortType
@property (nonatomic) BOOL semanticRenderingEnabled; // ivar: _semanticRenderingEnabled
@property (nonatomic) int stillImageFusionScheme; // ivar: _stillImageFusionScheme


-(void)dealloc;


@end


#endif