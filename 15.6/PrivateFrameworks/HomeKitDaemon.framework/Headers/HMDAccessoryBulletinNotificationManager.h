// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYBULLETINNOTIFICATIONMANAGER_H
#define HMDACCESSORYBULLETINNOTIFICATIONMANAGER_H

@class HMFObject, NSArray, NSString, NSManagedObjectContext;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDAppleAccountManager.h"
#import "HMDAccountRegistry.h"
#import "HMDNotificationConditionEvaluator.h"
#import "HMDHome.h"
#import "HMCContext.h"

@interface HMDAccessoryBulletinNotificationManager : HMFObject <HMFLogging>



@property (readonly) NSArray *accessoryRegistrations;
@property (readonly) NSArray *accessoryRegistrationsForCurrentDevice;
@property (readonly) HMDAppleAccountManager *accountManager; // ivar: _accountManager
@property (readonly) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property BOOL currentPrimary; // ivar: _currentPrimary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDNotificationConditionEvaluator *evaluator; // ivar: _evaluator
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) NSManagedObjectContext *localMOC; // ivar: _localMOC
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly) HMCContext *workingMOC; // ivar: _workingMOC


+(id)logCategory;
-(id)_devicesToNotifyForCharacteristic:(id)arg0 ;
-(id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)arg0 ;
-(id)bulletinBoardNotificationForCharacteristics:(id)arg0 ;
-(id)characteristicsByDestinationForCharacteristics:(id)arg0 ;
-(id)conditionsFromPredicate:(id)arg0 ;
-(id)initWithHome:(id)arg0 workQueue:(id)arg1 localManagedObjectContext:(id)arg2 workingManagedObjectContext:(id)arg3 accountRegistry:(id)arg4 accountManager:(id)arg5 evaluator:(id)arg6 ;
-(id)logIdentifier;
-(void)_handleAccessoryBulletinNotificationRegistration:(id)arg0 removed:(BOOL)arg1 ;
-(void)_handleDeviceBecameNotPrimary;
-(void)_handleDeviceBecamePrimary;
-(void)configureWithDeviceIsResidentCapable:(BOOL)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)registerForNotificationsFromCharacteristics:(id)arg0 conditions:(id)arg1 completion:(id)arg2 ;
-(void)unregisterForNotificationsFromCharacteristics:(id)arg0 completion:(id)arg1 ;


@end


#endif