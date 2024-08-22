// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDSHARETRUSTMANAGER_H
#define HMDCLOUDSHARETRUSTMANAGER_H

@class HMFObject, HMBCloudZone, NSString, HMBLocalZone, HMBShareUserID, HMFTimer;
@protocol HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource, HMDDatabaseDelegate, HMFLogging, HMFTimerDelegate, HMDCloudShareTrustManagerDataSource, HMDDatabase, HMDCloudShareTrustManagerDelegate, OS_dispatch_queue;


#import "HMDCloudShareMessenger.h"
#import "HMDCloudShareParticipantsManager.h"
#import "HMDCloudShareTrustManagerMetricsEventDispatcher.h"

@interface HMDCloudShareTrustManager : HMFObject <HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource, HMDDatabaseDelegate, HMFLogging, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) HMDCloudShareMessenger *cloudShareMessenger; // ivar: _cloudShareMessenger
@property (retain) HMDCloudShareParticipantsManager *cloudShareParticipantManager; // ivar: _cloudShareParticipantManager
@property (retain) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property NSInteger configureState; // ivar: _configureState
@property (weak) NSObject<HMDCloudShareTrustManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) NSObject<HMDDatabase> *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCloudShareTrustManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMBLocalZone *localZone; // ivar: _localZone
@property (retain) HMDCloudShareTrustManagerMetricsEventDispatcher *metricsEventDispatcher; // ivar: _metricsEventDispatcher
@property (readonly, getter=isOwnedTrust) BOOL ownedTrust; // ivar: _ownedTrust
@property (retain) HMBShareUserID *ownerCloudShareID; // ivar: _ownerCloudShareID
@property (copy) id *participantsManagerFactory; // ivar: _participantsManagerFactory
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) HMFTimer *requestInviteTimer; // ivar: _requestInviteTimer
@property (copy) id *requestInviteTimerFactory; // ivar: _requestInviteTimerFactory
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)canUseUntrustedAccountHandlesForParticipantManager:(id)arg0 ;
-(BOOL)isFromOwner;
-(BOOL)isFromOwnerForCloudShareTrustManagerMetricsEventDispatcher:(id)arg0 ;
-(BOOL)isTrustConfigured;
-(BOOL)manager:(id)arg0 shouldShareWithUser:(id)arg1 ;
-(NSInteger)trustConfigureStateForCloudShareTrustManagerMetricsEventDispatcher:(id)arg0 ;
-(id)attributeDescriptions;
-(id)homeForCloudShareTrustManagerMetricsEventDispatcher:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 isOwnedTrust:(BOOL)arg1 queue:(id)arg2 shareMessenger:(id)arg3 ownerCloudShareID:(id)arg4 logEventSumbitter:(id)arg5 dailyScheduler:(id)arg6 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(id)logIdentifier;
-(struct CloudShareTrustManagerTrustStatusCounts )trustStatusCounts;
-(struct CloudShareTrustManagerTrustStatusCounts )trustStatusCountsForCloudShareTrustManagerMetricsEventDispatcher:(id)arg0 ;
-(void)_cancelRequestInviteTimer;
-(void)_configure;
-(void)_configureOwnerCloudShareIDWithCloudZone:(id)arg0 ;
-(void)_configureWithFetchZoneResult:(id)arg0 error:(id)arg1 ;
-(void)_configureWithOwnedZone;
-(void)_configureWithSharedZone;
-(void)_didCreateZone;
-(void)_didRemoveZone;
-(void)_finishConfigure;
-(void)_homeDidBecomeTrustZoneCapable:(id)arg0 ;
-(void)_requestShareInvitationForSharedZone;
-(void)_startRequestInviteTimer;
-(void)cloudZone:(id)arg0 didRemoveParticipantWithClientIdentifier:(id)arg1 ;
-(void)configure;
-(void)database:(id)arg0 didCreateZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)database:(id)arg0 didRemoveZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)discoverUntrustedUsers;
-(void)homeDidBecomeTrustZoneCapable:(id)arg0 ;
-(void)manager:(id)arg0 didRequestSendForInvitation:(id)arg1 toDevice:(id)arg2 ;
-(void)manager:(id)arg0 didRequestSendForInvitation:(id)arg1 toUser:(id)arg2 ;
-(void)messenger:(id)arg0 didReceiveInvitationData:(id)arg1 completion:(id)arg2 ;
-(void)messenger:(id)arg0 didReceiveInvitationRequestFromUser:(id)arg1 device:(id)arg2 ;
-(void)removeTrust;
-(void)sendShareInvitation:(id)arg0 toUser:(id)arg1 device:(id)arg2 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateCurrentUserCloudShareID;
-(void)updateSharedUsersCloudShareIDs;


@end


#endif