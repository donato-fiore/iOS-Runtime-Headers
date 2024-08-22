// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAIDSSESSIONINITIATOR_H
#define HMDCAMERAIDSSESSIONINITIATOR_H

@class NSString, NSNumber, AVCPacketRelay, HMFOSTransaction;
@protocol AVCPacketRelayDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol, HMDCameraIDSSessionInitiatorDelegate, OS_dispatch_queue;


#import "HMDCameraIDSSessionHandler.h"
#import "HMDDevice.h"
#import "HMDCameraNetworkConfig.h"

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <AVCPacketRelayDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraIDSSessionInitiatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig; // ivar: _localNetworkConfig
@property (readonly, nonatomic) NSNumber *mtu;
@property (retain) AVCPacketRelay *packetRelay; // ivar: _packetRelay
@property (retain) HMFOSTransaction *packetRelayTransaction; // ivar: _packetRelayTransaction
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 device:(id)arg2 localNetworkConfig:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(id)logIdentifier;
-(void)_callSessionEndedWithError:(id)arg0 ;
-(void)_callSessionStarted;
-(void)_sendInvitation;
-(void)_startPacketRelayWithVideoSocket:(int)arg0 videoNetworkConfig:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 audioSocket:(int)arg3 audioNetworkConfig:(id)arg4 cameraAudioSSRC:(unsigned int)arg5 ;
-(void)dealloc;
-(void)openRelaySession;
-(void)packetRelay:(id)arg0 didStart:(BOOL)arg1 error:(id)arg2 ;
-(void)packetRelay:(id)arg0 didStop:(BOOL)arg1 error:(id)arg2 ;
-(void)session:(id)arg0 receivedInvitationAcceptFromID:(id)arg1 ;
-(void)session:(id)arg0 receivedInvitationCancelFromID:(id)arg1 ;
-(void)session:(id)arg0 receivedInvitationDeclineFromID:(id)arg1 ;
-(void)sessionEnded:(id)arg0 withReason:(unsigned int)arg1 error:(id)arg2 ;
-(void)sessionStarted:(id)arg0 ;
-(void)startPacketRelayWithVideoSocket:(int)arg0 videoNetworkConfig:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 audioSocket:(int)arg3 audioNetworkConfig:(id)arg4 cameraAudioSSRC:(unsigned int)arg5 ;


@end


#endif