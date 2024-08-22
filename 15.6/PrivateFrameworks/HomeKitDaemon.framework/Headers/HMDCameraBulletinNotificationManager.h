// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERABULLETINNOTIFICATIONMANAGER_H
#define HMDCAMERABULLETINNOTIFICATIONMANAGER_H

@class HMFObject, NSArray, NSString, NSManagedObjectContext, HMFMessageDispatcher, NSUUID, NSNotificationCenter, NSMutableDictionary;
@protocol HMFMessageReceiver, HMFLogging, OS_dispatch_queue;


#import "HMDAppleAccountManager.h"
#import "HMDAccountRegistry.h"
#import "HMDDoorbellPressTracker.h"
#import "HMDNotificationConditionEvaluator.h"
#import "HMDCameraSignificantEventFaceClassificationResolver.h"
#import "HMDHome.h"
#import "HMDCameraSignificantEventNotificationDebouncer.h"
#import "HMCContext.h"

@interface HMDCameraBulletinNotificationManager : HMFObject <HMFMessageReceiver, HMFLogging>



@property (readonly) HMDAppleAccountManager *accountManager; // ivar: _accountManager
@property (readonly) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property (readonly) NSArray *cameraAccessModeRegistrations;
@property (readonly) NSArray *cameraReachabilityRegistrations;
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
@property (readonly) NSManagedObjectContext *localMOC; // ivar: _localMOC
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMDCameraSignificantEventNotificationDebouncer *notificationDebouncer; // ivar: _notificationDebouncer
@property (readonly) NSMutableDictionary *observersByCameraIdentifier; // ivar: _observersByCameraIdentifier
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly) HMCContext *workingMOC; // ivar: _workingMOC


+(id)logCategory;
-(BOOL)_filterPassesForCameraSignificantEvent:(id)arg0 registration:(id)arg1 ;
-(id)_recentDoorbellPressIntervalForSignificantEventDate:(id)arg0 ;
-(id)cameraReachabilityBulletinNotificationRegistrationsForAccessory:(id)arg0 ;
-(id)cameraSignificantEventBulletinNotificationRegistrationsForCameraIdentifier:(id)arg0 ;
-(id)cameraUserNotificationSettingsForAccessory:(id)arg0 ;
-(id)conditionsFromPredicate:(id)arg0 ;
-(id)devicesToNotifyForCameraReachabilityForAccessory:(id)arg0 ;
-(id)initWithHome:(id)arg0 workQueue:(id)arg1 localManagedObjectContext:(id)arg2 workingManagedObjectContext:(id)arg3 messageDispatcher:(id)arg4 accountRegistry:(id)arg5 accountManager:(id)arg6 faceClassificationResolver:(id)arg7 notificationDebouncer:(id)arg8 doorbellPressTracker:(id)arg9 evaluator:(id)arg10 ;
-(id)logIdentifier;
-(void)_handleCameraSignificantEventBulletinNotificationRegistration:(id)arg0 removed:(BOOL)arg1 ;
-(void)_handleCameraSignificantEventBulletinNotifyPrimaryResidentMessage:(id)arg0 ;
-(void)_handleCameraSignificantEventNotificationMessage:(id)arg0 ;
-(void)_handleDeviceBecameNotPrimary;
-(void)_handleDeviceBecamePrimary;
-(void)_handleSignificantEvent:(id)arg0 cameraProfile:(id)arg1 homePresence:(id)arg2 ;
-(void)_handleSignificantEvent:(id)arg0 remoteDeviceIdentifier:(id)arg1 notificationModes:(NSUInteger)arg2 ;
-(void)_notifyDevice:(id)arg0 aboutSignificantEvent:(id)arg1 ;
-(void)_notifyPrimaryResidentOfSignificantEvent:(id)arg0 remoteDeviceIdentifier:(id)arg1 notificationModes:(NSUInteger)arg2 ;
-(void)addCameraSignificantEventNotificationObserver:(id)arg0 cameraIdentifier:(id)arg1 ;
-(void)configureWithDeviceIsResidentCapable:(BOOL)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)handleSignificantEvent:(id)arg0 cameraProfile:(id)arg1 homePresence:(id)arg2 ;
-(void)removeCameraSignificantEventNotificationObserver:(id)arg0 cameraIdentifier:(id)arg1 ;
-(void)updateNotificationRegistrationsWithSettings:(id)arg0 accessory:(id)arg1 doorbellPressNotificationEnabled:(BOOL)arg2 doorbellPressNotificationPredicate:(id)arg3 completion:(id)arg4 ;


@end


#endif