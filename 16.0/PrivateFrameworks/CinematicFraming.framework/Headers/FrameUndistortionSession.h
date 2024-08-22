// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FRAMEUNDISTORTIONSESSION_H
#define FRAMEUNDISTORTIONSESSION_H

@class NSString;
@protocol FramingSpaceManager, MTLDevice, MTLCommandQueue, MTLLibrary;

#import <Foundation/Foundation.h>

#import "CinematicFramingSessionOptions.h"

@interface FrameUndistortionSession : NSObject <FramingSpaceManager>

 {
    int _cameraOrientation;
    ? _gravity;
    BOOL _firstGravityVectorRegistered;
    id<MTLDevice> *_metalDevice;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLLibrary> *_library;
    id<MTLComputePipelineState>" _pipelineComputeStates;
    *__CVMetalTextureCache _cvMetalTextureCacheRef;
    ? _backProjectedFramingSpaceViewport;
}


@property (readonly, nonatomic) float additionalCameraRotation; // ivar: _additionalCameraRotation
@property (readonly, nonatomic) ? backProjectedFramingSpaceViewport;
@property (readonly, nonatomic) ? calibrationParams; // ivar: _calibrationParameters
@property (nonatomic) int cameraOrientation;
@property (nonatomic) BOOL cameraOrientationCorrectionEnabled; // ivar: _cameraOrientationCorrectionEnabled
@property (readonly, nonatomic) CGRect defaultFramingSpaceViewport;
@property (nonatomic) unsigned int exifOrientation; // ivar: _exifOrientation
@property (readonly, nonatomic) CGRect framingSpaceBounds;
@property ? gravity;
@property (readonly, nonatomic) BOOL imageTransformIsValid;
@property (readonly, nonatomic) BOOL isFrontCamera; // ivar: _isFrontCamera
@property (readonly, nonatomic) float maxWidth;
@property (readonly, nonatomic) int mode; // ivar: _mode
@property (readonly, nonatomic) ? normalizedFramingSpaceLandscapeLeftToInputImageTransformMatrix;
@property (readonly, nonatomic) int numCCWRotationsFromInputToFramingSpace; // ivar: _numCCWRotationsFromInputToFramingSpace
@property (retain, nonatomic) CinematicFramingSessionOptions *options; // ivar: _options
@property (readonly, nonatomic) ? outputDimensions; // ivar: _outputDimensions
@property (nonatomic) int outputType; // ivar: _outputType
@property (readonly, nonatomic) NSString *portType; // ivar: _portType
@property (readonly, nonatomic) int sensorID; // ivar: _sensorID


-(float)_getHeightDerivativeForWidth:(float)arg0 widthDerivative:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2 ;
-(float)_getHeightForWidth:(float)arg0 outputAspectRatioInDeviceOrientation:(float)arg1 ;
-(float)_getWidthForHeight:(float)arg0 outputAspectRatioInDeviceOrientation:(float)arg1 ;
-(float)getHeightDerivativeForWidth:(float)arg0 widthDerivative:(float)arg1 ;
-(float)getHeightForWidth:(float)arg0 ;
-(float)getWidthForHeight:(float)arg0 ;
-(id)_compileComputeShader:(id)arg0 pixelFormat:(NSUInteger)arg1 ;
-(id)initWithOutputDimensions:(struct ? )arg0 mode:(int)arg1 portType:(id)arg2 ;
-(int)_cachedTexturesFromPixelBuffer:(struct __CVBuffer *)arg0 isOptimized:(BOOL)arg1 textures:(struct ? *)arg2 ;
-(int)_computeNumberOfCCWRotationsFromInputToFramingSpaceForOrientation:(int)arg0 ;
-(int)_createComputePipelinesForShaders:(id)arg0 ;
-(int)_getTransformShaderParameters:(NSUInteger)arg0 isLuma:(BOOL)arg1 pixelRatio:(*unsigned int)arg2 pipelineIndexToUse:(*int)arg3 ;
-(int)processBuffer:(struct __CVBuffer *)arg0 cropRect:(struct CGRect )arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 ;
-(int)registerCalibrationData:(id)arg0 ;
-(int)zRotationsFromNaturalOrientationForCamera:(int)arg0 ;
-(struct ? )projectRectInFramingSpaceLandscapeLeftToInputImageCoordinates:(struct CGRect )arg0 ;
-(struct ? )projectRectInInputImageToFramingSpaceLandscapeLeftCoordinates:(struct CGRect )arg0 ;
-(struct CGRect )_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect )arg0 ;
-(struct CGRect )_projectRectInFramingSpaceLandscapeLeft:(struct CGRect )arg0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect )arg1 ;
-(struct CGRect )_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect )arg0 calibrationParameters:(struct ? )arg1 ;
-(struct CGRect )adjustDisplayRectToFitInFramingSpace:(struct CGRect )arg0 ;
-(struct CGRect )computeNewCoordinatesInOrientation:(int)arg0 forViewportInCurrentOrientation:(struct CGRect )arg1 ;
-(struct CGRect )defaultFramingSpaceViewport:(float)arg0 ;
-(struct CGRect )projectRectInFramingSpace:(struct CGRect )arg0 toDisplayRectInFramingSpace:(struct CGRect )arg1 ;
-(struct CGRect )warpRectInInputImageCoordinatesToFramingSpace:(struct CGRect )arg0 ;
-(void)registerAdditionalCameraRotation:(float)arg0 ;
-(void)registerGravityX:(float)arg0 y:(float)arg1 z:(float)arg2 ;
-(void)registerOutputType:(int)arg0 ;
-(void)registerSensorID:(int)arg0 ;
-(void)warpMetadataInInputImageCoordinatesToFramingSpace:(id)arg0 ;


@end


#endif