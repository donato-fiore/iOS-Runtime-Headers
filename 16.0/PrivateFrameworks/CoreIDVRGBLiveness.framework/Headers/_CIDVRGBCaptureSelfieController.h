// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CIDVRGBCAPTURESELFIECONTROLLER_H
#define _CIDVRGBCAPTURESELFIECONTROLLER_H

@class PADFrame, NSURL, NSTimer, NSMutableArray;
@protocol CIDVRGBCaptureSelfieController, CIDVRGBAVSessionManagerDelegate, OS_dispatch_queue, CIDVRGBAVSessionManager, PADFrameQualityMonitor, CIDVRGBImageQualityAnalyzer, PADClassifier, PADAuditDataRepository, CIDVRGBCaptureSelfieControllerDelegate;

#import <Foundation/Foundation.h>

#import "CIDVRGBCaptureUIConfig.h"
#import "CIDVRGBCameraPreview.h"

@interface _CIDVRGBCaptureSelfieController : NSObject <CIDVRGBCaptureSelfieController, CIDVRGBAVSessionManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CIDVRGBCaptureUIConfig *_config;
    id<CIDVRGBAVSessionManager> *_avSession;
    id<PADFrameQualityMonitor> *_quality;
    id<CIDVRGBImageQualityAnalyzer> *_lightweightQuality;
    id<PADClassifier> *_classifier;
    id<PADAuditDataRepository> *_audit;
    CGRect _regionOfInterest;
    PADFrame *_selfie;
    NSURL *_videoURL;
    CGFloat _selfieStart;
    NSTimer *_livenessTimer;
    NSUInteger _stitchFramesToIgnore;
    NSUInteger _analyticStitchFramesToIgnore;
    NSInteger _taOptions;
    NSInteger _state;
    BOOL _canceling;
    NSMutableArray *_luxValues;
    NSMutableArray *_buttonPressTimestamps;
}


@property (nonatomic) NSInteger analyticsState; // ivar: _analyticsState
@property (copy, nonatomic) id *completionHandler; // ivar: completionHandler
@property (weak, nonatomic) NSObject<CIDVRGBCaptureSelfieControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic) PADClassifierFrameOptions frameOptions; // ivar: frameOptions
@property (retain, nonatomic) CIDVRGBCameraPreview *preview; // ivar: _preview
@property (nonatomic) NSInteger state;


-(BOOL)_shouldPresentErrorAlertForError:(id)arg0 ;
-(BOOL)isLowDiskSpaceError:(id)arg0 ;
-(id)_compressSelfie:(id)arg0 skipCompression:(BOOL)arg1 ;
-(id)_reorientImage:(id)arg0 ;
-(id)_selfieBufferToImage:(id)arg0 ;
-(id)_viewController;
-(id)initWithConfig:(id)arg0 ;
-(struct CGRect )_reorientRect:(struct CGRect )arg0 inContainerOfSize:(struct CGSize )arg1 fromOrientation:(unsigned int)arg2 ;
-(void)_finishLiveness;
-(void)_invalidateLivenessTimer;
-(void)_performDebugAnalysisForFrame:(id)arg0 ;
-(void)_performImageQualityAnalysisForFrame:(id)arg0 ;
-(void)_performLightweightImageQualityAnalysisForFrame:(id)arg0 ;
-(void)_performLivenessAnalysisForFrame:(id)arg0 ;
-(void)_recordLuxLevel;
-(void)_reorientSelfieFrame:(id)arg0 ;
-(void)_startLiveness;
-(void)_startLivenessTimer;
-(void)_stopRecordingLivenessVideo;
-(void)_updateRegionOfInterestForFrame:(id)arg0 ;
-(void)beginIgnoreStitchCounter;
-(void)beginNewGesture;
-(void)bootstrap;
-(void)cancelWithCompletion:(id)arg0 ;
-(void)cancelWithError:(id)arg0 andCompletion:(id)arg1 ;
-(void)captureSelfieUsingFlashMode:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didCaptureFrame:(id)arg0 ;
-(void)didCapturePhoto:(id)arg0 error:(id)arg1 ;
-(void)didCaptureVideoAtURL:(id)arg0 error:(id)arg1 ;
-(void)fetchNewLivenessConfigWithCompletion:(id)arg0 ;
-(void)finishRecording;
-(void)gestureCompleted;
-(void)pauseLivenessGesture;
-(void)prepareToResumeLivenessGesture;
-(void)restartLiveness;
-(void)restartSelfieCapture;
-(void)resumeLivenessGesture;
-(void)skipLivenessGesture:(BOOL)arg0 ;
-(void)startLiveness;
-(void)submitSelfie;


@end


#endif