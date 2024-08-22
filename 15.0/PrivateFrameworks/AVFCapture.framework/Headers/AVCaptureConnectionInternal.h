// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTURECONNECTIONINTERNAL_H
#define AVCAPTURECONNECTIONINTERNAL_H

@class NSMutableArray, AVWeakReference, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "AVCaptureDeviceInput.h"
#import "AVCaptureDevice.h"
#import "AVCaptureInputPort.h"

@interface AVCaptureConnectionInternal : NSObject {
    NSMutableArray *inputPorts;
    AVCaptureDeviceInput *sourceDeviceInput;
    AVCaptureDevice *sourceDevice;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    BOOL hasActiveObservers;
    BOOL active;
    BOOL enabled;
    int changeSeed;
    AVCaptureInputPort *audioInputPort;
    NSMutableArray *audioChannels;
    NSArray *audioChannelLevels;
    NSInteger lastGetAudioLevelsTime;
    AVCaptureInputPort *videoInputPort;
    AVCaptureInputPort *metadataInputPort;
    AVCaptureInputPort *metadataItemInputPort;
    AVCaptureInputPort *depthDataInputPort;
    AVCaptureInputPort *visionDataInputPort;
    AVCaptureInputPort *pointCloudDataInputPort;
    AVCaptureInputPort *cameraCalibrationDataInputPort;
    BOOL videoMirroringSupported;
    BOOL automaticallyAdjustsVideoMirroring;
    BOOL videoMirrored;
    BOOL videoOrientationSupported;
    NSInteger videoOrientation;
    ? videoMinFrameDuration;
    ? videoMaxFrameDuration;
    CGFloat videoMaxScaleAndCropFactor;
    CGFloat videoScaleAndCropFactor;
    int videoRetainedBufferCountHint;
    NSInteger preferredVideoStabilizationMode;
    BOOL videoStabilizationEnabled;
    NSInteger activeVideoStabilizationMode;
    BOOL hasVideoMinFrameDurationObserver;
    NSString *connectionID;
    BOOL cameraIntrinsicMatrixDeliverySupported;
    BOOL cameraIntrinsicMatrixDeliveryEnabled;
    BOOL livePhotoMetadataWritingEnabled;
    BOOL debugMetadataSidecarFileEnabled;
    NSArray *supportedVideoMirroringMethodsForMovieRecording;
    NSInteger videoMirroringMethodForMovieRecording;
}






@end


#endif