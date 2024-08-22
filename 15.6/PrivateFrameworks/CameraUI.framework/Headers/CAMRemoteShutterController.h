// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMREMOTESHUTTERCONTROLLER_H
#define CAMREMOTESHUTTERCONTROLLER_H

@class NSArray, CCCameraConnection, NSString;
@protocol CCCameraConnectionDelegate, CAMRemoteShutterDelegate;

#import <Foundation/Foundation.h>

#import "CAMMotionController.h"

@interface CAMRemoteShutterController : NSObject <CCCameraConnectionDelegate>



@property (readonly, nonatomic) CAMMotionController *_motionController; // ivar: __motionController
@property (retain, nonatomic) NSArray *availableCaptureModes; // ivar: _availableCaptureModes
@property (nonatomic) NSInteger captureDevice; // ivar: _captureDevice
@property (nonatomic) NSInteger captureMode; // ivar: _captureMode
@property (nonatomic, getter=isCapturingTimelapse) BOOL capturingTimelapse; // ivar: _capturingTimelapse
@property (nonatomic, getter=isCapturingVideo) BOOL capturingVideo; // ivar: _capturingVideo
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) CCCameraConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMRemoteShutterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger flashMode; // ivar: _flashMode
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger hdrMode; // ivar: _hdrMode
@property (nonatomic) NSInteger irisMode; // ivar: _irisMode
@property (nonatomic) NSInteger shallowDepthOfFieldStatus; // ivar: _shallowDepthOfFieldStatus
@property (nonatomic, getter=isShowingPreview) BOOL showingPreview; // ivar: _showingPreview
@property (readonly) Class superclass;
@property (nonatomic) CGFloat zoomAmount; // ivar: _zoomAmount


-(BOOL)cameraConnectionBeginBurstCapture:(id)arg0 ;
-(BOOL)cameraConnectionBurstSupport:(id)arg0 ;
-(BOOL)cameraConnectionEndBurstCapture:(id)arg0 ;
-(BOOL)cameraConnectionIsMirrored:(id)arg0 ;
-(BOOL)cameraConnectionIsShowingLivePreview:(id)arg0 ;
-(BOOL)cameraConnectionStartCapture:(id)arg0 ;
-(BOOL)cameraConnectionStopCapture:(id)arg0 ;
-(BOOL)cameraConnectionSupportsMomentCapture:(id)arg0 ;
-(BOOL)cameraConnectionToggleCameraDeviceSupport:(id)arg0 ;
-(BOOL)cameraConnectionZoomSupport:(id)arg0 ;
-(CGFloat)cameraConnectionZoomAmount:(id)arg0 ;
-(NSInteger)_convertCaptureDevice:(NSInteger)arg0 ;
-(NSInteger)_convertMode:(NSInteger)arg0 ;
-(NSInteger)_currentCaptureDevice;
-(NSInteger)_currentMode;
-(NSInteger)cameraConnectionCaptureDevice:(id)arg0 ;
-(NSInteger)cameraConnectionCaptureMode:(id)arg0 ;
-(NSInteger)cameraConnectionFlashMode:(id)arg0 ;
-(NSInteger)cameraConnectionFlashSupport:(id)arg0 ;
-(NSInteger)cameraConnectionHDRMode:(id)arg0 ;
-(NSInteger)cameraConnectionHDRSupport:(id)arg0 ;
-(NSInteger)cameraConnectionIrisMode:(id)arg0 ;
-(NSInteger)cameraConnectionIrisSupport:(id)arg0 ;
-(NSInteger)cameraConnectionOrientation:(id)arg0 ;
-(id)cameraConnectionSupportedCaptureDevices:(id)arg0 ;
-(id)cameraConnectionSupportedCaptureModes:(id)arg0 ;
-(id)initWithCaptureConfiguration:(id)arg0 motionController:(id)arg1 ;
-(void)_captureOrientationDidChange:(id)arg0 ;
-(void)_createConnectionIfNeeded;
-(void)_enterBackground:(id)arg0 ;
-(void)_enterForeground:(id)arg0 ;
-(void)_sendMode;
-(void)applyCaptureConfiguration:(id)arg0 ;
-(void)burstCaptureDidStop;
-(void)burstCaptureNumberOfPhotosDidChange:(NSUInteger)arg0 ;
-(void)burstCaptureWillStart;
-(void)cameraConnection:(id)arg0 setFocusPoint:(struct CGPoint )arg1 ;
-(void)cameraConnection:(id)arg0 setHDRMode:(NSInteger)arg1 ;
-(void)cameraConnection:(id)arg0 takePhotoWithCountdown:(NSUInteger)arg1 ;
-(void)cameraConnectionCancelCountdown:(id)arg0 ;
-(void)cameraConnectionSuspend:(id)arg0 ;
-(void)cameraConnectionToggleCameraDevice:(id)arg0 ;
-(void)closeConnection;
-(void)countdownCanceled;
-(void)createConnectionIfNecessary;
-(void)dealloc;
-(void)didStartCaptureTimer;
-(void)didStopCapture;
-(void)openConnection;
-(void)sendThumbnailData:(id)arg0 isVideo:(BOOL)arg1 ;
-(void)sendThumbnailImage:(id)arg0 isVideo:(BOOL)arg1 ;
-(void)willStartCapturing;


@end


#endif