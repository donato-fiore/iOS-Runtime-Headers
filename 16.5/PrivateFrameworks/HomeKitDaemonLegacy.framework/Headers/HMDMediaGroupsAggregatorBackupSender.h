// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAGROUPSAGGREGATORBACKUPSENDER_H
#define HMDMEDIAGROUPSAGGREGATORBACKUPSENDER_H

@class HMFObject, NSMutableDictionary, NSString, NSUUID;
@protocol HMFLogging, HMDMediaGroupsAggregateBackupMessageTimerDelegate, HMDMediaGroupsAggregateBackupMessageTimerProvider, HMDMediaGroupsAggregatorBackupSenderDataSource;



@interface HMDMediaGroupsAggregatorBackupSender : HMFObject <HMFLogging, HMDMediaGroupsAggregateBackupMessageTimerDelegate, HMDMediaGroupsAggregateBackupMessageTimerProvider>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_backupTimers;
}


@property (weak) NSObject<HMDMediaGroupsAggregateBackupMessageTimerProvider> *backupTimerProvider; // ivar: _backupTimerProvider
@property (weak) NSObject<HMDMediaGroupsAggregatorBackupSenderDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)backupGroupsForParticipantAccessoryUUID:(id)arg0 ;
-(id)backupTimerForParticipantAccessoryUUID:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 backupTimerProvider:(id)arg1 ;
-(id)logIdentifier;
-(id)mediaGroupsAggregateBackupMessageTimerWithParticipantAccessoryUUID:(id)arg0 ;
-(id)receiverForParticipantAccessoryUUID:(id)arg0 ;
-(id)routerParticipantAccessoryUUID:(id)arg0 ;
-(void)_sendBackupToFirstPartyParticipantAccessoryUUID:(id)arg0 backupGroups:(id)arg1 ;
-(void)_sendBackupToParticipantAccessoryUUID:(id)arg0 ;
-(void)clearCachedData;
-(void)clearCachedDataForParticipantAccessoryUUID:(id)arg0 ;
-(void)createNewBackupTimerForParticipantAccessoryUUID:(id)arg0 ;
-(void)didFireTimerForMediaGroupsAggregateBackupMessageTimer:(id)arg0 ;
-(void)locallyRouteGroupsBackupDataMessage:(id)arg0 toParticipantAccessoryUUID:(id)arg1 ;
-(void)markAttemptForParticipantAccessoryUUID:(id)arg0 withMessageIdentifier:(id)arg1 ;
-(void)removeBackupTimerWithParticipantAccessoryUUID:(id)arg0 ;
-(void)routeBackedUpGroupsMessage:(id)arg0 toParticipantAccessoryUUID:(id)arg1 ;
-(void)sendBackupToParticipantAccessoryUUID:(id)arg0 ;
-(void)setBackUpTimer:(id)arg0 ;
-(void)startBackupTimerWithParticipantAccessoryUUID:(id)arg0 dueToFailedMessageIdentifier:(id)arg1 ;


@end


#endif