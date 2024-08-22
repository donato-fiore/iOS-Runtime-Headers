// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGREACHABILITYEVENTMANAGER_H
#define HMDCAMERARECORDINGREACHABILITYEVENTMANAGER_H

@class HMFObject, NSHashTable, HMBCloudZone, _HMCameraUserSettings, NSString, HMFTimer, HMBLocalZone, HMFMessageDispatcher, NSUUID, NSDate;
@protocol HMBLocalZoneModelObserver, HMFTimerDelegate, HMFMessageReceiver, HMFLogging, HMDCameraClipManagerDelegate, HMFNetMonitorDelegate, HMMLogEventSubmitting, OS_dispatch_queue;


#import "HMDAppleAccountSettings.h"
#import "HMDBulletinBoard.h"
#import "HMDHAPAccessory.h"
#import "HMDCameraRecordingReachabilityEventModel.h"

@interface HMDCameraRecordingReachabilityEventManager : HMFObject <HMBLocalZoneModelObserver, HMFTimerDelegate, HMFMessageReceiver, HMFLogging, HMDCameraClipManagerDelegate, HMFNetMonitorDelegate>



@property (readonly) HMDAppleAccountSettings *accountSettings; // ivar: _accountSettings
@property (readonly) HMDBulletinBoard *bulletinBoard; // ivar: _bulletinBoard
@property (retain) NSHashTable *clientConnections; // ivar: _clientConnections
@property (retain) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property BOOL currentBridgedCameraReachability; // ivar: _currentBridgedCameraReachability
@property BOOL currentCameraReachability; // ivar: _currentCameraReachability
@property (nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) BOOL currentDeviceConfirmedPrimaryResident; // ivar: _currentDeviceConfirmedPrimaryResident
@property (nonatomic, getter=isCurrentDeviceConnectedToNetwork) BOOL currentDeviceConnectedToNetwork; // ivar: _currentDeviceConnectedToNetwork
@property (copy) _HMCameraUserSettings *currentSettings; // ivar: _currentSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) HMDHAPAccessory *hapAccessory; // ivar: _hapAccessory
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat initialReachabilityTimeout;
@property (retain) HMFTimer *initialReachabilityTimer; // ivar: _initialReachabilityTimer
@property (copy) id *initialReachabilityTimerFactory; // ivar: _initialReachabilityTimerFactory
@property BOOL lastKnownCameraReachability; // ivar: _lastKnownCameraReachability
@property (retain) HMBLocalZone *localZone; // ivar: _localZone
@property (retain) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy) HMDCameraRecordingReachabilityEventModel *mostRecentReachabilityEventModel; // ivar: _mostRecentReachabilityEventModel
@property NSUInteger reachabilityChangeDebounceCount; // ivar: _reachabilityChangeDebounceCount
@property (copy) NSDate *reachabilityChangeDebounceStartDate; // ivar: _reachabilityChangeDebounceStartDate
@property (retain) HMFTimer *reachabilityChangeDebounceTimer; // ivar: _reachabilityChangeDebounceTimer
@property (copy) id *reachabilityChangeDebounceTimerFactory; // ivar: _reachabilityChangeDebounceTimerFactory
@property (readonly) CGFloat reachabilityChangeReachableDebounceTimeout;
@property (readonly) CGFloat reachabilityChangeUnreachableDebounceTimeout;
@property (readonly) Class superclass;
@property (copy) NSDate *suppressNotificationsBeforeDate; // ivar: _suppressNotificationsBeforeDate
@property (readonly) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)isAccessoryReachable;
-(BOOL)shouldAddInitialReachabilityEventForCurrentCameraReachability:(BOOL)arg0 ;
-(id)fetchReachabilityEventsWithDateInterval:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 identifier:(id)arg2 bulletinBoard:(id)arg3 logEventSubmitter:(id)arg4 accountSettings:(id)arg5 ;
-(id)initWithHAPAccessory:(id)arg0 workQueue:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(id)logIdentifier;
-(id)mostRecentReachabilityEventModelInModels:(id)arg0 ;
-(id)performCloudPullWithLabel:(id)arg0 ;
-(id)reachabilityEventModelForCurrentCameraReachability:(BOOL)arg0 dateOfOccurrence:(id)arg1 ;
-(void)addCameraReachabilityEventForCurrentCameraReachability:(BOOL)arg0 dateOfOccurrence:(id)arg1 ;
-(void)cleanUpEvents;
-(void)clipManagerDidStart:(id)arg0 ;
-(void)clipManagerDidStop:(id)arg0 ;
-(void)configureWithMessageDispatcher:(id)arg0 isCurrentDeviceConfirmedPrimaryResident:(BOOL)arg1 ;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleAccessoryDisconnected:(id)arg0 ;
-(void)handleAppleAccountSettingsHomeStateUpdated:(id)arg0 ;
-(void)handleCameraProfileSettingsDidChange:(id)arg0 ;
-(void)handleDeleteAllEventsMessage:(id)arg0 ;
-(void)handleFetchCountOfEventsMessage:(id)arg0 ;
-(void)handleFetchEventsMessage:(id)arg0 ;
-(void)handleHMDBridgedAccessoryReachableNotification:(id)arg0 ;
-(void)handleHMDBridgedAccessoryUnreachableNotification:(id)arg0 ;
-(void)handleInitialCameraReachability;
-(void)handlePerformCloudPullMessage:(id)arg0 ;
-(void)handleRemoteCameraReachabilityChange:(id)arg0 ;
-(void)handleResidentDeviceUpdated:(id)arg0 ;
-(void)handleSubscribeMessage:(id)arg0 ;
-(void)handleUnsubscribeMessage:(id)arg0 ;
-(void)handleUpdatedCameraReachability:(BOOL)arg0 ;
-(void)networkMonitorIsReachable:(id)arg0 ;
-(void)networkMonitorIsUnreachable:(id)arg0 ;
-(void)notifySubscribersOfRemoteCameraReachabilityEvent;
-(void)notifyTransportOfUpdatedEvents:(id)arg0 removedEventUUIDs:(id)arg1 ;
-(void)startInitialReachabilityTimer;
-(void)startReachabilityChangeDebounceTimerWithReachability:(BOOL)arg0 ;
-(void)submitLogEventWithCurrentModel:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif