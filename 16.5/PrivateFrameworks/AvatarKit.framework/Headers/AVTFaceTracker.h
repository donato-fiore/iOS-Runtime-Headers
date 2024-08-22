// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTFACETRACKER_H
#define AVTFACETRACKER_H

@class ARSession, ARConfiguration, NSPointerArray, NSLock, NSURL, AVDepthData;

#import <Foundation/Foundation.h>

#import "AVTFaceTrackingInfo.h"

@interface AVTFaceTracker : NSObject {
    ARSession *_arSession;
    ARConfiguration *_arConfiguration;
    NSPointerArray *_delegates;
    AVTFaceTrackingInfo *_trackingInfo;
    NSLock *_trackingDataLock;
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
@property (readonly, nonatomic) CGSize cameraImageResolution; // ivar: _cameraImageResolution
@property (readonly, nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (readonly, nonatomic) NSInteger captureVideoOrientation; // ivar: _captureVideoOrientation
@property (nonatomic) BOOL directRetargetingMode; // ivar: _directRetargetingMode
@property (readonly, nonatomic) BOOL faceIsTracked; // ivar: _faceIsTracked
@property (readonly, nonatomic) NSInteger faceTrackingFrameID;
@property (readonly, nonatomic) AVTFaceTrackingInfo *faceTrackingInfo;
@property (nonatomic, getter=faceTrackingIsPaused) BOOL faceTrackingPaused; // ivar: _faceTrackingPaused
@property (copy) NSURL *faceTrackingRecordingURL;
@property (readonly, nonatomic) AVDepthData *fallBackDepthData; // ivar: _fallBackDepthData
@property (readonly) CGFloat lastUpdateTimestamp; // ivar: _lastUpdateTimestamp
@property (readonly) CGFloat lastUpdateWithTrackedFaceTimestamp; // ivar: _lastUpdateWithTrackedFaceTimestamp
@property (nonatomic) BOOL limitRoll; // ivar: limitRoll
@property (readonly, nonatomic) BOOL lowLight; // ivar: _lowLight
@property (readonly, nonatomic) BOOL mirroredDepthData; // ivar: _mirroredDepthData
@property (readonly, nonatomic) ? rawTransform;
@property (readonly, nonatomic, getter=isSensorCovered) BOOL sensorCovered; // ivar: _isSensorCovered
@property (nonatomic) BOOL shouldConstrainHeadPose; // ivar: _shouldConstrainHeadPose
@property (nonatomic) BOOL shouldUseAudioData;
@property (nonatomic) BOOL skipUpdates; // ivar: _skipUpdates
@property (nonatomic) BOOL wantsPersonSegmentation;


+(BOOL)usesInternalTrackingPipeline;
+(void)setUsesInternalTrackingPipeline:(BOOL)arg0 ;
-(BOOL)faceTrackingPaused;
-(BOOL)isActive;
-(NSInteger)interfaceOrientation;
-(id)init;
-(struct ? )projectionMatrixForViewportSize:(struct CGSize )arg0 zNear:(CGFloat)arg1 zFar:(CGFloat)arg2 ;
-(void)_setupARKitForDebugging:(BOOL)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)beginQuery;
-(void)configurationVideoFormatDidChange:(id)arg0 ;
-(void)copyTrackingData:(struct ? *)arg0 ;
-(void)decreaseFrameRate;
-(void)discardARFrameData;
-(void)endQuery;
-(void)enumerateDelegates:(id)arg0 ;
-(void)increaseFrameRateToMaximum;
-(void)removeDelegate:(id)arg0 ;
-(void)run;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionWasInterrupted:(id)arg0 ;
-(void)setInterfaceOrientation:(NSInteger)arg0 ;
-(void)setupARKit;
-(void)setupARKitForDebugging;
-(void)startRecording;
-(void)stop;
-(void)stopRecording;
-(void)updateWithARFrame:(id)arg0 captureOrientation:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 mirroredDepthData:(BOOL)arg3 ;
-(void)updateWithARFrame:(id)arg0 worldAlignment:(NSInteger)arg1 fallBackDepthData:(id)arg2 captureOrientation:(NSInteger)arg3 interfaceOrientation:(NSInteger)arg4 mirroredDepthData:(BOOL)arg5 ;


@end


#endif