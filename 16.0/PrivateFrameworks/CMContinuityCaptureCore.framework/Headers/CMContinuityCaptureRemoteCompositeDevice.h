// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTUREREMOTECOMPOSITEDEVICE_H
#define CMCONTINUITYCAPTUREREMOTECOMPOSITEDEVICE_H

@class AVCaptureVideoPreviewLayer, NSMutableDictionary, NSUUID, AVCaptureDeviceInput, NSMutableArray, NSSet, AVCaptureSession, NSArray, NSString;
@protocol CMContinuityCaptureThermalMonitorDelegate, ContinuityCaptureControlDelegate, ContinuityCaptureStreamDelegate, ContinuityCaptureEventDelegate, ContinuityCaptureAVCNegotiationDataDelegate, ContinuityCaptureClockSynchronizationDelegate, ContinuityCaptureStillImageCaptureDelegate, OS_dispatch_queue, ContinuityCaptureCommandNotificationDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CMContinuityCaptureCapabilities.h"
#import "CMContinuityCaptureConfiguration.h"
#import "CMContinuityCaptureThermalMonitor.h"
#import "CMContinuityCapturePongSoundManager.h"
#import "CMContinuityCaptureRemoteClient.h"

@interface CMContinuityCaptureRemoteCompositeDevice : NSObject <CMContinuityCaptureThermalMonitorDelegate, ContinuityCaptureControlDelegate, ContinuityCaptureStreamDelegate, ContinuityCaptureEventDelegate, ContinuityCaptureAVCNegotiationDataDelegate, ContinuityCaptureClockSynchronizationDelegate, ContinuityCaptureStillImageCaptureDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    NSMutableDictionary *_captureDeviceByEntityType;
    CMContinuityCaptureCapabilities *_capabilities;
    NSUUID *_sidecarIdentifier;
    NSMutableDictionary *_cmControlByName;
    AVCaptureDeviceInput *_videoCameraInput;
    BOOL _streaming;
    id<ContinuityCaptureCommandNotificationDelegate> *_commandNotificationDelegate;
    BOOL _throttlingBackWide;
    *IONotificationPort _ioNotificationPort;
    unsigned int _serviceNotification;
    CMContinuityCaptureConfiguration *_preStartedStreamConfig;
    id *_falsePreStartStreamRecoveryBlock;
    NSMutableArray *_entitiesToAbort;
    CMContinuityCaptureThermalMonitor *_thermalMonitor;
    int _throttlingFrameRateLevel;
    NSUInteger _thermalLevel;
    NSUInteger _sessionID;
    BOOL _forceCenterStageEnabled;
    NSObject<OS_dispatch_group> *_debugInfoLogBlock;
    BOOL _registeredBatteryNotifications;
    CMContinuityCapturePongSoundManager *_pongSoundManager;
    id *_statusHandler;
}


@property (readonly) NSSet *activeAVCaptureStreamEntitySet; // ivar: _activeAVCaptureStreamEntitySet
@property (readonly, retain) AVCaptureSession *audioCaptureSession; // ivar: _audioCaptureSession
@property (readonly, retain) AVCaptureSession *captureSession; // ivar: _captureSession
@property (readonly, retain) CMContinuityCaptureRemoteClient *client; // ivar: _client
@property (readonly, retain) NSArray *continuityCaptureDevices;
@property (readonly, retain) NSArray *controls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger deskViewCameraMode;
@property (readonly) NSUInteger hash;
@property (readonly, retain) NSUUID *sidecarIdentifier;
@property (readonly) BOOL streaming;
@property (readonly) Class superclass;
@property (readonly) int throttlingFrameRateLevel;


