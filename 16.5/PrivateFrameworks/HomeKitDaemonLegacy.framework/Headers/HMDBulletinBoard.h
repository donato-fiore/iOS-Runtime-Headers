// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBULLETINBOARD_H
#define HMDBULLETINBOARD_H

@class HMFObject, NSMutableDictionary, NSString, NAFuture, NSSet;
@protocol HMFLogging, HMDUserNotificationCenterDelegate, NSSecureCoding, HMDCameraBulletinBoard, HMDFileManager, HMMLogEventSubmitting, OS_dispatch_queue;


#import "HMDHomeManager.h"
#import "HMDUserNotificationCenter.h"

@interface HMDBulletinBoard : HMFObject <HMFLogging, HMDUserNotificationCenterDelegate, NSSecureCoding, HMDCameraBulletinBoard>



@property (readonly) NSMutableDictionary *characteristicTuples; // ivar: _characteristicTuples
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) Class doorbellBulletinUtilitiesClass; // ivar: _doorbellBulletinUtilitiesClass
@property (readonly) NSObject<HMDFileManager> *fileManager; // ivar: _fileManager
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) NAFuture *isConfiguredFuture; // ivar: _isConfiguredFuture
@property (retain) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, copy) NSSet *notificationCategories; // ivar: _notificationCategories
@property (readonly) HMDUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain) NSMutableDictionary *notificationRequests; // ivar: _notificationRequests
@property (retain) Class persistentStoreClass; // ivar: _persistentStoreClass
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)isBulletinSupportedForCharacteristicType:(id)arg0 serviceType:(id)arg1 ;
+(BOOL)isBulletinSupportedForNonSecureCharacteristicType:(id)arg0 serviceType:(id)arg1 ;
+(BOOL)isCriticalNonSecureServiceType:(id)arg0 ;
+(BOOL)presentationValueOfCharacteristic:(id)arg0 equalTo:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)interruptionLevelForChangedCharacteristic:(id)arg0 ;
+(id)_supportedNonSecureServices;
+(id)_supportedSecureServices;
+(id)attachmentsWithFileURL:(id)arg0 ;
+(id)bulletinSupportedCharacteristicsForService:(id)arg0 ;
+(id)characteristicTupleKeyFromServiceContextID:(id)arg0 currentType:(id)arg1 ;
+(id)createImageAttachmentByHardLinkingFile:(id)arg0 fileManager:(id)arg1 ;
+(id)logCategory;
+(id)sharedBulletinBoard;
-(BOOL)_hasDuplicateBulletinForCharacteristic:(id)arg0 ;
-(BOOL)_hasDuplicateBulletinForSnapshotCharacteristic:(id)arg0 ;
-(BOOL)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg0 ;
-(BOOL)_shouldSkipBulletinForChangedCharacteristic:(id)arg0 ;
-(BOOL)_updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg0 ;
-(id)_copyItemAtURL:(id)arg0 toDirectory:(id)arg1 ;
-(id)_doorbellPressNotificationsNearDate:(id)arg0 forCameraProfile:(id)arg1 ;
-(id)_insertRequestWithTitle:(id)arg0 snapshotData:(id)arg1 message:(id)arg2 requestIdentifier:(id)arg3 date:(id)arg4 bulletinType:(NSUInteger)arg5 actionURL:(id)arg6 bulletinContext:(id)arg7 actionContext:(id)arg8 interruptionLevel:(NSUInteger)arg9 logEventTopic:(NSInteger)arg10 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotificationCenter:(id)arg0 fileManager:(id)arg1 workQueue:(id)arg2 logEventSubmitter:(id)arg3 ;
-(id)insertBulletinForIncomingInvitation:(id)arg0 ;
-(id)insertBulletinForSecureTrigger:(id)arg0 ;
-(id)messageForChangedCharacteristic:(id)arg0 withSignificantEvents:(id)arg1 ;
-(id)messageForLockCharacteristic:(id)arg0 personName:(id)arg1 ;
-(id)notificationRequestsForCameraClipUUIDs:(id)arg0 ;
-(id)removeRedundantSignificantEventNotificationsForSignificantEvents:(id)arg0 ;
-(id)titleNameForChangedCharacteristic:(id)arg0 ;
-(id)updateBulletinForFirmwareUpdateInHome:(id)arg0 ;
-(void)_handleDidReceiveNotificationResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)_insertImageBulletinsForChangedCharacteristics:(id)arg0 snapshotData:(id)arg1 completion:(id)arg2 ;
-(void)_insertLockBulletinForChangedCharacteristic:(id)arg0 logEventTopic:(NSInteger)arg1 ;
-(void)_submitLogEventForDoorbellPressedBulletinWithDate:(id)arg0 significantEvents:(id)arg1 ;
-(void)_submitLogEventForSignificantEventBulletin:(id)arg0 ;
-(void)_updateCharacteristicTupleFor:(id)arg0 withCurrentType:(id)arg1 changedByThisDevice:(BOOL)arg2 ;
-(void)_updateDoorbellUserInfo:(id)arg0 withSignificantEventUserInfo:(id)arg1 ;
-(void)addNotificationRequest:(id)arg0 forIdentifier:(id)arg1 ;
-(void)archive;
-(void)configureWithHomeManager:(id)arg0 ;
-(void)cullBulletinsToCount:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchAreUserNotificationsEnabledWithCompletion:(id)arg0 ;
-(void)insertAccessCodeAddedBulletinForHome:(id)arg0 ;
-(void)insertAccessCodeChangedBulletinForHome:(id)arg0 ;
-(void)insertAccessCodeRemovedBulletinForHome:(id)arg0 ;
-(void)insertBulletinForIncompatibleInvitationFromInviterName:(id)arg0 homeName:(id)arg1 ownedHomeIdentifier:(id)arg2 ;
-(void)insertBulletinForLockOperation:(id)arg0 displayName:(id)arg1 lockOperationType:(int)arg2 lockOperationSource:(int)arg3 ;
-(void)insertBulletinsForChangedCharacteristics:(id)arg0 changedByThisDevice:(BOOL)arg1 completion:(id)arg2 ;
-(void)insertBulletinsForMatterFirmwareUpdateInstalledInHome:(id)arg0 ;
-(void)insertCameraAccessModeChangedBulletin:(id)arg0 ;
-(void)insertCameraClipSignificantEventBulletin:(id)arg0 ;
-(void)insertConnectedCHIPEcosystemsChangedBulletin:(id)arg0 ;
-(void)insertHomeHubReachabilityBulletinForHome:(id)arg0 reachable:(BOOL)arg1 hasMultipleResidentsSupportingCameraRecording:(BOOL)arg2 ;
-(void)insertImageBulletinsForChangedCharacteristics:(id)arg0 snapshotData:(id)arg1 completion:(id)arg2 ;
-(void)insertLockOnboardingBulletinForHome:(id)arg0 serviceType:(id)arg1 ;
-(void)insertNewRMVLanguageBulletinForHome:(id)arg0 language:(id)arg1 ;
-(void)insertReachabilityEventBulletinForAccessory:(id)arg0 reachable:(BOOL)arg1 date:(id)arg2 ;
-(void)insertWalletKeyExpressModeSetUpBulletinForHome:(id)arg0 ;
-(void)insertWalletKeySupportAddedBulletinForAccessory:(id)arg0 ;
-(void)notificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)refreshHomeBadgeNumber;
-(void)removeAllBulletins;
-(void)removeBulletinWithRecordID:(id)arg0 ;
-(void)removeBulletinsForAccessory:(id)arg0 ;
-(void)removeBulletinsForHome:(id)arg0 ;
-(void)removeBulletinsForService:(id)arg0 ;
-(void)removeBulletinsForTrigger:(id)arg0 ;
-(void)removeBulletinsUsingPredicate:(id)arg0 ;
-(void)removeCameraClipBulletinsForCameraProfile:(id)arg0 ;
-(void)removeImageFilesForNotificationRequests:(id)arg0 ;
-(void)removeNotificationRequestsWithIdentifiers:(id)arg0 shouldDeleteAttachments:(BOOL)arg1 ;
-(void)removeWalletKeyOnboardingBulletinForHome:(id)arg0 ;
-(void)updateContent:(id)arg0 forNotificationWithRequestIdentifier:(id)arg1 ;
-(void)updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg0 completion:(id)arg1 ;
-(void)updateMessageForDoorbellPressNotificationRequestWithIdentifier:(id)arg0 cameraProfile:(id)arg1 ;


@end


#endif