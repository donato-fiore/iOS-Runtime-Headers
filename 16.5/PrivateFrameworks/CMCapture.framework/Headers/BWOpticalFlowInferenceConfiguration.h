// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWOPTICALFLOWINFERENCECONFIGURATION_H
#define BWOPTICALFLOWINFERENCECONFIGURATION_H

@class NSString;


#import "BWInferenceConfiguration.h"

@interface BWOpticalFlowInferenceConfiguration : BWInferenceConfiguration {
    BOOL _propagateColorInput;
}


@property (nonatomic) NSString *attachedMediaKeyForPropagatedColorInput; // ivar: _attachedMediaKeyForPropagatedColorInput
@property (nonatomic) NSUInteger concurrencyWidth; // ivar: _concurrencyWidth
@property (nonatomic) BOOL cropColorInputToPrimaryCaptureRect; // ivar: _cropColorInputToPrimaryCaptureRect
@property (nonatomic) ? forceIntermediateDimensions; // ivar: _forceIntermediateDimensions
@property (nonatomic) ? inputDimensions; // ivar: _inputDimensions
@property (nonatomic) unsigned int inputRotationAngle; // ivar: _inputRotationAngle
@property (nonatomic) ? outputDimensions; // ivar: _outputDimensions
@property (nonatomic) NSString *portType; // ivar: _portType




@end


#endif