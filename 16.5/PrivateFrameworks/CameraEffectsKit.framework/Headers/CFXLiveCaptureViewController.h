// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXLIVECAPTUREVIEWCONTROLLER_H
#define CFXLIVECAPTUREVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, NSMutableArray;
@protocol CFXRendererDelegate, JFXVideoCameraVideoDelegate, JFXVideoCameraAudioDelegate, UIGestureRecognizerDelegate, CFXLiveCaptureViewControllerDelegate, OS_dispatch_queue, JFXAnimojiTrackingLossDelegate;


#import "CFXEffectComposition.h"
#import "JFXOrientationMonitor.h"
#import "JFXImageView.h"
#import "JTImage.h"
#import "CFXRenderer.h"
#import "CFXThermalPolicyManager.h"
#import "JFXVideoWriter.h"

@interface CFXLiveCaptureViewController : UIViewController <CFXRendererDelegate, JFXVideoCameraVideoDelegate, JFXVideoCameraAudioDelegate, UIGestureRecognizerDelegate>



@property (nonatomic) NSInteger captureMode; // ivar: _captureMode
@property (retain, nonatomic) CFXEffectComposition *composition; // ivar: _composition
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) ? currentRenderPresentationTime;
@property (nonatomic) ? currentRenderPresentationTime_renderImageQ; // ivar: _currentRenderPresentationTime_renderImageQ
@property (weak, nonatomic) UIView *debugControlsView; // ivar: _debugControlsView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXLiveCaptureViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCapturing;
@property (nonatomic) BOOL isCapturingPhoto_recordingQ; // ivar: _isCapturingPhoto_recordingQ
@property (nonatomic) BOOL isCapturingVideo_recordingQ; // ivar: _isCapturingVideo_recordingQ
@property (readonly, nonatomic) BOOL livePlayerIsSaturated;
@property (readonly, nonatomic) UIView *localCameraViewfinderView;
@property (readonly, nonatomic) ? normalizedMinimumHitTestArea;
@property (retain, nonatomic) JFXOrientationMonitor *orientationMonitor; // ivar: _orientationMonitor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingQ; // ivar: _recordingQ
@property (retain, nonatomic) NSMutableArray *renderFrameCompletionBlocks; // ivar: _renderFrameCompletionBlocks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderImageQ; // ivar: _renderImageQ
@property (weak, nonatomic) JFXImageView *renderImageView; // ivar: _renderImageView
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderQ; // ivar: _renderQ
@property (readonly, nonatomic) JTImage *renderedImage;
@property (retain, nonatomic) JTImage *renderedImage_renderImageQ; // ivar: _renderedImage_renderImageQ
@property (retain, nonatomic) CFXRenderer *renderer_renderQ; // ivar: _renderer_renderQ
@property (readonly) Class superclass;
@property (retain, nonatomic) CFXThermalPolicyManager *thermalPolicyManager; // ivar: _thermalPolicyManager
@property (weak, nonatomic) NSObject<JFXAnimojiTrackingLossDelegate> *trackingLossDelegate; // ivar: _trackingLossDelegate
@property (readonly, nonatomic) UIView *uncroppedCameraViewfinderPlaceholderView;
@property (retain, nonatomic) UIView *uncroppedRenderImagePlaceHolderView; // ivar: _uncroppedRenderImagePlaceHolderView
@property (nonatomic) BOOL useLocalCameraViewfinder; // ivar: _useLocalCameraViewfinder
@property (retain, nonatomic) JFXVideoWriter *videoWriter; // ivar: _videoWriter


+(id)instantiate;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPoint )locationInCaptureViewForGestureRecognizer:(id)arg0 ;
-(void)CFX_createUncroppedCameraPlaceholderViewIfNecessary;
-(void)CFX_executeRenderCallbacksQueuedBeforeTime:(struct ? )arg0 ;
-(void)CFX_installGestures;
-(void)CFX_livePreviewDoubleTapped:(id)arg0 ;
-(void)CFX_livePreviewPanned:(id)arg0 ;
-(void)CFX_livePreviewPinched:(id)arg0 ;
-(void)CFX_livePreviewRotated:(id)arg0 ;
-(void)CFX_livePreviewTapped:(id)arg0 ;
-(void)CFX_setAnimationEnabledForOverlays:(BOOL)arg0 ;
-(void)CFX_setupVideoWriterWithAudio:(BOOL)arg0 completion:(id)arg1 ;
-(void)CFX_tearDownVideoWriter:(id)arg0 ;
-(void)cancelVideoRecording;
-(void)capturePhotoWithFlashMode:(NSInteger)arg0 completion:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)executeAfterNextFrameIsRendered:(id)arg0 ;
-(void)flushRenderer;
-(void)pauseRenderingCameraFrames;
-(void)processAudioSample:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)removeAllEffects:(id)arg0 ;
-(void)removeAllEffectsOfType:(id)arg0 completion:(id)arg1 ;
-(void)renderVideoFrame:(id)arg0 ;
-(void)renderer:(id)arg0 didPrepareToRenderFrameAtPresentationTime:(struct ? )arg1 ;
-(void)renderer:(id)arg0 didRenderFrame:(id)arg1 ;
-(void)resumeRenderingCameraFrames;
-(void)startButtonTouchUpInside:(id)arg0 ;
-(void)startRenderingCameraFrames;
-(void)startVideoRecordingWithFlashMode:(NSInteger)arg0 ;
-(void)stopButtonTouchUpInside:(id)arg0 ;
-(void)stopRenderingCameraFrames;
-(void)stopRenderingCameraFrames:(id)arg0 ;
-(void)stopVideoRecording:(id)arg0 ;
-(void)toggleDebugControlsView:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willDropCameraFrame;


@end


#endif