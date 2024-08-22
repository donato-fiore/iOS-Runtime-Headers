// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERARECORDINGMANAGER_H
#define HMDCAMERARECORDINGMANAGER_H

@class HMFObject, NSMutableSet, NSString, NSUUID, NSDictionary, NSSet, HMFMessageDispatcher, NSNotificationCenter, HMFTimer, NSMutableArray;
@protocol HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMDCameraRecordingSessionDelegate, HMDHomeMessageReceiver, HMDCameraClipManagerDelegate, HMFTimerDelegate, HMDDataStreamBulkSendSession, HMDFeaturesDataSource, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDCameraRecordingBulkSendSessionInitiator.h"
#import "HMDCameraProfile.h"
#import "HMDCameraRecordingLoadBalancer.h"
#import "HMDCameraRecordingSession.h"
#import "HMDStreamDataChunkAssembler.h"
#import "HMDCameraRecordingManagerDependencyFactory.h"
#import "HMDCameraRecordingSessionNotificationTrigger.h"
#import "HMDCameraRecordingSettingsControl.h"
#import "HMDCameraRecordingSessionRetryContext.h"
#import "HMDCameraSignificantEventServer.h"

@interface HMDCameraRecordingManager : HMFObject <HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMDCameraRecordingSessionDelegate, HMDHomeMessageReceiver, HMDCameraClipManagerDelegate, HMFTimerDelegate>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly) NSMutableSet *activeRecordingSessions; // ivar: _activeRecordingSessions
@property (readonly) HMDCameraRecordingBulkSendSessionInitiator *bulkSendSessionInitiator; // ivar: _bulkSendSessionInitiator
@property (readonly) NSString *bulkSendSessionOpenReason;
@property (readonly) NSInteger bulkSendSessionReadTimeoutFactor; // ivar: _bulkSendSessionReadTimeoutFactor
@property (readonly, weak) HMDCameraProfile *camera; // ivar: _camera
@property (readonly) HMDCameraRecordingLoadBalancer *cameraLoadBalancer; // ivar: _cameraLoadBalancer
@property (readonly, copy) NSUUID *cameraUUID; // ivar: _cameraUUID
@property (retain) NSObject<HMDDataStreamBulkSendSession> *currentBulkSendSession; // ivar: _currentBulkSendSession
@property (retain) HMDCameraRecordingSession *currentRecordingSession; // ivar: _currentRecordingSession
@property (retain) HMDStreamDataChunkAssembler *dataChunkAssembler; // ivar: _dataChunkAssembler
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMDCameraRecordingManagerDependencyFactory *dependencyFactory; // ivar: _dependencyFactory
@property (readonly, copy) NSString *description;
@property BOOL didShutDown; // ivar: _didShutDown
@property (readonly) NSObject<HMDFeaturesDataSource> *featuresDataSource; // ivar: _featuresDataSource
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *homePresenceByPairingIdentity;
@property (readonly) NSString *logIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (getter=isMotionActive) BOOL motionActive; // ivar: _motionActive
@property (readonly) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMDCameraRecordingSessionNotificationTrigger *notificationTrigger; // ivar: _notificationTrigger
@property (retain) HMFTimer *readCallbackTimer; // ivar: _readCallbackTimer
@property (readonly) HMDCameraRecordingSettingsControl *recordingSettingsControl; // ivar: _recordingSettingsControl
@property (retain) HMDCameraRecordingSessionRetryContext *sessionRetryContext; // ivar: _sessionRetryContext
@property (retain) HMFTimer *sessionRetryTimer; // ivar: _sessionRetryTimer
@property (readonly) NSMutableArray *sessionStartRequests; // ivar: _sessionStartRequests
@property (readonly) HMDCameraSignificantEventServer *significantEventServer; // ivar: _significantEventServer
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(id)logCategory;
-(BOOL)supportsDeviceWithCapabilities:(id)arg0 ;
-(id)initWithCamera:(id)arg0 recordingManagementService:(id)arg1 ;
-(id)initWithCamera:(id)arg0 recordingManagementService:(id)arg1 dependencyFactory:(id)arg2 notificationCenter:(id)arg3 ;
-(unsigned short)_closeEventReasonForRecordingSessionError:(id)arg0 ;
-(void)_clipManagerDidStartUpCloudZone;
-(void)_closeCurrentSessionsWithReason:(unsigned short)arg0 ;
-(void)_coordinateRecordingSessionForTrigger:(NSUInteger)arg0 ;
-(void)_createRecordingSessionForTrigger:(NSUInteger)arg0 homePresenceByPairingIdentity:(id)arg1 ;
// -(void)_forwardRecordingSessionForTrigger:(NSUInteger)arg0 withLoadBalancerDecision:(id)arg1 deviceFilter:(id)arg2 retryAttemptNumber:(unk)arg3  ;
-(void)_handleBulkSendSessionCreated:(id)arg0 ;
-(void)_handleDataReceived:(id)arg0 ;
-(void)_processQueuedCameraRecordingSessionStartRequests;
-(void)_readDataForCurrentSession;
-(void)_resetRetryContextWithReason:(id)arg0 ;
-(void)_shutDown;
-(void)_start;
-(void)_startRecordingSessionForTrigger:(NSUInteger)arg0 homePresenceByPairingIdentity:(id)arg1 reason:(id)arg2 ;
-(void)_startRecordingSessionForTrigger:(NSUInteger)arg0 homePresenceByPairingIdentity:(id)arg1 reason:(id)arg2 completionCallback:(id)arg3 ;
-(void)_startSessionRetryTimer;
-(void)_submitLoadBalancingEventWithDecision:(id)arg0 numberOfRetries:(NSUInteger)arg1 ;
-(void)_updateSessionRestoreRegistration;
-(void)clipManagerDidStartUpCloudZone:(id)arg0 ;
-(void)clipManagerDidStop:(id)arg0 ;
-(void)dealloc;
-(void)handleCameraSettingsDidChangeNotification:(id)arg0 ;
-(void)handleResidentDeviceUpdated:(id)arg0 ;
-(void)handleStartRecordingSessionRequest:(id)arg0 ;
-(void)notificationTrigger:(id)arg0 didObserveTriggerType:(NSUInteger)arg1 changeToActive:(BOOL)arg2 ;
-(void)recordingSettingsControlDidConfigure:(id)arg0 ;
-(void)recordingSettingsControlDidFailToConfigure:(id)arg0 ;
-(void)session:(id)arg0 didEndWithError:(id)arg1 ;
-(void)shutDown;
-(void)start;
-(void)timerDidFire:(id)arg0 ;


@end


#endif