// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    BOOL _workIntervalHintsEnabled;
    *work_interval _workInterval;
    BWStillImageNodeConfiguration *_stillImageNodeConfiguration;
}




+(void)initialize;
-(BOOL)_isStillFilteringEnabled;
-(BOOL)_isStreamingFilteringEnabled;
-(BOOL)_streamingFilteringRequiresScaledDepth;
-(BOOL)mirroringEnabled;
-(BOOL)providesUnfilteredDepthAsAttachedMedia;
-(BOOL)stillGDRFilteringSupportEnabled;
-(BOOL)stillSMPFilteringSupportEnabled;
-(BOOL)streamingGDRFilteringEnabled;
-(BOOL)streamingSMPFilteringEnabled;
-(id)_depthMetadataDictionaryFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 orientation:(unsigned int)arg1 stillGDRFilteringRequested:(BOOL)arg2 ;
-(id)initWithStillImageNodeConfiguration:(id)arg0 cameraInfoByPortType:(id)arg1 sensorIDDictionary:(id)arg2 rgbPersonSegmentationEnabled:(BOOL)arg3 depthIsAlwaysHighQuality:(BOOL)arg4 depthOriginatesFromNeuralNetwork:(BOOL)arg5 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)_computeConversionParametersFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 convertOptionsOut:(struct ? *)arg1 ;
-(int)_convertDepthDisparityToFloat_C:(struct __CVBuffer *)arg0 dst:(struct __CVBuffer *)arg1 options:(struct ? *)arg2 ;
-(int)_convertDepthDisparityToFloat_NEON:(struct __CVBuffer *)arg0 dst:(struct __CVBuffer *)arg1 options:(struct ? *)arg2 ;
-(int)_generateAndAttachUnfilteredDepthToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 depthOutputPixelBuffer:(struct __CVBuffer *)arg1 depthOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 ;
-(int)_loadAndConfigureDepthProcessorClass:(id)arg0 ;
-(int)_parseCameraInfo;
-(int)_resolveFilteringTypeWithStillGDRFilteringRequested:(BOOL)arg0 ;
-(int)baseRotationDegrees;
-(int)convertToFloatAndRotate:(struct opaqueCMSampleBuffer *)arg0 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 ;
-(int)filterDepthPixelBuffer:(struct __CVBuffer *)arg0 outputDepthPixelBuffer:(struct __CVBuffer *)arg1 yuvImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 depthSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 filteringType:(int)arg4 ;
-(int)horizontalSensorBinningFactor;
-(int)rotateAndScaleImagePixelBuffer:(struct __CVBuffer *)arg0 depthPixelBuffer:(struct __CVBuffer *)arg1 to:(struct __CVBuffer *)arg2 rotationAngle:(int)arg3 flip:(BOOL)arg4 ;
-(int)rotationDegrees;
-(int)verticalSensorBinningFactor;
-(struct ? )outputDimensions;
-(unsigned int)outputFormat;
-(void)_updateOutputRequirements;
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