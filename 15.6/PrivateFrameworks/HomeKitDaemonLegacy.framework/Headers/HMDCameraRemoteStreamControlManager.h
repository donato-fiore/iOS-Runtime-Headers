// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAREMOTESTREAMCONTROLMANAGER_H
#define HMDCAMERAREMOTESTREAMCONTROLMANAGER_H

@class NSNumber, NSString, NSUUID;
@protocol HMDStreamingManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol;


#import "HMDCameraStreamControlManager.h"
#import "HMDCameraMediaConfigGenerator.h"
#import "HMDCameraResidentMessageHandler.h"
#import "HMDCameraStreamMetrics.h"
#import "HMDCameraRemoteStreamSession.h"

@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>



@property (readonly, copy) NSNumber *aspectRatio;
@property (readonly) NSUInteger audioStreamSetting;
@property (readonly) HMDCameraMediaConfigGenerator *configGenerator; // ivar: _configGenerator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // ivar: _profileUniqueIdentifier
@property (readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // ivar: _residentMessageHandler
@property (readonly, copy) NSNumber *slotIdentifier;
@property (readonly) HMDCameraStreamMetrics *streamMetrics;
@property (retain) HMDCameraRemoteStreamSession *streamSession; // ivar: _streamSession
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 accessory:(id)arg5 streamManagementService:(id)arg6 profileUniqueIdentifier:(id)arg7 residentMessageHandler:(id)arg8 streamSession:(id)arg9 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 reachabilityPath:(NSUInteger)arg3 device:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 accessory:(id)arg7 streamManagementService:(id)arg8 remoteCapabilities:(id)arg9 profileUniqueIdentifier:(id)arg10 residentMessageHandler:(id)arg11 remoteAccessDevice:(id)arg12 streamPreference:(id)arg13 ;
-(void)_cleanUpStreamSessionWithError:(id)arg0 ;
-(void)_dispatchReconfigureToResident:(id)arg0 ;
-(void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg0 audioSSRC:(id)arg1 ;
-(void)_idsSessionCreatedAndConfigNegotiated;
-(void)_negotiateStream;
-(void)_reconfigureStream:(id)arg0 ;
-(void)_reconfigureStreams;
-(void)_relaySessionStarted:(id)arg0 ;
-(void)_sendStopMessageToResident;
-(void)_sendUpdatedConfiguration;
-(void)_setParametersSelected:(id)arg0 ;
-(void)_setUpRemoteConnectionWithDevice:(id)arg0 ;
-(void)_startStreamWithRemoteSettings:(id)arg0 ;
-(void)_stopCurrentStreamSessionWithError:(id)arg0 ;
-(void)_streamStarted;
-(void)dealloc;
-(void)deviceConnectionReceiver:(id)arg0 didEndSessionWithError:(id)arg1 ;
-(void)deviceConnectionReceiver:(id)arg0 didSetUpWithError:(id)arg1 ;
-(void)deviceConnectionSender:(id)arg0 didEndSessionWithError:(id)arg1 ;
-(void)deviceConnectionSender:(id)arg0 didSetUpWithError:(id)arg1 ;
-(void)negotiateStream;
-(void)reconfigureStream:(id)arg0 ;
-(void)sessionReceiver:(id)arg0 didEndSessionWithError:(id)arg1 ;
-(void)sessionReceiver:(id)arg0 didSetUpWithError:(id)arg1 ;
-(void)setUpRemoteConnectionWithDevice:(id)arg0 ;
-(void)startStreamWithRemoteSettings:(id)arg0 ;
-(void)stopStreamWithError:(id)arg0 ;
-(void)streamingManager:(id)arg0 didStartStreamWithError:(id)arg1 ;
-(void)streamingManagerDidNetworkDeteriorate:(id)arg0 ;
-(void)streamingManagerDidNetworkImprove:(id)arg0 ;
-(void)streamingManagerDidReceiveFirstFrame:(id)arg0 ;
-(void)streamingManagerDidStopStream:(id)arg0 error:(id)arg1 ;
-(void)streamingManagerDidUpdateConfiguration:(id)arg0 ;
-(void)updateAudioSetting:(NSUInteger)arg0 ;
-(void)updateAudioVolume:(id)arg0 callback:(id)arg1 ;


@end


#endif