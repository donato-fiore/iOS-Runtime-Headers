// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERSETTINGSBACKINGSTORECONTROLLER_H
#define HMDUSERSETTINGSBACKINGSTORECONTROLLER_H

@class NSUUID, HMBCloudZone, NSString, HMBLocalZone;
@protocol HMBLocalZoneModelObserver, HMFLogging, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareMessengerDelegate, HMDDatabaseDelegate, HMDSettingsBackingStoreController, OS_os_log, HMDAssistantAccessControlModelUpdateReceiver, HMDDatabase, HMDUserSettingsBackingStoreControllerDelegate, HMMLogEventSubmitting, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDSharedUserDataModelUpdateReceiver, HMDSettingTransactionReceiverProtocol, HMDUserListeningHistoryUpdateControlModelUpdateReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDCloudShareParticipantsManager.h"
#import "HMDCloudShareMessenger.h"

@interface HMDUserSettingsBackingStoreController : NSObject <HMBLocalZoneModelObserver, HMFLogging, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareMessengerDelegate, HMDDatabaseDelegate, HMDSettingsBackingStoreController>

 {
    NSObject<OS_os_log> *_logger;
    NSUInteger _startupSignPost;
}


@property (copy) NSUUID *assistantAccessControlModelID; // ivar: _assistantAccessControlModelID
@property (weak) NSObject<HMDAssistantAccessControlModelUpdateReceiver> *assistantAccessControlModelUpdateReceiver; // ivar: _assistantAccessControlModelUpdateReceiver
@property (retain) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly) NSObject<HMDDatabase> *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDUserSettingsBackingStoreControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMBLocalZone *localZone; // ivar: _localZone
@property NSInteger logEventRunState; // ivar: _logEventRunState
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (copy) NSUUID *mediaContentProfileAccessControlModelID; // ivar: _mediaContentProfileAccessControlModelID
@property (weak) NSObject<HMDMediaContentProfileAccessControlModelUpdateReceiver> *mediaContentProfileAccessControlModelUpdateReceiver; // ivar: _mediaContentProfileAccessControlModelUpdateReceiver
@property (retain) HMDCloudShareParticipantsManager *participantsManager; // ivar: _participantsManager
@property NSInteger runState; // ivar: _runState
@property (readonly) HMDCloudShareMessenger *shareMessenger; // ivar: _shareMessenger
@property (copy) NSUUID *sharedUserDataModelUpdateModelID; // ivar: _sharedUserDataModelUpdateModelID
@property (weak) NSObject<HMDSharedUserDataModelUpdateReceiver> *sharedUserDataModelUpdateReceiver; // ivar: _sharedUserDataModelUpdateReceiver
@property (readonly) Class superclass;
@property (weak) NSObject<HMDSettingTransactionReceiverProtocol> *transactionReceiver; // ivar: _transactionReceiver
@property (weak) NSObject<HMDUserListeningHistoryUpdateControlModelUpdateReceiver> *userListeningHistoryUpdateControlModelUpdateReceiver; // ivar: _userListeningHistoryUpdateControlModelUpdateReceiver
@property (copy) NSUUID *userListeningHistoryUpdateModelID; // ivar: _userListeningHistoryUpdateModelID
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, copy) NSString *zoneName; // ivar: _zoneName


+(id)logCategory;
-(BOOL)manager:(id)arg0 shouldShareWithUser:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 zoneName:(id)arg2 database:(id)arg3 shareMessenger:(id)arg4 ;
-(id)loadAssistantAccessControlModelWithModelID:(id)arg0 error:(*id)arg1 ;
-(id)loadMediaContentAccessControlModelWithModelID:(id)arg0 error:(*id)arg1 ;
-(id)loadPrivateUserDataModelWithError:(*id)arg0 ;
-(id)loadSharedUserDataModelWithError:(*id)arg0 ;
-(id)loadUserListeningHistoryUpdateControlModelWithModelID:(id)arg0 error:(*id)arg1 ;
-(id)loadUserSettings;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(id)logIdentifier;
-(id)queryPushTokensForDevicesObservingSubjectDevice:(id)arg0 subActivity:(id)arg1 ;
-(id)settingTransactionWithName:(id)arg0 ;
-(void)_didFetchZonesWithResult:(id)arg0 isOwnedZone:(BOOL)arg1 error:(id)arg2 ;
-(void)_invalidate;
-(void)_localZone:(id)arg0 updatedModel:(id)arg1 previousModel:(id)arg2 options:(id)arg3 result:(id)arg4 ;
-(void)_sendShareInvitation:(id)arg0 toUser:(id)arg1 device:(id)arg2 ;
-(void)_startWithOwnedZone;
-(void)_startWithSharedZone;
-(void)_updateLogEventRunState:(NSInteger)arg0 ;
-(void)_updateRunState:(NSInteger)arg0 ;
-(void)clearParticipants;
-(void)database:(id)arg0 didCreateZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)database:(id)arg0 didRemoveZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)deregisterObserverDeviceIdentifier:(id)arg0 ;
-(void)deregisterObserverDeviceIdentifier:(id)arg0 observerPushToken:(id)arg1 subActivity:(id)arg2 subjectDeviceIdentifier:(id)arg3 ;
-(void)destroyZone;
-(void)manager:(id)arg0 didRequestSendForInvitation:(id)arg1 toDevice:(id)arg2 ;
-(void)manager:(id)arg0 didRequestSendForInvitation:(id)arg1 toUser:(id)arg2 ;
-(void)messenger:(id)arg0 didReceiveInvitationData:(id)arg1 completion:(id)arg2 ;
-(void)messenger:(id)arg0 didReceiveInvitationRequestFromUser:(id)arg1 device:(id)arg2 ;
-(void)registerForAssistantAccessControlModelUpdates:(id)arg0 modelID:(id)arg1 ;
-(void)registerForMediaContentAccessControlModelUpdates:(id)arg0 modelID:(id)arg1 ;
-(void)registerForSettingsTransactions:(id)arg0 ;
-(void)registerForSharedUserDataModelUpdates:(id)arg0 modelID:(id)arg1 ;
-(void)registerForUserListeningHistoryUpdateControlModelUpdates:(id)arg0 modelID:(id)arg1 ;
-(void)registerObserverDeviceIdentifier:(id)arg0 observerPushToken:(id)arg1 subActivity:(id)arg2 subjectDeviceIdentifier:(id)arg3 ;
-(void)runSettingTransaction:(id)arg0 completion:(id)arg1 ;
-(void)runSettingTransaction:(id)arg0 waitForCloudPush:(BOOL)arg1 completion:(id)arg2 ;
-(void)runTransaction:(id)arg0 waitForCloudPush:(BOOL)arg1 completion:(id)arg2 ;
-(void)start;
-(void)updateObserverDeviceIdentifier:(id)arg0 observerPushToken:(id)arg1 ;
-(void)updateParticipants;


@end


#endif