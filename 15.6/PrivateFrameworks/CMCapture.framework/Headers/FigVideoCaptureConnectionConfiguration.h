// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGVIDEOCAPTURECONNECTIONCONFIGURATION_H
#define FIGVIDEOCAPTURECONNECTIONCONFIGURATION_H



#import "FigCaptureConnectionConfiguration.h"

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled; // ivar: _cameraIntrinsicMatrixDeliveryEnabled
@property (readonly) BOOL irisSDOFEnabled;
@property (readonly) BOOL irisVISEnabled;
@property (readonly) int irisVISMethod;
@property (nonatomic) BOOL livePhotoMetadataWritingEnabled; // ivar: _livePhotoMetadataWritingEnabled
@property (nonatomic) BOOL mirroringEnabled; // ivar: _mirroringEnabled
@property (nonatomic) int orientation; // ivar: _orientation
@property (nonatomic) int outputFormat; // ivar: _outputFormat
@property (nonatomic) int outputHeight; // ivar: _outputHeight
@property (nonatomic) int outputWidth; // ivar: _outputWidth
@property (nonatomic) BOOL physicalMirroringForMovieRecordingEnabled; // ivar: _physicalMirroringForMovieRecordingEnabled
@property (readonly) BOOL previewDepthDataDeliveryEnabled;
@property (readonly) BOOL previewDepthFilterRenderingEnabled;
@property (readonly) BOOL previewFilterRenderingEnabled;
@property (nonatomic) int retainedBufferCount; // ivar: _retainedBufferCount
@property (readonly) FigCaptureVideoTransform transform;
@property (nonatomic) int videoStabilizationMethod; // ivar: _videoStabilizationMethod


+(BOOL)cameraIntrinsicMatrixDeliveryEnabled:(id)arg0 doingFaceTracking:(BOOL)arg1 ;
+(BOOL)physicalMirroringForMovieRecordingEnabled:(id)arg0 ;
+(int)videoStabilizationMethod:(id)arg0 includeIris:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)requiresScalingForInputTransForm:(struct FigCaptureVideoTransform )arg0 nodeName:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;
-(struct FigCaptureVideoTransform )_transformWithSourceDimensions:(struct ? )arg0 forceSourceDimensions:(BOOL)arg1 ;
-(struct FigCaptureVideoTransform )depthDataTransform;
-(struct FigCaptureVideoTransform )depthDataTransformWithSourceDimensions;
-(void)dealloc;


@end


#endif