-(BOOL)_configureAudioCaptureSessionForInput:(id)arg0 andOutput:(id)arg1 ;
-(BOOL)_configureCaptureSessionForConnections:(id)arg0 ;
-(BOOL)_startAudioCaptureSession:(*id)arg0 ;
-(BOOL)_startVideoCaptureSessionIfNeeded:(*id)arg0 ;
-(BOOL)_stopAudioCaptureSession:(*id)arg0 ;
-(BOOL)_stopVideoCaptureSessionIfNeeded:(*id)arg0 ;
-(BOOL)_stopVideoStreamForConnections:(id)arg0 error:(*id)arg1 ;
-(BOOL)centerStageForceEnabled;
-(BOOL)configureAudioCaptureSessionForInput:(id)arg0 andOutput:(id)arg1 ;
-(BOOL)configureCaptureSessionForConnections:(id)arg0 ;
-(BOOL)forceCenterStage:(BOOL)arg0 ;
-(BOOL)isCenterStageRunning;
-(BOOL)isDeskCamRunning;
-(BOOL)isUSBConnected;
-(BOOL)prewarmDeskCam;
-(BOOL)setupCaptureDevices:(id)arg0 multiCamRequired:(*BOOL)arg1 ;
-(BOOL)setupClient:(id)arg0 ;
-(BOOL)startAudioCaptureSession:(*id)arg0 ;
-(BOOL)startVideoCaptureSessionIfNeeded:(*id)arg0 ;
-(BOOL)stopAudioCaptureSession:(*id)arg0 ;
-(BOOL)stopVideoCaptureSessionIfNeeded:(*id)arg0 ;
-(BOOL)stopVideoStreamForConnections:(id)arg0 error:(*id)arg1 ;
-(id)initWithSidecarRequest:(id)arg0 videoPreviewLayer:(id)arg1 commandNotificationDelegate:(id)arg2 sessionID:(NSUInteger)arg3 statusHandler:(id)arg4 ;
-(unsigned int)getThrottlingFrameRateByThermalLevelAndLowPowerModeWithDefault:(unsigned int)arg0 ;
-(void)_abort:(id)arg0 ;
-(void)_executeAbort:(id)arg0 ;
-(void)_handleThermalLevelLowPowerModeChange;
-(void)_logDebugInfo:(id)arg0 ;
-(void)_observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)_postEvent:(id)arg0 entity:(NSInteger)arg1 ;
-(void)_postNotification:(id)arg0 value:(id)arg1 ;
-(void)_registerForBatteryNotifications;
-(void)_removeConnections:(id)arg0 ;
-(void)_reset:(id)arg0 ;
-(void)_restartStream:(id)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_startStream:(id)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_stopStream:(NSInteger)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_terminateAVCSession:(id)arg0 ;
-(void)_throttleFrameRateIfNeeded;
-(void)_unregisterBatteryNotifications;
-(void)abort:(id)arg0 ;
-(void)activateClient:(id)arg0 ;
-(void)captureStillImage:(id)arg0 entity:(NSInteger)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)handleAVCNegotiation:(NSInteger)arg0 data:(id)arg1 ;
-(void)handleSynchronizeAudioClockCompletion;
-(void)invalidate;
-(void)logDebugInfo:(id)arg0 ;
-(void)lowPowerModeChanged:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)postEvent:(id)arg0 entity:(NSInteger)arg1 ;
-(void)postNotification:(id)arg0 value:(id)arg1 ;
-(void)preStartAVCaptureSessionForConfiguration:(id)arg0 ;
-(void)preStartStreamForConfiguration:(id)arg0 ;
-(void)removeConnections:(id)arg0 ;
-(void)reset:(id)arg0 ;
-(void)restartStream:(id)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)setCenterStageForceEnabled:(BOOL)arg0 ;
-(void)setDefaultVideoCameraFaceDrivenAFEnabled:(BOOL)arg0 ;
-(void)setValueForControl:(id)arg0 completion:(id)arg1 ;
-(void)setupControls;
-(void)startStream:(id)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)stopStream:(NSInteger)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)tearDownPrewarmedDeskCamIfNeeded;
-(void)terminateAVCSession:(id)arg0 ;
-(void)thermalLevelChanged:(NSUInteger)arg0 ;
-(void)throttleFrameRateIfNeeded;


@end


#endif