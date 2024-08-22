// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAIDSDEVICECONNECTIONSENDER_H
#define HMDCAMERAIDSDEVICECONNECTIONSENDER_H

@class AVCPacketRelay, NSString, NSNumber, HMFOSTransaction;
@protocol HMDCameraRemoteStreamSenderProtocol, HMDCameraIDSDeviceConnectionSenderDelegate, OS_dispatch_queue;


#import "HMDCameraIDSDeviceConnection.h"
#import "HMDDevice.h"

@interface HMDCameraIDSDeviceConnectionSender : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamSenderProtocol>



@property (retain) AVCPacketRelay *audioPacketRelay; // ivar: _audioPacketRelay
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraIDSDeviceConnectionSenderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *mtu;
@property (retain) HMFOSTransaction *packetRelayTransaction; // ivar: _packetRelayTransaction
@property (readonly) Class superclass;
@property (retain) AVCPacketRelay *videoPacketRelay; // ivar: _videoPacketRelay


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 device:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 device:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 idsProxyStreamService:(id)arg5 ;
-(id)logIdentifier;
-(void)_callSessionEndedWithError:(id)arg0 ;
-(void)_socketOpenedWithError:(id)arg0 ;
-(void)_startAudioPacketRelay:(int)arg0 ipAddress:(id)arg1 port:(NSUInteger)arg2 ;
-(void)_startPacketRelayWithIDSDeviceSession:(id)arg0 cameraVideoSSRC:(unsigned int)arg1 cameraAudioSSRC:(unsigned int)arg2 ;
-(void)_startPacketRelayWithVideoSocket:(int)arg0 videoNetworkConfig:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 audioSocket:(int)arg3 audioNetworkConfig:(id)arg4 cameraAudioSSRC:(unsigned int)arg5 ;
-(void)_startVideoPacketRelay:(int)arg0 ipAddress:(id)arg1 port:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)openRelaySession;
-(void)startPacketRelayWithIDSDeviceSession:(id)arg0 cameraVideoSSRC:(unsigned int)arg1 cameraAudioSSRC:(unsigned int)arg2 ;
-(void)startPacketRelayWithVideoSocket:(int)arg0 videoNetworkConfig:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 audioSocket:(int)arg3 audioNetworkConfig:(id)arg4 cameraAudioSSRC:(unsigned int)arg5 ;


@end


#endif