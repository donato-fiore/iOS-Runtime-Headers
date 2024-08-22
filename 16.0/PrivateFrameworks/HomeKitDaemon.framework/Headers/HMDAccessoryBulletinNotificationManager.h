// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYBULLETINNOTIFICATIONMANAGER_H
#define HMDACCESSORYBULLETINNOTIFICATIONMANAGER_H

@class HMFObject, NSArray, NSString, NSNotificationCenter;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDAppleAccountManager.h"
#import "HMDAccountRegistry.h"
#import "HMDNotificationConditionEvaluator.h"
#import "HMDHome.h"
#import "HMDBulletinNotificationRegistrationSource.h"

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
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSArray *serviceRegistrationsForCurrentDevice;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_characteristicBulletinRegistrationsForSource:(id)arg0 context:(id)arg1 ;
+(id)logCategory;
-(id)_currentHomeAccessoryUUIDs;
-(id)_devicesToNotifyForCharacteristic:(id)arg0 ;
-(id)_mkfLocalCharacteristicRegistrationsWithManagedObjectContext:(id)arg0 ;
-(id)_mkfLocalServiceRegistrationsWithManagedObjectContext:(id)arg0 ;
-(id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)arg0 ;
-(id)bulletinBoardNotificationForService:(id)arg0 ;
-(id)characteristicsByDestinationForCharacteristics:(id)arg0 ;
-(id)conditionsFromPredicate:(id)arg0 ;
-(id)initWithHome:(id)arg0 workQueue:(id)arg1 accountRegistry:(id)arg2 accountManager:(id)arg3 evaluator:(id)arg4 notificationCenter:(id)arg5 ;
-(id)logIdentifier;
-(void)_auditRegistrationsForMultipleHomesIssue;
-(void)_handleAccessoryBulletinNotificationRegistration:(id)arg0 removed:(BOOL)arg1 ;
-(void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)arg0 ;
-(void)_handleDeviceBecameNotPrimary;
-(void)_handleDeviceBecamePrimary;
-(void)_handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)_synchronizeLocalRegistrationsWithPrimaryResident;
-(void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)arg0 disabledRegistrations:(id)arg1 ;
-(void)configureWithDeviceIsResidentCapable:(BOOL)arg0 ;
-(void)disableBulletinForService:(id)arg0 completion:(id)arg1 ;
-(void)enableBulletinForService:(id)arg0 conditions:(id)arg1 completion:(id)arg2 ;
-(void)handleCurrentDeviceOrAccountUpdatedNotification:(id)arg0 ;
-(void)handleDisabledRegistrations:(id)arg0 ;
-(void)handleEnabledRegistrations:(id)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)handleRemovedService:(id)arg0 ;
-(void)updateRegistrationsWithEnabledCharacteristics:(id)arg0 disabledCharacteristics:(id)arg1 conditions:(id)arg2 completion:(id)arg3 ;


@end


#endif