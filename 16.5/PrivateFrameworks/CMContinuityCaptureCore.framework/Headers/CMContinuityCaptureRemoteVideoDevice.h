// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTUREREMOTEVIDEODEVICE_H
#define CMCONTINUITYCAPTUREREMOTEVIDEODEVICE_H

@class NSMutableArray, AVCapturePhotoOutput, NSMutableDictionary, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCVideoStream, AVCStreamInput, AVCMediaStreamNegotiator, NSData, NSString, NSDate, NSDictionary, NSArray, AVCaptureDevice;
@protocol CMContinuityCaptureRemoteDevice, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CMContinuityCaptureConfiguration.h"
#import "CMContinuityCaptureStreamFormat.h"
#import "CMContinuityCaptureRemoteClient.h"
#import "CMContinuityCaptureDeviceCapabilities.h"
#import "CMContinuityCaptureRemoteCompositeDevice.h"

@interface CMContinuityCaptureRemoteVideoDevice : NSObject <CMContinuityCaptureRemoteDevice>

 {
    NSMutableArray *_connections;
    CMContinuityCaptureConfiguration *_activeConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _streaming;
    unsigned int _frameRateThrottledByThermalLevelOrPowerMode;
    CMContinuityCaptureStreamFormat *_activeFormat;
    AVCapturePhotoOutput *_photoOutput;
    NSMutableDictionary *_photoRequests;
    os_unfair_lock_s _photoRequestsLock;
    NSInteger _videoBufferOutputCounter;
    NSInteger _videoBufferDropCounter;
    AVCaptureDeviceInput *_videoDataInput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCVideoStream *_avcVideoStream;
    AVCStreamInput *_avcStreamInput;
    NSObject<OS_dispatch_group> *_pendingAVCActivationGroup;
    NSObject<OS_dispatch_group> *_pendingAVCTeardownGroup;
    NSObject<OS_dispatch_group> *_pendingAVCNegotiationGroup;
    CMContinuityCaptureRemoteClient *_client;
    CMContinuityCaptureDeviceCapabilities *_capabilities;
    NSInteger _entity;
    CMContinuityCaptureRemoteCompositeDevice *_compositeDevice;
    AVCMediaStreamNegotiator *_avcStreamNegotiator;
    NSData *_currentAnswer;
    NSMutableDictionary *_cmControlByName;
    NSString *_lastStreamStartTime;
    NSDate *_lastStreamStopTimeInDate;
    NSObject<OS_dispatch_group> *_streamStreamGroup;
    BOOL _avCaptureSessionStarted;
    id *_startAVCaptureTimeoutBlock;
    BOOL _pendingFirstSendStreamLogPrintAfterSetup;
    id *_bufferFailureCheckBlock;
    NSUInteger _numberOfAVCFramesDropped;
    NSUInteger _lastStreamGenerationID;
    NSDate *_lastStreamFirstFrameDispatchTimeInDate;
    NSMutableArray *_streamSessionLogs;
    NSMutableArray *_controlSetLogs;
    BOOL _avcActive;
    unsigned int _throttledEffectFrameRate;
    unsigned int _streamingSessionID;
    NSDictionary *_pendingCenterStageRectOfInterestControl;
}


@property (readonly, retain) CMContinuityCaptureConfiguration *activeConfiguration;
@property (readonly, retain) CMContinuityCaptureDeviceCapabilities *capabilities;
@property (readonly, getter=isCenterStageRunning) BOOL centerStageRunning;
@property (readonly, retain) CMContinuityCaptureRemoteClient *client;
@property (readonly, weak) CMContinuityCaptureRemoteCompositeDevice *compositeDevice;
@property (readonly, retain) NSArray *controls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger entity;
@property (readonly) NSUInteger hash;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly, retain) AVCaptureDevice *videoDevice; // ivar: _videoDevice


