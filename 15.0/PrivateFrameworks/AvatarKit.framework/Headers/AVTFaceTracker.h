// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTFACETRACKER_H
#define AVTFACETRACKER_H

@class ARSession, ARConfiguration, NSPointerArray, NSLock, NSURL, AVDepthData;

#import <Foundation/Foundation.h>

#import "AVTFaceTrackingInfo.h"

@interface AVTFaceTracker : NSObject {
    ARSession *_arSession;
    ARConfiguration *_arConfiguration;
    NSPointerArray *_delegates;
    ? _captureDeviceFormatVideoDimensions;
    float _captureDeviceFormatVideoFieldOfView;
    NSLock *_trackingDataLock;
    ? _rawTransform;
    NSURL *_debugRecordingURL;
    BOOL _trackingIsPaused;
    BOOL _isActive;
    BOOL _shouldUseAudioData;
    BOOL _wantsPersonSegmentation;
    ? _perfPacket;
    CGFloat _lastARFrameTime;
    NSInteger _frame_id;
    CGFloat _timeBetweenARFrame;
    NSInteger _interfaceOrientation;
}


@property (readonly, nonatomic) CGFloat arDelegateTimestamp;
@property (readonly, nonatomic) CGFloat arFrameDeltaTime;
@property (readonly, nonatomic) CGFloat arFrameTimestamp;
@property (readonly, nonatomic) ARSession *arSession;
@property (readonly, nonatomic) NSInteger captureVideoOrientation; // ivar: _captureVideoOrientation
@property (nonatomic) BOOL directRetargetingMode; // ivar: _directRetargetingMode
@property (readonly, nonatomic) BOOL faceIsTracked; // ivar: _faceIsTracked
@property (readonly, nonatomic) NSInteger faceTrackingFrameID;
@property (readonly, nonatomic) AVTFaceTrackingInfo *faceTrackingInfo; // ivar: _trackingInfo
@property (nonatomic, getter=faceTrackingIsPaused) BOOL faceTrackingPaused; // ivar: _faceTrackingPaused
@property (copy) NSURL *faceTrackingRecordingURL;
@property (readonly, nonatomic) AVDepthData *fallBackDepthData; // ivar: _fallBackDepthData
@property (readonly, nonatomic) float fieldOfView;
@property (readonly) NSUInteger lastTrackingCaptureTimestamp; // ivar: _lastTrackingCaptureTimestamp
@property (readonly) CGFloat lastTrackingDate; // ivar: _lastTrackingDate
@property (nonatomic) BOOL limitRoll; // ivar: limitRoll
@property (readonly, nonatomic) BOOL lowLight; // ivar: _lowLight
@property (readonly, nonatomic) BOOL mirroredDepthData; // ivar: _mirroredDepthData
@property (readonly, nonatomic) ? rawTransform;
@property (readonly, nonatomic, getter=isSensorCovered) BOOL sensorCovered; // ivar: _isSensorCovered
@property (nonatomic) BOOL shouldConstrainHeadPose; // ivar: _shouldConstrainHeadPose
@property (nonatomic) BOOL shouldUseAudioData;
@property (nonatomic) BOOL skipUpdates; // ivar: _skipUpdates
@property (readonly, nonatomic) float videoAspectRatio;
@property ? videoDimensions;
@property (nonatomic) BOOL wantsPersonSegmentation;


-(void)addDelegate:(id)arg0 ;
-(void)copyTrackingData:(struct ? *)arg0 ;
-(void)enumerateDelegates:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionWasInterrupted:(id)arg0 ;
-(void)updateWithARFrame:(id)arg0 captureOrientation:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 deviceFormat:(id)arg3 mirroredDepthData:(BOOL)arg4 ;
-(void)updateWithARFrame:(id)arg0 captureOrientation:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 videoDimensions:(struct ? )arg3 fieldOfView:(float)arg4 mirroredDepthData:(BOOL)arg5 ;
-(void)updateWithARFrame:(id)arg0 worldAlignment:(NSInteger)arg1 fallBackDepthData:(id)arg2 captureOrientation:(NSInteger)arg3 interfaceOrientation:(NSInteger)arg4 videoDimensions:(struct ? )arg5 fieldOfView:(float)arg6 mirroredDepthData:(BOOL)arg7 ;


@end


#endif