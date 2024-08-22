// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGMANAGER_H
#define HMDCAMERARECORDINGMANAGER_H

@class HMFObject, NSMutableSet, NSUUID, NSString, HMFMessageDispatcher, NSNotificationCenter, HMFTimer;
@protocol HMDCameraRecordingBulkSendSessionReaderDelegate, HMDCameraRecordingSessionDelegate, HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDCameraClipManagerDelegate, HMDCameraRecordingManagerDependencyFactory, HMDFeaturesDataSource, HMMLogEventSubmitting, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDCameraRecordingBulkSendSessionInitiator.h"
#import "HMDCameraProfile.h"
#import "HMDCameraRecordingLoadBalancer.h"
#import "HMDCameraRecordingBulkSendSessionReader.h"
#import "HMDCameraRecordingSession.h"
#import "HMDCameraRecordingSessionNotificationTrigger.h"
#import "HMDCameraRecordingSettingsControl.h"
#import "HMDCameraRecordingSessionRetryContext.h"
#import "HMDCameraSignificantEventServer.h"

@interface HMDCameraRecordingManager : HMFObject <HMDCameraRecordingBulkSendSessionReaderDelegate, HMDCameraRecordingSessionDelegate, HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDCameraClipManagerDelegate>



@property (weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly) NSMutableSet *activeRecordingSessions; // ivar: _activeRecordingSessions
@property (readonly) HMDCameraRecordingBulkSendSessionInitiator *bulkSendSessionInitiator; // ivar: _bulkSendSessionInitiator
@property (weak) HMDCameraProfile *camera; // ivar: _camera
@property (readonly) HMDCameraRecordingLoadBalancer *cameraLoadBalancer; // ivar: _cameraLoadBalancer
@property (readonly, copy) NSUUID *cameraUUID; // ivar: _cameraUUID
@property (retain) HMDCameraRecordingBulkSendSessionReader *currentBulkSendSessionReader; // ivar: _currentBulkSendSessionReader
@property (retain) HMDCameraRecordingSession *currentRecordingSession; // ivar: _currentRecordingSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<HMDCameraRecordingManagerDependencyFactory> *dependencyFactory; // ivar: _dependencyFactory
@property (readonly, copy) NSString *description;
@property BOOL didShutDown; // ivar: _didShutDown
@property (readonly) NSObject<HMDFeaturesDataSource> *featuresDataSource; // ivar: _featuresDataSource
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (getter=isMotionActive) BOOL motionActive; // ivar: _motionActive
@property (readonly) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMDCameraRecordingSessionNotificationTrigger *notificationTrigger; // ivar: _notificationTrigger
@property (readonly) HMDCameraRecordingSettingsControl *recordingSettingsControl; // ivar: _recordingSettingsControl
@property (retain) HMDCameraRecordingSessionRetryContext *sessionRetryContext; // ivar: _sessionRetryContext
@property (retain) HMFTimer *sessionRetryTimer; // ivar: _sessionRetryTimer
@property (readonly) HMDCameraSignificantEventServer *significantEventServer; // ivar: _significantEventServer
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)supportsDeviceWithCapabilities:(id)arg0 ;
-(id)_createRecordingSessionWithHomePresenceByPairingIdentity:(id)arg0 selectedConfiguration:(id)arg1 ;
-(id)bulkSendSessionOpenReasonWithError:(*id)arg0 ;
-(id)homePresenceByPairingIdentity;
-(id)initWithCamera:(id)arg0 recordingManagementService:(id)arg1 ;
-(id)initWithCamera:(id)arg0 recordingManagementService:(id)arg1 workQueue:(id)arg2 dependencyFactory:(id)arg3 notificationCenter:(id)arg4 ;
-(id)logIdentifier;
-(unsigned short)_closeEventReasonForRecordingSessionError:(id)arg0 ;
-(void)_clipManagerDidStartUpCloudZone;
-(void)_closeCurrentSessionsWithReason:(unsigned short)arg0 ;
-(void)_configureRecordingSession:(id)arg0 withTrigger:(NSUInteger)arg1 ;
-(void)_coordinateRecordingSessionForTrigger:(NSUInteger)arg0 ;
-(void)_coordinateRecordingSessionForTrigger:(NSUInteger)arg0 sessionCoordinationLogEvent:(id)arg1 ;
// -(void)_forwardRecordingSessionForTrigger:(NSUInteger)arg0 withLoadBalancerDecision:(id)arg1 deviceFilter:(id)arg2 sessionCoordinationLogEvent:(unk)arg3 retryAttemptNumber:(id)arg4  ;
-(void)_handleBulkSendSessionCreated:(id)arg0 ;
-(void)_prepareRecordingSessionForTrigger:(NSUInteger)arg0 homePresenceByPairingIdentity:(id)arg1 reason:(id)arg2 ;
-(void)_prepareRecordingSessionForTrigger:(NSUInteger)arg0 homePresenceByPairingIdentity:(id)arg1 reason:(id)arg2 completionCallback:(id)arg3 ;
-(void)_resetRetryContextWithReason:(id)arg0 ;
-(void)_shutDown;
-(void)_start;
-(void)_startRecordingSessionForTrigger:(NSUInteger)arg0 homePresenceByPairingIdentity:(id)arg1 reason:(id)arg2 selectedConfiguration:(id)arg3 completionCallback:(id)arg4 ;
-(void)_startSessionRetryTimer;
-(void)_submitLoadBalancingEventWithDecision:(id)arg0 numberOfRetries:(NSUInteger)arg1 ;
-(void)bulkSendSessionReader:(id)arg0 didFinishWithReason:(unsigned short)arg1 ;
-(void)bulkSendSessionReader:(id)arg0 didReadFragment:(id)arg1 ;
-(void)clipManagerDidStartUpCloudZone:(id)arg0 ;
-(void)clipManagerDidStop:(id)arg0 ;
-(void)dealloc;
-(void)handleCameraSettingsDidChangeNotification:(id)arg0 ;
-(void)handleStartRecordingSessionRequest:(id)arg0 ;
-(void)notificationTrigger:(id)arg0 didObserveTriggerType:(NSUInteger)arg1 changeToActive:(BOOL)arg2 ;
-(void)recordingSettingsControlDidConfigure:(id)arg0 ;
-(void)session:(id)arg0 didEndWithError:(id)arg1 ;
-(void)shutDown;
-(void)start;
-(void)timerDidFire:(id)arg0 ;


@end


#endif