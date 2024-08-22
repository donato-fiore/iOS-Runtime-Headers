// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASIGNIFICANTEVENTSERVER_H
#define HMDCAMERASIGNIFICANTEVENTSERVER_H

@class HMFObject, NSString, NSMutableDictionary, HMFMessageDispatcher, NSUUID, NSMapTable;
@protocol HMFMessageReceiver, HMFLogging, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMFTimerDelegate, OS_dispatch_queue;


#import "HMDCameraSignificantEventServerDataSource.h"
#import "HMDCharacteristic.h"
#import "HMDNotificationRegistry.h"

@interface HMDCameraSignificantEventServer : HMFObject <HMFMessageReceiver, HMFLogging, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMFTimerDelegate>



@property (readonly) HMDCameraSignificantEventServerDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableDictionary *heroFrameDataByNotificationUUID; // ivar: _heroFrameDataByNotificationUUID
@property (copy) id *heroFrameExpiryTimerFactory; // ivar: _heroFrameExpiryTimerFactory
@property (copy) id *idsRelayInitiatorFactory; // ivar: _idsRelayInitiatorFactory
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) HMDCharacteristic *motionCharacteristic; // ivar: _motionCharacteristic
@property (readonly) HMDNotificationRegistry *notificationRegistry; // ivar: _notificationRegistry
@property (readonly) NSMapTable *notificationUUIDByHeroFrameExpiryTimer; // ivar: _notificationUUIDByHeroFrameExpiryTimer
@property (readonly) NSMutableDictionary *relayInitiatorBySessionUUID; // ivar: _relayInitiatorBySessionUUID
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithWorkQueue:(id)arg0 camera:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 logIdentifier:(id)arg1 messageDispatcher:(id)arg2 messageTargetUUID:(id)arg3 motionCharacteristic:(id)arg4 notificationRegistry:(id)arg5 dataSource:(id)arg6 ;
-(void)_notifyDevice:(id)arg0 aboutEvent:(id)arg1 ;
-(void)handleCameraSignificantEventFetchHeroFrameMessage:(id)arg0 ;
-(void)notifyListenersAboutEvent:(id)arg0 ;
-(void)relayInitiator:(id)arg0 didEndIDSSessionWithError:(id)arg1 ;
-(void)relayInitiatorDidSendDataSuccessfully:(id)arg0 ;
-(void)relayInitiatorDidSendIDSInvitation:(id)arg0 ;
-(void)relayInitiatorDidStartDataSend:(id)arg0 ;
-(void)relayInitiatorIDSSessionDidStart:(id)arg0 ;
-(void)start;
-(void)timerDidFire:(id)arg0 ;


@end


#endif