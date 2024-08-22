// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCCAMERACONNECTION_H
#define CCCAMERACONNECTION_H

@class NSXPCConnection, NSString, FigCameraViewfinder, FigCameraViewfinderSession, NSDate;
@protocol CCCameraConnectionProtocol, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate, OS_dispatch_source, CCCameraConnectionDelegate;

#import <Foundation/Foundation.h>

#import "CCCameraConnectionInternal.h"

@interface CCCameraConnection : NSObject <CCCameraConnectionProtocol, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate>

 {
    CCCameraConnectionInternal *_internal;
    NSXPCConnection *_xpc;
    id *_orientationChangeObserver;
    NSString *_previewEndpoint;
    FigCameraViewfinder *_remoteViewfinder;
    FigCameraViewfinderSession *_remoteViewfinderSession;
    NSUInteger _desiredPreviewState;
    NSUInteger _currentPreviewState;
    NSUInteger _interruptionCount;
    NSObject<OS_dispatch_source> *_zoomTimer;
    float _pendingZoomAmount;
    float _lastSentZoomAmount;
    int _deviceConnectedNotificationToken;
    int _deviceDisconnectedNotificationToken;
    BOOL _burstInProgress;
    BOOL _capturing;
    NSDate *_captureStartDate;
    NSInteger _shallowDepthOfFieldStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CCCameraConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_burstSupport;
-(BOOL)_isShowingLivePreview;
-(BOOL)_shouldReportEvent;
-(BOOL)_supportsMomentCapture;
-(BOOL)_toggleCameraDeviceSupport;
-(BOOL)_zoomSupport;
-(BOOL)isOpen;
-(BOOL)isPreviewConnected;
-(CGFloat)_zoomAmount;
-(NSInteger)_captureDevice;
-(NSInteger)_captureMode;
-(NSInteger)_currentOrientation;
-(NSInteger)_flashMode;
-(NSInteger)_flashSupport;
-(NSInteger)_hdrMode;
-(NSInteger)_hdrSupport;
-(NSInteger)_irisMode;
-(NSInteger)_irisSupport;
-(id)_supportedCaptureDevices;
-(id)_supportedCaptureModes;
-(id)init;
-(void)_checkin;
-(void)_handleInterruption;
-(void)_handleInvalidation;
-(void)_performPreviewStateTransitionsIfNeeded;
-(void)_zoomTimerFired;
-(void)burstCaptureDidStop;
-(void)burstCaptureNumberOfPhotosDidChange:(NSUInteger)arg0 ;
-(void)burstCaptureWillStart;
-(void)cameraViewfinder:(id)arg0 viewfinderSessionDidBegin:(id)arg1 ;
-(void)cameraViewfinder:(id)arg0 viewfinderSessionDidEnd:(id)arg1 ;
-(void)cameraViewfinderSession:(id)arg0 didCapturePhotoWithStatus:(int)arg1 thumbnailData:(id)arg2 timestamp:(struct ? )arg3 ;
-(void)cameraViewfinderSession:(id)arg0 previewStreamDidCloseWithStatus:(int)arg1 ;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg0 ;
-(void)captureDeviceDidChange;
-(void)captureDeviceDidChange:(NSInteger)arg0 ;
-(void)close;
-(void)closePreview;
-(void)countdownCanceled;
-(void)dealloc;
-(void)didStartCaptureTimer;
-(void)didStopCapture;
-(void)didUpdateShallowDepthOfFieldStatus:(NSInteger)arg0 ;
-(void)didUpdateThumbnailWithData:(id)arg0 isVideo:(BOOL)arg1 ;
-(void)flashModeDidChange;
-(void)hdrModeDidChange;
-(void)irisModeDidChange;
-(void)modeSelected:(NSInteger)arg0 ;
-(void)open;
-(void)openPreview;
-(void)photoTaken:(id)arg0 ;
-(void)showingLivePreviewDidChange;
-(void)switchedOrientation:(NSInteger)arg0 ;
-(void)takePhotoWithCountdown:(NSUInteger)arg0 ;
-(void)willStartCapturing;
-(void)xpc_beginBurstCaptureWithReply:(id)arg0 ;
-(void)xpc_cancelCountdown;
-(void)xpc_endBurstCaptureWithReply:(id)arg0 ;
-(void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)arg0 reply:(id)arg1 ;
-(void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(BOOL)arg0 reply:(id)arg1 ;
-(void)xpc_setCaptureDevice:(NSInteger)arg0 reply:(id)arg1 ;
-(void)xpc_setCaptureMode:(NSInteger)arg0 reply:(id)arg1 ;
-(void)xpc_setFlashMode:(NSInteger)arg0 ;
-(void)xpc_setFocusPoint:(id)arg0 ;
-(void)xpc_setHDRMode:(NSInteger)arg0 ;
-(void)xpc_setIrisMode:(NSInteger)arg0 ;
-(void)xpc_setPreviewEndpoint:(id)arg0 ;
-(void)xpc_setZoom:(float)arg0 reply:(id)arg1 ;
-(void)xpc_startCaptureWithMode:(NSInteger)arg0 reply:(id)arg1 ;
-(void)xpc_stopCaptureWithReply:(id)arg0 ;
-(void)xpc_suspend;
-(void)xpc_toggleCameraDevice;
-(void)zoomDidChange:(CGFloat)arg0 ;


@end


#endif