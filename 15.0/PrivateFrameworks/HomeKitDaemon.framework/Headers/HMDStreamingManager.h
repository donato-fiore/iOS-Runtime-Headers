// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSTREAMINGMANAGER_H
#define HMDSTREAMINGMANAGER_H

@class HMFObject, AVCRemoteVideoClient, NSString, NSNumber;
@protocol HMDVideoStreamInterfaceDelegate, HMDAudioStreamInterfaceDelegate, AVCRemoteVideoClientDelegate, HMFLogging, HMDStreamingManagerDelegate, OS_dispatch_queue;


#import "HMDAudioStreamInterface.h"
#import "HMDCameraStreamSessionID.h"
#import "HMDCameraStreamSnapshotHandler.h"
#import "HMDVideoStreamInterface.h"

@interface HMDStreamingManager : HMFObject <HMDVideoStreamInterfaceDelegate, HMDAudioStreamInterfaceDelegate, AVCRemoteVideoClientDelegate, HMFLogging>



@property (retain, nonatomic) HMDAudioStreamInterface *audioStreamInterface; // ivar: _audioStreamInterface
@property (retain, nonatomic) AVCRemoteVideoClient *avcRemoteVideo; // ivar: _avcRemoteVideo
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDStreamingManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (retain, nonatomic) NSNumber *slotIdentifier; // ivar: _slotIdentifier
@property (readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // ivar: _streamSnapshotHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) HMDVideoStreamInterface *videoStreamInterface; // ivar: _videoStreamInterface
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 streamSnapshotHandler:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 localVideoNetworkConfig:(id)arg5 localAudioNetworkConfig:(id)arg6 sessionHandler:(id)arg7 ;
-(id)logIdentifier;
-(void)_callConfigurationUpdated;
-(void)_callNetworkDeteriorated;
-(void)_callNetworkImproved;
-(void)_callReceivedFirstFrame:(id)arg0 ;
-(void)_callRelayStarted;
-(void)_callStreamStarted:(id)arg0 ;
-(void)_callStreamStoppedWithError:(id)arg0 ;
-(void)_startStreamWithVideoConfig:(id)arg0 audioConfig:(id)arg1 ;
-(void)_stopStream;
-(void)audioStream:(id)arg0 didPause:(id)arg1 ;
-(void)audioStream:(id)arg0 didResume:(id)arg1 ;
-(void)audioStream:(id)arg0 didStart:(id)arg1 ;
-(void)audioStream:(id)arg0 didStop:(id)arg1 ;
-(void)dealloc;
-(void)remoteVideoClient:(id)arg0 remoteVideoAttributesDidChange:(id)arg1 ;
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg0 ;
-(void)remoteVideoClientDidReceiveLastFrame:(id)arg0 ;
-(void)remoteVideoServerDidDie:(id)arg0 ;
-(void)startStreamWithVideoConfig:(id)arg0 audioConfig:(id)arg1 ;
-(void)updateAudioSetting:(NSUInteger)arg0 ;
-(void)updateAudioVolume:(id)arg0 callback:(id)arg1 ;
-(void)updateReconfigurationMode:(BOOL)arg0 ;
-(void)updateStreamConfiguration:(id)arg0 ;
-(void)videoStream:(id)arg0 didStart:(id)arg1 ;
-(void)videoStream:(id)arg0 didStop:(id)arg1 ;
-(void)videoStreamDidNetworkDeteriorate:(id)arg0 ;
-(void)videoStreamDidNetworkImprove:(id)arg0 ;
-(void)videoStreamDidUpdateConfiguration:(id)arg0 ;


@end


#endif