-(BOOL)_configureWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)_deviceFormat:(id)arg0 isCompatibleWithConfiguration:(id)arg1 requiringMultiCamSupport:(BOOL)arg2 ;
-(BOOL)_shouldPrintDroppedSampleBufferLog:(NSInteger)arg0 ;
-(BOOL)_shouldPrintSampleBufferLog:(NSInteger)arg0 ;
-(BOOL)_updateCenterStageRectOfInterest:(id)arg0 ;
-(BOOL)configureWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)forceCenterStage:(BOOL)arg0 ;
-(BOOL)streaming;
-(id)createAVCVideoStreamForSidecarStream:(id)arg0 ;
-(id)initWithCompositeDevice:(id)arg0 entity:(NSInteger)arg1 capabilities:(id)arg2 client:(id)arg3 ;
-(id)newVideoStreamConfigWithIsWired:(BOOL)arg0 key:(id)arg1 streamInputID:(NSInteger)arg2 format:(id)arg3 frameRate:(unsigned int)arg4 ;
-(void)_abort:(id)arg0 ;
-(void)_observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)_postEvent:(id)arg0 entity:(NSInteger)arg1 ;
-(void)_setFaceDrivenAFEnabled:(BOOL)arg0 forCaptureDevice:(id)arg1 ;
-(void)_setValueForControl:(id)arg0 completion:(id)arg1 ;
-(void)_startStream:(id)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_stopStream:(NSInteger)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_terminateAVCSession:(id)arg0 ;
-(void)_throttleFrameRateByThermalLevelPowerMode;
-(void)_unthrottleFrameRateByThermalLevelPowerMode;
-(void)_updateActiveMaxFrameRate:(unsigned int)arg0 ;
-(void)_updateActiveMinFrameRate:(unsigned int)arg0 ;
-(void)_updateControlStatus;
-(void)_updatePhotoOutputConfigs;
-(void)_updatePortraitEffect:(BOOL)arg0 ;
-(void)_updateStudioLighting:(BOOL)arg0 ;
-(void)_updateVideoZoomFactor:(CGFloat)arg0 ;
-(void)abort:(id)arg0 ;
-(void)captureOutput:(id)arg0 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishCaptureForResolvedSettings:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishProcessingPhoto:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureStillImage:(id)arg0 entity:(NSInteger)arg1 completion:(id)arg2 ;
-(void)checkThermalLevelPowerModeAndToggleFrameRateThrottling;
-(void)clearAVCArtifacts;
-(void)debugInfo:(id)arg0 ;
-(void)didStartStreamInput:(id)arg0 ;
-(void)didStopStreamInput:(id)arg0 ;
-(void)dispatchFrame:(struct opaqueCMSampleBuffer *)arg0 entity:(NSInteger)arg1 completion:(id)arg2 ;
-(void)handleAVCNegotiation:(NSInteger)arg0 data:(id)arg1 ;
-(void)logControlSetSummary:(id)arg0 ;
-(void)logStreamSessionSummary;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)postAVCStreamInterruption;
-(void)postDataEvent:(id)arg0 entity:(NSInteger)arg1 data:(id)arg2 ;
-(void)postEvent:(id)arg0 entity:(NSInteger)arg1 ;
-(void)preStartAVCaptureSessionForConfiguration:(id)arg0 ;
-(void)restoreConfigurationFrameRate;
-(void)serverDidDie;
-(void)setFaceDrivenAFEnabled:(BOOL)arg0 ;
-(void)setValueForControl:(id)arg0 completion:(id)arg1 ;
-(void)setupControls;
-(void)startAVCInputForConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)startStream:(id)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
// -(void)stopAVCInput:(id)arg0 option:(unk)arg1  ;
-(void)stopStream:(NSInteger)arg0 option:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)stream:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)streamDidRTCPTimeOut:(id)arg0 ;
-(void)streamDidRTPTimeOut:(id)arg0 ;
-(void)streamDidServerDie:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;
-(void)terminateAVCSession:(id)arg0 ;
-(void)updateControlStatus;


@end


#endif