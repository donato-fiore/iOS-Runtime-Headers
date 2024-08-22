// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERASNAPSHOTMANAGER_H
#define HMDCAMERASNAPSHOTMANAGER_H

@class HMFObject, HMFMessageDispatcher, NSMutableDictionary, NSString, NSMutableArray, HMFNetMonitor, NSDictionary, NSSet, NSUUID;
@protocol HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDSnapshotLocalSession.h"
#import "HMDHAPAccessory.h"
#import "HMDCameraSnapshotMonitorEvents.h"
#import "HMDSnapshotRequestHandler.h"
#import "HMDSnapshotCacheRequestHandler.h"
#import "HMDSnapshotSlotManager.h"
#import "HMDCameraStreamSnapshotHandler.h"
#import "HMDCameraResidentMessageHandler.h"

@interface HMDCameraSnapshotManager : HMFObject <HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDHomeMessageReceiver>

 {
    HMFMessageDispatcher *_msgDispatcher;
    HMDSnapshotLocalSession *_currentLocalSession;
    NSMutableDictionary *_currentRemoteSessions;
    HMDHAPAccessory *_accessory;
    NSString *_imageCacheDirectory;
    HMDCameraSnapshotMonitorEvents *_monitorServicesManager;
    HMDSnapshotRequestHandler *_snapshotRequestHandler;
    HMDSnapshotCacheRequestHandler *_snapshotCacheRequestHandler;
    HMDSnapshotSlotManager *_snapshotSlotManager;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    NSMutableArray *_pendingSnapshotRequestDuringStreamSetup;
    NSMutableArray *_pendingRemoteSnapshotRequestDuringStreamSetup;
    HMFNetMonitor *_networkMonitor;
    HMDCameraResidentMessageHandler *_residentMessageHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *encodedMostRecentSnapshot;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(id)logCategory;
+(void)auditSnapshotDirectories:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 uniqueIdentifier:(id)arg3 msgDispatcher:(id)arg4 networkMonitor:(id)arg5 ;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 uniqueIdentifier:(id)arg3 msgDispatcher:(id)arg4 networkMonitor:(id)arg5 residentMessageHandler:(id)arg6 ;
-(void)_handleCreateSnapshotFromBulletinContext:(id)arg0 ;
-(void)_handleReleaseSnapshot:(id)arg0 ;
-(void)_handleSnapshotReceived:(id)arg0 ;
-(void)_handleSnapshotRemoteRequest:(id)arg0 ;
-(void)_handleSnapshotRequest:(id)arg0 ;
-(void)_handleSnapshotSendFailure:(id)arg0 ;
-(void)dealloc;
-(void)handleAccessoryDisconnected:(id)arg0 ;
-(void)handleCameraSettingsDidChangeNotification:(id)arg0 ;
-(void)registerForMessages;
-(void)releaseSnapshot:(id)arg0 ;
-(void)snapshotLocal:(id)arg0 didSaveSnapshotFile:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayReceiver:(id)arg0 didSaveSnapshotFile:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayReceiver:(id)arg0 didStartGettingImage:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotRelaySender:(id)arg0 didCompleteSendImage:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotRelaySender:(id)arg0 didSaveSnapshotFile:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotRelaySender:(id)arg0 didStartCaptureImage:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotRelayStream:(id)arg0 didCompleteSendImage:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotRelayStream:(id)arg0 didStartCaptureImage:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotStreamReceiver:(id)arg0 didSaveSnapshotFile:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotStreamReceiver:(id)arg0 didStartGettingImage:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotStreamSender:(id)arg0 didCompleteSendImage:(id)arg1 sessionID:(id)arg2 ;
-(void)snapshotStreamSender:(id)arg0 didStartCaptureImage:(id)arg1 sessionID:(id)arg2 ;
-(void)streamSnapshotHandler:(id)arg0 didChangeStreamSetupInProgress:(BOOL)arg1 ;
-(void)streamSnapshotHandler:(id)arg0 didGetLastSnapshot:(id)arg1 ;
-(void)streamSnapshotHandler:(id)arg0 didGetNewSnapshot:(id)arg1 ;
-(void)takeSnapshot:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif