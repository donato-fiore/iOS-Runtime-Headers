// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASIGNIFICANTEVENTLISTENER_H
#define HMDCAMERASIGNIFICANTEVENTLISTENER_H

@class HMFObject, NSString, NSMutableDictionary, HMFMessageDispatcher, NSUUID;
@protocol HMFMessageReceiver, HMFLogging, HMDCameraSnapshotIDSRelayReceiverDelegate, HMDCameraSignificantEventListenerDelegate, OS_dispatch_queue;



@interface HMDCameraSignificantEventListener : HMFObject <HMFMessageReceiver, HMFLogging, HMDCameraSnapshotIDSRelayReceiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraSignificantEventListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSMutableDictionary *fetchHeroFrameContextBySessionUUID; // ivar: _fetchHeroFrameContextBySessionUUID
@property (readonly) NSUInteger hash;
@property (copy) id *idsRelayReceiverFactory; // ivar: _idsRelayReceiverFactory
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithCamera:(id)arg0 ;
-(id)initWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 ;
-(void)handleCameraSignificantEventDidOccurMessage:(id)arg0 ;
-(void)relayReceiver:(id)arg0 didReceiveData:(id)arg1 error:(id)arg2 ;
-(void)relayReceiverDidAcceptIDSInvitation:(id)arg0 ;
-(void)relayReceiverIDSSessionDidStart:(id)arg0 ;
-(void)start;


@end


#endif