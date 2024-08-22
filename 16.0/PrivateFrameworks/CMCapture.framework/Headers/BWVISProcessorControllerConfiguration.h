// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWVISPROCESSORCONTROLLERCONFIGURATION_H
#define BWVISPROCESSORCONTROLLERCONFIGURATION_H

@class NSData, NSDictionary, NSArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "BWPixelBufferPool.h"

@interface BWVISProcessorControllerConfiguration : NSObject

@property (nonatomic) BOOL applyFrameCropOffset; // ivar: _applyFrameCropOffset
@property (nonatomic) BOOL attachEstimatedMotionVector; // ivar: _attachEstimatedMotionVector
@property (nonatomic) BOOL attachStabilizedOutputCenterQuaternion; // ivar: _attachStabilizedOutputCenterQuaternion
@property (nonatomic) BOOL attachStabilizedTrajectoryHomography; // ivar: _attachStabilizedTrajectoryHomography
@property (nonatomic) BOOL blurBorderPixels; // ivar: _blurBorderPixels
@property (retain, nonatomic) NSData *cameraExtrinsicMatrix; // ivar: _cameraExtrinsicMatrix
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: _cameraInfoByPortType
@property (nonatomic) unsigned int cinematicLookAheadFrameCount; // ivar: _cinematicLookAheadFrameCount
@property (nonatomic) float cinematicLookAheadTime; // ivar: _cinematicLookAheadTime
@property (retain, nonatomic) NSArray *distortionCompensationEnabledPortTypes; // ivar: _distortionCompensationEnabledPortTypes
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore; // ivar: _emitSampleBufferSemaphore
@property (nonatomic) unsigned int extendedOutputRowsToFill; // ivar: _extendedOutputRowsToFill
@property (nonatomic) BOOL frameRateConversionEnabled; // ivar: _frameRateConversionEnabled
@property (nonatomic) int gpuPriority; // ivar: _gpuPriority
@property (retain, nonatomic) NSDictionary *inputPixelBufferAttributes; // ivar: _inputPixelBufferAttributes
@property (nonatomic) CGRect livePhotoCleanOutputRect; // ivar: _livePhotoCleanOutputRect
@property (nonatomic) float minDistanceForBravoParallaxShift; // ivar: _minDistanceForBravoParallaxShift
@property (nonatomic) BOOL onlyGenerateTransformsParameters; // ivar: _onlyGenerateTransformsParameters
@property (retain, nonatomic) BWPixelBufferPool *outputDepthPixelBufferPool; // ivar: _outputDepthPixelBufferPool
@property (retain, nonatomic) NSDictionary *outputPixelBufferAttributes; // ivar: _outputPixelBufferAttributes
@property (retain, nonatomic) BWPixelBufferPool *outputPixelBufferPool; // ivar: _outputPixelBufferPool
@property (nonatomic) BOOL p3ToBT2020ConversionEnabled; // ivar: _p3ToBT2020ConversionEnabled
@property (retain, nonatomic) NSDictionary *sensorIDDict; // ivar: _sensorIDDict
@property (nonatomic) int smoothingMethod; // ivar: _smoothingMethod
@property (nonatomic) BOOL sphereCorrectionEnabled; // ivar: _sphereCorrectionEnabled
@property (nonatomic) BOOL sphereVideoEnabled; // ivar: _sphereVideoEnabled
@property (nonatomic) int transformPlatform; // ivar: _transformPlatform
@property (nonatomic) BOOL useISPMotionData; // ivar: _useISPMotionData
@property (retain, nonatomic) NSDictionary *videoGreenGhostMitigationParameters; // ivar: _videoGreenGhostMitigationParameters
@property (retain, nonatomic) NSDictionary *videoSTFParameters; // ivar: _videoSTFParameters
@property (nonatomic) BOOL videoStabilizationDisabled; // ivar: _videoStabilizationDisabled
@property (nonatomic) int videoStabilizationStrength; // ivar: _videoStabilizationStrength
@property (nonatomic) BOOL zoomSmoothingEnabled; // ivar: _zoomSmoothingEnabled


-(void)dealloc;


@end


#endif