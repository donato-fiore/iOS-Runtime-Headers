// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARIMAGEDATA_H
#define ARIMAGEDATA_H

@class ADCameraCalibration, AVCameraCalibrationData, NSString, NSDate, AVDepthData, NSMutableDictionary, NSDictionary;
@protocol ARDictionaryCoding, ARImageSensorData, ARQATraceable, NSCopying, ARDaemonSecureCoding;

#import <Foundation/Foundation.h>

#import "ARFaceData.h"
#import "ARImageData.h"
#import "ARPointCloud.h"

@interface ARImageData : NSObject <ARDictionaryCoding, ARImageSensorData, ARQATraceable, NSCopying, ARDaemonSecureCoding>

 {
    ? _tangentialDistortion;
    ? _radialDistortion;
}


@property (nonatomic) float ISO; // ivar: _ISO
@property (retain, nonatomic) ADCameraCalibration *adCameraCalibration; // ivar: _adCameraCalibration
@property (retain, nonatomic) AVCameraCalibrationData *calibrationData; // ivar: _calibrationData
@property (nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (retain, nonatomic) NSString *cameraType; // ivar: _cameraType
@property (copy, nonatomic) NSDate *captureDate; // ivar: _captureDate
@property (nonatomic) NSInteger captureFramesPerSecond; // ivar: _captureFramesPerSecond
@property (nonatomic) CGFloat currentCaptureTimestamp; // ivar: _currentCaptureTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AVDepthData *depthData; // ivar: _depthData
@property (nonatomic) CGFloat depthDataTimestamp; // ivar: _depthDataTimestamp
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceOrientation; // ivar: _deviceOrientation
@property (nonatomic) CGFloat exposureDuration; // ivar: _exposureDuration
@property (nonatomic) float exposureTargetOffset; // ivar: _exposureTargetOffset
@property (retain, nonatomic) NSMutableDictionary *extrinsicsMap; // ivar: _extrinsicsMap
@property (retain, nonatomic) ARFaceData *faceData; // ivar: _faceData
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (retain, nonatomic) ARImageData *latestUltraWideImage; // ivar: _latestUltraWideImage
@property (nonatomic) NSUInteger lensType; // ivar: _lensType
@property (nonatomic, getter=isMirrored) BOOL mirrored; // ivar: _mirrored
@property (readonly, nonatomic) ARImageData *originalImage;
@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (retain, nonatomic) ARPointCloud *pointCloud; // ivar: _pointCloud
@property ? radialDistortion;
@property (nonatomic) NSInteger rawDeviceOrientation; // ivar: _rawDeviceOrientation
@property (nonatomic, getter=isSecondary) BOOL secondary; // ivar: _secondary
@property (nonatomic) float signalToNoiseRatio; // ivar: _signalToNoiseRatio
@property (readonly) Class superclass;
@property ? tangentialDistortion;
@property (nonatomic) float temperature; // ivar: _temperature
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat timestampOfSynchronizedWideImageData; // ivar: _timestampOfSynchronizedWideImageData
@property (readonly, nonatomic) NSDictionary *tracingEntry;
@property (nonatomic) *__CVBuffer visionData; // ivar: _visionData
@property (nonatomic) ? visionTransform; // ivar: _visionTransform


+(id)captureDateFromPresentationTimestamp:(struct ? )arg0 session:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPixelBufferPointerRecursively:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithImageData:(id)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 captureFramePerSecond:(NSInteger)arg1 captureDevice:(id)arg2 captureSession:(id)arg3 timestamp:(struct ? )arg4 intrinsics:(struct ? )arg5 exif:(id)arg6 ;
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 captureFramePerSecond:(NSInteger)arg1 captureDevice:(id)arg2 captureSession:(id)arg3 ;
-(struct ? )extrinsicMatrix4x4ToDeviceType:(id)arg0 ;
-(struct ? )extrinsicMatrixToDeviceType:(id)arg0 ;
-(void)addExtrinsicMatrix4x4:(struct ? )arg0 toDeviceType:(id)arg1 ;
-(void)addExtrinsicMatrix:(struct ? )arg0 toDeviceType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif