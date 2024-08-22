// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERAIDSDEVICECONNECTION_H
#define HMDCAMERAIDSDEVICECONNECTION_H

@class HMFObject, HMFTimer, NSString, IDSDeviceConnection;
@protocol HMFTimerDelegate, HMDIDSServiceDelegate, HMFLogging, HMDCameraRemoteStreamProtocol, OS_dispatch_queue, OS_dispatch_source, HMDIDSService;


#import "HMDCameraStreamSessionID.h"

@interface HMDCameraIDSDeviceConnection : HMFObject <HMFTimerDelegate, HMDIDSServiceDelegate, HMFLogging, HMDCameraRemoteStreamProtocol>

 {
    unsigned char _keepAliveCounter;
    NSObject<OS_dispatch_queue> *_highPriorityQueue;
    NSObject<OS_dispatch_source> *_keepAliveSocketReceiveSource;
    HMFTimer *_keepAliveByteSendTimer;
    HMFTimer *_keepAliveByteReceiveTimeoutTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *idsDeviceConnectionFactory; // ivar: _idsDeviceConnectionFactory
@property (readonly, nonatomic) NSObject<HMDIDSService> *idsProxyStreamService; // ivar: _idsProxyStreamService
@property (retain) IDSDeviceConnection *keepAliveConnection; // ivar: _keepAliveConnection
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (retain) IDSDeviceConnection *watchAudioConnection; // ivar: _watchAudioConnection
@property (retain) IDSDeviceConnection *watchVideoConnection; // ivar: _watchVideoConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 idsProxyStreamService:(id)arg2 ;
-(id)logIdentifier;
-(void)_callSessionEndedWithError:(id)arg0 ;
-(void)_createStreamSocketWithDevice:(id)arg0 ;
-(void)_socketOpenedWithError:(id)arg0 ;
-(void)dealloc;
-(void)startKeepAlive;
-(void)timerDidFire:(id)arg0 ;


@end


#endif