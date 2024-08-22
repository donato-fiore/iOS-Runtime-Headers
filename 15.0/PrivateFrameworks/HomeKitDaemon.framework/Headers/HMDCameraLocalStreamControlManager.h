// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERALOCALSTREAMCONTROLMANAGER_H
#define HMDCAMERALOCALSTREAMCONTROLMANAGER_H

@class NSString;
@protocol HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol;


#import "HMDCameraStreamControlManager.h"
#import "HMDCameraMediaConfigGenerator.h"
#import "HMDCameraStreamMetrics.h"
#import "HMDCameraLocalStreamSession.h"
#import "HMDCameraSupportedConfigurationCache.h"

@interface HMDCameraLocalStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>



@property (readonly) HMDCameraMediaConfigGenerator *configGenerator; // ivar: _configGenerator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isSendingStream) BOOL sendingStream;
@property (readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;
@property (retain) HMDCameraLocalStreamSession *streamSession; // ivar: _streamSession
@property (readonly) Class superclass;
@property (readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache; // ivar: _supportedConfigCache


+(id)logCategory;
-(BOOL)_validateSetupEndPointReadWithWrite;
-(id)_calculateMTU;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 accessory:(id)arg5 streamManagementService:(id)arg6 supportedConfigCache:(id)arg7 streamSession:(id)arg8 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 reachabilityPath:(NSUInteger)arg3 device:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 accessory:(id)arg7 streamManagementService:(id)arg8 remoteCapabilities:(id)arg9 supportedConfigCache:(id)arg10 streamPreference:(id)arg11 ;
-(void)_addServerStreamSession;
-(void)_cleanUpStreamSessionWithError:(id)arg0 ;
-(void)_getSupportedConfigurations;
-(void)_handleSetupEndPointRead:(id)arg0 ;
-(void)_handleSupportedParameters:(id)arg0 ;
-(void)_negotiateStream;
-(void)_reconfigureStream:(id)arg0 ;
-(void)_reconfigureStreams;
-(void)_removeServerStreamSession;
-(void)_sendSetupEndPointRead;
-(void)_sendUpdatedConfiguration;
-(void)_startStreamWithRemoteSettings:(id)arg0 ;
-(void)_startStreamingManager;
-(void)_stopCurrentStreamSessionWithError:(id)arg0 ;
-(void)_streamStarted;
-(void)_writeReselectConfig;
-(void)_writeSelectConfig:(id)arg0 reconfigure:(BOOL)arg1 ;
-(void)_writeSetupEndPoint;
-(void)_writeStartConfig;
-(void)_writeStopConfig:(id)arg0 ;
-(void)dealloc;
-(void)deviceConnectionSender:(id)arg0 didEndSessionWithError:(id)arg1 ;
-(void)deviceConnectionSender:(id)arg0 didSetUpWithError:(id)arg1 ;
-(void)negotiateStream;
-(void)reconfigureStream:(id)arg0 ;
-(void)sessionInitiator:(id)arg0 didEndSessionWithError:(id)arg1 ;
-(void)sessionInitiator:(id)arg0 didSetUpWithError:(id)arg1 ;
-(void)setUpRemoteConnectionWithDevice:(id)arg0 ;
-(void)startStreamWithRemoteSettings:(id)arg0 ;
-(void)stopStreamWithError:(id)arg0 ;
-(void)streamingManager:(id)arg0 didStartStream:(id)arg1 slotIdentifier:(id)arg2 ;
-(void)streamingManagerDidNetworkDeteriorate:(id)arg0 ;
-(void)streamingManagerDidNetworkImprove:(id)arg0 ;
-(void)streamingManagerDidReceiveFirstFrame:(id)arg0 audioStreamSetting:(NSUInteger)arg1 aspectRatio:(id)arg2 slotIdentifier:(id)arg3 ;
-(void)streamingManagerDidStartRelay:(id)arg0 ;
-(void)streamingManagerDidStopStream:(id)arg0 error:(id)arg1 ;
-(void)streamingManagerDidUpdateConfiguration:(id)arg0 ;
-(void)updateAudioSetting:(NSUInteger)arg0 ;
-(void)updateAudioVolume:(id)arg0 callback:(id)arg1 ;


@end


#endif