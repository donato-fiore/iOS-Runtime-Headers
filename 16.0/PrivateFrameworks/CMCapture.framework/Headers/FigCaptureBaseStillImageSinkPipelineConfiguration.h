// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREBASESTILLIMAGESINKPIPELINECONFIGURATION_H
#define FIGCAPTUREBASESTILLIMAGESINKPIPELINECONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FigCaptureSinkConfiguration.h"

@interface FigCaptureBaseStillImageSinkPipelineConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowedToModifyInputBuffers; // ivar: _allowedToModifyInputBuffers
@property (nonatomic) BOOL allowsMultipleInflightCaptures; // ivar: _allowsMultipleInflightCaptures
@property (nonatomic) BOOL clientIsCameraOrDerivative; // ivar: _clientIsCameraOrDerivative
@property (nonatomic) ? depthDataDimensions; // ivar: _depthDataDimensions
@property (nonatomic) int horizontalSensorBinningFactor; // ivar: _horizontalSensorBinningFactor
@property (nonatomic) BOOL inputIs10Bit; // ivar: _inputIs10Bit
@property (nonatomic) float maxSupportedFrameRate; // ivar: _maxSupportedFrameRate
@property (nonatomic) int motionAttachmentsSource; // ivar: _motionAttachmentsSource
@property (nonatomic) int noiseReductionAndFusionScheme; // ivar: _noiseReductionAndFusionScheme
@property (nonatomic) int outputColorSpaceProperties; // ivar: _outputColorSpaceProperties
@property (nonatomic) unsigned int outputPixelFormat; // ivar: _outputPixelFormat
@property (nonatomic) float portraitEffectsMatteMainImageDownscalingFactor; // ivar: _portraitEffectsMatteMainImageDownscalingFactor
@property (retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration; // ivar: _sinkConfiguration
@property (nonatomic) BOOL stillImageStabilizationSupported; // ivar: _stillImageStabilizationSupported
@property (nonatomic) BOOL usesHighEncodingPriority; // ivar: _usesHighEncodingPriority
@property (nonatomic) int verticalSensorBinningFactor; // ivar: _verticalSensorBinningFactor


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif