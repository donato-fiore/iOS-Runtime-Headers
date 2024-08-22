// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOANALYSISBULLETINNOTIFICATIONMANAGER_H
#define HMDAUDIOANALYSISBULLETINNOTIFICATIONMANAGER_H

@class HMFObject, NSString, HMFMessageDispatcher, NSUUID, NSNotificationCenter, HMFTimer;
@protocol HMFLogging, HMFMessageReceiver, HMFTimerDelegate, OS_dispatch_queue;


#import "HMDAppleAccountManager.h"
#import "HMDNotificationConditionEvaluator.h"
#import "HMDHome.h"
#import "HMDBulletinNotificationRegistrationSource.h"

@interface HMDAudioAnalysisBulletinNotificationManager : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate>



@property (readonly) HMDAppleAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDNotificationConditionEvaluator *evaluator; // ivar: _evaluator
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property (readonly) Class superclass;
@property (retain) HMFTimer *synchronizeWithPrimaryDebounceTimer; // ivar: _synchronizeWithPrimaryDebounceTimer
@property (copy) id *synchronizeWithPrimaryDebounceTimerFactory; // ivar: _synchronizeWithPrimaryDebounceTimerFactory
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)registrationsForSource:(id)arg0 context:(id)arg1 ;
-(id)_mkfLocalAnalysisSignificantEventRegistrationsWithManagedObjectContext:(id)arg0 ;
-(id)_remoteAudioAnalysisRegistrationsForUUID:(id)arg0 ;
-(id)initWithHome:(id)arg0 workQueue:(id)arg1 messageDispatcher:(id)arg2 accountManager:(id)arg3 evaluator:(id)arg4 notificationCenter:(id)arg5 ;
-(id)logIdentifier;
-(id)registrations;
-(id)userDevicesToNotify:(id)arg0 withEvent:(id)arg1 ;
-(void)_handleAudioAnalysisEventResidentToPrimaryMessage:(id)arg0 ;
-(void)_notifyDevice:(id)arg0 event:(id)arg1 user:(id)arg2 ;
-(void)_requestSynchronizeRegistrations;
-(void)_synchronizeLocalRegistrationsWithPrimaryResident;
-(void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)arg0 disabledRegistrations:(id)arg1 ;
-(void)configure;
-(void)handleAudioAnalysisEvent:(id)arg0 ;
-(void)handleCurrentDeviceOrAccountUpdatedNotification:(id)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)synchronizeLocalRegistrationsWithPrimaryResident;
-(void)timerDidFire:(id)arg0 ;


@end


#endif