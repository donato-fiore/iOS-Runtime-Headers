// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTURESESSION_H
#define AVCAPTURESESSION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "AVCaptureSessionInternal.h"

@interface AVCaptureSession : NSObject {
    AVCaptureSessionInternal *_internal;
}


@property (nonatomic) BOOL automaticallyConfiguresApplicationAudioSession;
@property (nonatomic) BOOL automaticallyConfiguresCaptureDeviceForWideColor;
@property (readonly, nonatomic) NSArray *connections;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic) *OpaqueCMClock masterClock;
@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (copy, nonatomic) NSString *sessionPreset;
@property (readonly, nonatomic) *OpaqueCMClock synchronizationClock;
@property (nonatomic) BOOL usesApplicationAudioSession;


+(BOOL)_isConfiguringProperty:(id)arg0 forDevice:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfMasterClock;
+(BOOL)automaticallyNotifiesObserversOfRunning;
+(BOOL)automaticallyNotifiesObserversOfSynchronizationClock;
+(id)allSessionPresets;
+(id)dotString;
+(void)_finishConfiguringProperty:(id)arg0 forDevice:(id)arg1 ;
+(void)_startConfiguringProperty:(id)arg0 forDevice:(id)arg1 ;
+(void)initialize;
-(BOOL)_addConnection:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)_addInputWithNoConnections:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)_addOutputWithNoConnections:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)_addVideoPreviewLayer:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)_addVideoPreviewLayerWithNoConnection:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)_buildAndRunGraph:(BOOL)arg0 ;
-(BOOL)_canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_canAddInput:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_canAddOutput:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_canAddVideoPreviewLayer:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_shouldAutomaticallyAddConnection:(id)arg0 ;
-(BOOL)_startFigCaptureSession;
-(BOOL)_stopFigCaptureSession;
-(BOOL)canAddConnection:(id)arg0 ;
-(BOOL)canAddInput:(id)arg0 ;
-(BOOL)canAddOutput:(id)arg0 ;
-(BOOL)canSetSessionPreset:(id)arg0 ;
-(BOOL)isBeingConfigured;
-(BOOL)isOverCost:(*id)arg0 ;
-(BOOL)likelyToRecordProResMovies;
-(BOOL)notifiesOnMainThread;
-(BOOL)videoHDREnabledForDevice:(id)arg0 format:(id)arg1 sessionPreset:(id)arg2 ;
-(id)_connectionsForNewInputPort:(id)arg0 ;
-(id)_connectionsForNewOutput:(id)arg0 ;
-(id)_connectionsForNewVideoPreviewLayer:(id)arg0 ;
-(id)_figCaptureSessionConfiguration;
-(id)_outputWithClass:(Class)arg0 forSourceDevice:(id)arg1 ;
-(id)_stopError;
-(id)description;
-(id)init;
-(id)initWithAssumedIdentity:(id)arg0 ;
-(id)sessionVideoCaptureDevices;
-(id)valueForUndefinedKey:(id)arg0 ;
-(int)_createFigCaptureSession;
-(void)_addFakeOutputsIfNeededForCenterStageToSessionConfiguration:(id)arg0 ;
-(void)_beginConfiguration;
-(void)_commitConfiguration;
-(void)_determineSynchronizationClock;
-(void)_handleBackgroundBlurActiveChangedForDevice:(id)arg0 ;
-(void)_handleCenterStageActiveChangedForDevice:(id)arg0 ;
-(void)_handleConfigurationCommittedNotificationWithPayload:(id)arg0 ;
-(void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg0 ;
-(void)_handleDidStartRunningNotificationWithPayload:(id)arg0 ;
-(void)_handleDidStopRunningNotificationWithPayload:(id)arg0 ;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_handleServerConnectionDiedNotification;
-(void)_makeConfigurationLive:(id)arg0 ;
-(void)_notifyMediaServicesError;
-(void)_notifySessionStarted;
-(void)_notifySessionStopped;
-(void)_postRuntimeError:(id)arg0 ;
-(void)_rebuildGraph;
-(void)_reconnectAfterServerConnectionDied;
-(void)_removeAllPreviewLayers;
-(void)_removeConnection:(id)arg0 ;
-(void)_removeConnectionsForInputPort:(id)arg0 ;
-(void)_removeInput:(id)arg0 ;
-(void)_removeVideoPreviewLayer:(id)arg0 ;
-(void)_stopAndTearDownGraph;
-(void)_teardownFigCaptureSession;
-(void)_updateCameraCalibrationDataDeliveryEnabledForAllConnectedSourceDevices;
-(void)_updateCameraCalibrationDataDeliveryEnabledForSourceDevice:(id)arg0 ;
-(void)_updateDepthDataDeliveryEnabledForAllConnectedSourceDevices;
-(void)_updateDepthDataDeliveryEnabledForSourceDevice:(id)arg0 ;
-(void)_updateDeviceActiveFormatsAndActiveConnections;
-(void)_updateVideoHDREnabledForDevice:(id)arg0 forceResetVideoHDRSuspended:(BOOL)arg1 ;
-(void)addConnection:(id)arg0 ;
-(void)addInput:(id)arg0 ;
-(void)addInputWithNoConnections:(id)arg0 ;
-(void)addOutput:(id)arg0 ;
-(void)addOutputWithNoConnections:(id)arg0 ;
-(void)beginConfiguration;
-(void)cancelForegroundAutoResumeAfterDate:(id)arg0 ;
-(void)commitConfiguration;
-(void)dealloc;
-(void)handleVideoInputDevice:(id)arg0 activeDepthDataFormatChanged:(id)arg1 ;
-(void)handleVideoInputDevice:(id)arg0 activeFormatChanged:(id)arg1 ;
-(void)informSessionMembersOfChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeConnection:(id)arg0 ;
-(void)removeInput:(id)arg0 ;
-(void)removeOutput:(id)arg0 ;
-(void)startRunning;
-(void)stopRunning;


@end


#endif