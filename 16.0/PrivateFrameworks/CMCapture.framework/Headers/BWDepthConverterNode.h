// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEPTHCONVERTERNODE_H
#define BWDEPTHCONVERTERNODE_H

@class NSDictionary, NSString;
@protocol DepthProcessor, OS_dispatch_queue;


#import "BWNode.h"
#import "BWStillImageNodeConfiguration.h"

@interface BWDepthConverterNode : BWNode {
    BOOL _streamingGDRFilteringEnabled;
    BOOL _stillGDRFilteringSupportEnabled;
    BOOL _streamingSMPFilteringEnabled;
    BOOL _stillSMPFilteringSupportEnabled;
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    BOOL _forceCPath;
    ? _inputDepthDimensions;
    *opaqueCMFormatDescription _outputFormatDescription;
    unsigned int _outputFormat;
    ? _outputDimensions;
    ? _identityExtrinsicMatrix;
    int _depthAccuracy;
    BOOL _depthLensDistortionCorrectionPolynomialsAvailable;
    ? _depthLensDistortionCorrectionBasePolynomial;
    ? _depthLensDistortionCorrectionDynamicPolynomial;
    float _depthRelativePixelSizeInMicrons;
    int _baseRotationDegrees;
    int _rotationDegrees;
    BOOL _mirroringEnabled;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    BOOL _providesUnfilteredDepthAsAttachedMedia;
    *opaqueCMFormatDescription _unfilteredDepthFormatDescription;
    *OpaqueVTPixelTransferSession _unfilteredDepthTransferSession;
    BOOL _depthIsAlwaysHighQuality;
    BOOL _depthOriginatesFromNeuralNetwork;
    *__CVBuffer _fixedPointScaledIntermediateBuffer;
    *__CVBuffer _fixedPointRotatedIntermediateBuffer;
    *__CVBuffer _filteringInputBuffer;
    *__CVBuffer _streamingFilteringScaledDepthInputBuffer;
    *__CVBuffer _streamingFilteringScaledDepthOutputBuffer;
    *__CVBuffer _filteringScaledYUVBuffer;
    *__CVBuffer _filteringOutputBuffer;
    BOOL _conversionAfterFilteringRequired;
    BOOL _depthFromInfrared;
    NSString *_depthProcessorClassName;
    *CMPhotoScaleAndRotateSession _scaler;
    id<DepthProcessor> *_depthProcessor;
    int _depthProcessorVersion;
    int _depthBufferOriginalExifOrientation;
    int _depthBufferFinalExifOrientation;
    NSObject<OS_dispatch_queue> *_depthProcessorWorkerQueue;
    BWStillImageNodeConfiguration *_stillImageNodeConfiguration;
}




+(void)initialize;
-(BOOL)mirroringEnabled;
-(BOOL)providesUnfilteredDepthAsAttachedMedia;
-(BOOL)stillGDRFilteringSupportEnabled;
-(BOOL)stillSMPFilteringSupportEnabled;
-(BOOL)streamingGDRFilteringEnabled;
-(BOOL)streamingSMPFilteringEnabled;
-(id)initWithStillImageNodeConfiguration:(id)arg0 cameraInfoByPortType:(id)arg1 sensorIDDictionary:(id)arg2 rgbPersonSegmentationEnabled:(BOOL)arg3 depthIsAlwaysHighQuality:(BOOL)arg4 depthOriginatesFromNeuralNetwork:(BOOL)arg5 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)baseRotationDegrees;
-(int)horizontalSensorBinningFactor;
-(int)rotationDegrees;
-(int)verticalSensorBinningFactor;
-(struct ? )outputDimensions;
-(unsigned int)outputFormat;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setBaseRotationDegrees:(int)arg0 ;
-(void)setHorizontalSensorBinningFactor:(int)arg0 ;
-(void)setMirroringEnabled:(BOOL)arg0 ;
-(void)setOutputDimensions:(struct ? )arg0 ;
-(void)setOutputFormat:(unsigned int)arg0 ;
-(void)setProvidesUnfilteredDepthAsAttachedMedia:(BOOL)arg0 ;
-(void)setRotationDegrees:(int)arg0 ;
-(void)setStillGDRFilteringSupportEnabled:(BOOL)arg0 ;
-(void)setStillSMPFilteringSupportEnabled:(BOOL)arg0 ;
-(void)setStreamingGDRFilteringEnabled:(BOOL)arg0 ;
-(void)setStreamingSMPFilteringEnabled:(BOOL)arg0 ;
-(void)setVerticalSensorBinningFactor:(int)arg0 ;


@end


#endif