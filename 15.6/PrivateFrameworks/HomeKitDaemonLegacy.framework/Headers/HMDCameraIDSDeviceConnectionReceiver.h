// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAIDSDEVICECONNECTIONRECEIVER_H
#define HMDCAMERAIDSDEVICECONNECTIONRECEIVER_H

@class NSString, IDSSession;
@protocol HMDCameraRemoteStreamReceiverSocketProtocol, HMDCameraIDSDeviceConnectionReceiverDelegate, OS_dispatch_queue;


#import "HMDCameraIDSDeviceConnection.h"

@interface HMDCameraIDSDeviceConnectionReceiver : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamReceiverSocketProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraIDSDeviceConnectionReceiverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int remoteAudioSocket;
@property (readonly, nonatomic) int remoteVideoSocket;
@property (readonly) IDSSession *session;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)logIdentifier;
-(void)_callSessionEndedWithError:(id)arg0 ;
-(void)_socketOpenedWithError:(id)arg0 ;
-(void)dealloc;
-(void)setUpRemoteConnectionWithDevice:(id)arg0 ;


@end


#endif