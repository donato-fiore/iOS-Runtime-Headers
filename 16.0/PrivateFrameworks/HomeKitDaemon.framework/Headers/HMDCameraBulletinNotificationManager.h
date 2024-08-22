// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERABULLETINNOTIFICATIONMANAGER_H
#define HMDCAMERABULLETINNOTIFICATIONMANAGER_H

@class HMFObject, NSArray, NSString, HMFMessageDispatcher, NSUUID, NSNotificationCenter, NSMutableDictionary;
@protocol HMFMessageReceiver, HMFLogging, OS_dispatch_queue;


#import "HMDAppleAccountManager.h"
#import "HMDAccountRegistry.h"
#import "HMDDoorbellPressTracker.h"
#import "HMDNotificationConditionEvaluator.h"
#import "HMDCameraSignificantEventFaceClassificationResolver.h"
#import "HMDHome.h"
#import "HMDCameraSignificantEventNotificationDebouncer.h"
#import "HMDBulletinNotificationRegistrationSource.h"

@interface HMDCameraBulletinNotificationManager : HMFObject <HMFMessageReceiver, HMFLogging>



@property (readonly) HMDAppleAccountManager *accountManager; // ivar: _accountManager
@property (readonly) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property (readonly) NSArray *cameraAccessModeRegistrations;
@property (readonly) NSArray *cameraAccessModeRegistrationsForCurrentDevice;
@property (readonly) NSArray *cameraReachabilityRegistrations;
@property (readonly) NSArray *cameraReachabilityRegistrationsForCurrentDevice;
@property (readonly) NSArray *cameraSignificantEventRegistrations;
@property (readonly) NSArray *cameraSignificantEventRegistrationsForCurrentDevice;
@property BOOL currentPrimary; // ivar: _currentPrimary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDoorbellPressTracker *doorbellPressTracker; // ivar: _doorbellPressTracker
@property (readonly) HMDNotificationConditionEvaluator *evaluator; // ivar: _evaluator
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver; // ivar: _faceClassificationResolver
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMDCameraSignificantEventNotificationDebouncer *notificationDebouncer; // ivar: _notificationDebouncer
@property (readonly) NSMutableDictionary *observersByCameraIdentifier; // ivar: _observersByCameraIdentifier
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_cameraAccessModeRegistrationsForSource:(id)arg0 context:(id)arg1 ;
+(id)_cameraReachabilityRegistrationsForSource:(id)arg0 context:(id)arg1 ;
+(id)_cameraSignificantEventRegistrationsForSource:(id)arg0 context:(id)arg1 ;
+(id)logCategory;
-(BOOL)_filterPassesForCameraSignificantEvent:(id)arg0 registration:(id)arg1 ;
-(BOOL)_handleCameraSignificantEventBulletinNotifyPrimaryResidentMessage_Legacy:(id)arg0 ;
-(BOOL)_updateLocalStoreWithCameraAccessModeBulletinRegistration:(id)arg0 existingMKFLocalRegistration:(id)arg1 enabled:(BOOL)arg2 moc:(id)arg3 ;
-(BOOL)_updateLocalStoreWithCameraReachabilityBulletinRegistration:(id)arg0 existingMKFLocalRegistration:(id)arg1 enabled:(BOOL)arg2 moc:(id)arg3 ;
-(BOOL)_updateLocalStoreWithCameraSignificantEventBulletinRegistration:(id)arg0 existingMKFLocalRegistration:(id)arg1 enabled:(BOOL)arg2 moc:(id)arg3 ;
-(id)_cameraAccessModeBulletinNotificationRegistrationsForAccessory:(id)arg0 ;
-(id)_cameraProfileWithUUID:(id)arg0 ;
-(id)_cameraReachabilityBulletinNotificationRegistrationsForAccessory:(id)arg0 ;
-(id)_cameraSignificantEventBulletinNotificationRegistrationsForCameraIdentifier:(id)arg0 ;
-(id)_currentHomeCameraAccessoryUUIDs;
-(id)_deviceToNotifyForRegistration:(id)arg0 source:(id)arg1 ;
-(id)_mkfLocalCameraAccessModeRegistrationsWithManagedObjectContext:(id)arg0 ;
-(id)_mkfLocalCameraReachabilityRegistrationsWithManagedObjectContext:(id)arg0 ;
-(id)_mkfLocalCameraSignificantEventRegistrationsWithManagedObjectContext:(id)arg0 ;
-(id)_recentDoorbellPressIntervalForSignificantEventDate:(id)arg0 ;
-(id)cameraUserNotificationSettingsForAccessory:(id)arg0 ;
-(id)conditionsFromPredicate:(id)arg0 ;
-(id)devicesToNotifyForAccessModeChangeForAccessory:(id)arg0 ;
-(id)devicesToNotifyForCameraReachabilityForAccessory:(id)arg0 ;
-(id)initWithHome:(id)arg0 workQueue:(id)arg1 messageDispatcher:(id)arg2 accountRegistry:(id)arg3 accountManager:(id)arg4 faceClassificationResolver:(id)arg5 notificationDebouncer:(id)arg6 doorbellPressTracker:(id)arg7 evaluator:(id)arg8 notificationCenter:(id)arg9 ;
-(id)logIdentifier;
-(void)_auditRegistrationsForMultipleHomesIssue;
-(void)_handleCameraSignificantEventBulletinNotificationRegistration:(id)arg0 removed:(BOOL)arg1 ;
-(void)_handleCameraSignificantEventBulletinNotifyPrimaryResidentMessage:(id)arg0 ;
-(void)_handleCameraSignificantEventNotificationMessage:(id)arg0 ;
-(void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)arg0 ;
-(void)_handleDeviceBecameNotPrimary;
-(void)_handleDeviceBecamePrimary;
-(void)_handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)_handleSignificantEvent:(id)arg0 cameraProfile:(id)arg1 homePresence:(id)arg2 ;
-(void)_handleSignificantEvent:(id)arg0 deviceIdsIdentifier:(id)arg1 notificationModes:(NSUInteger)arg2 ;
-(void)_handleSignificantEventWithUUID:(id)arg0 reason:(NSUInteger)arg1 dateOfOccurrence:(id)arg2 confidenceLevel:(NSUInteger)arg3 faceClassifications:(id)arg4 cameraProfile:(id)arg5 homePresence:(id)arg6 ;
-(void)_notifyDevice:(id)arg0 aboutSignificantEvent:(id)arg1 ;
-(void)_notifyPrimaryResidentOfSignificantEvent:(id)arg0 withCameraProfileUUID:(id)arg1 ;
-(void)_synchronizeLocalRegistrationsWithPrimaryResident;
-(void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)arg0 disabledRegistrations:(id)arg1 ;
-(void)addCameraSignificantEventNotificationObserver:(id)arg0 cameraIdentifier:(id)arg1 ;
-(void)configureWithDeviceIsResidentCapable:(BOOL)arg0 ;
-(void)handleCurrentDeviceOrAccountUpdatedNotification:(id)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)handleRemovedCameraAccessory:(id)arg0 ;
-(void)handleSignificantEvent:(id)arg0 cameraProfile:(id)arg1 homePresence:(id)arg2 ;
-(void)removeCameraSignificantEventNotificationObserver:(id)arg0 cameraIdentifier:(id)arg1 ;
-(void)updateNotificationRegistrationsWithSettings:(id)arg0 accessory:(id)arg1 doorbellPressNotificationEnabled:(BOOL)arg2 doorbellPressNotificationPredicate:(id)arg3 completion:(id)arg4 ;


@end


#endif