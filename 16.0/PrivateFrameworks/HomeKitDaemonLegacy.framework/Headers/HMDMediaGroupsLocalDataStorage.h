// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSLOCALDATASTORAGE_H
#define HMDMEDIAGROUPSLOCALDATASTORAGE_H

@class HMFObject, NSMutableDictionary, NSString, NSArray, NSUUID;
@protocol HMDMediaGroupsAggregatorBackupSenderDataSource, HMDMediaGroupsLocalDataStorageDataSource;


#import "HMDMediaGroupsAggregatorBackupSender.h"

@interface HMDMediaGroupsLocalDataStorage : HMFObject <HMDMediaGroupsAggregatorBackupSenderDataSource>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_groups;
    NSMutableDictionary *_participantAccessororyUUIDToAssociatedGroupIdentifier;
}


@property (readonly) HMDMediaGroupsAggregatorBackupSender *backupDataSender; // ivar: _backupDataSender
@property (weak) NSObject<HMDMediaGroupsLocalDataStorageDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *groups;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)allParticipantAccessoryUUIDs;
-(id)associatedGroupIdentifierForParticipantAccessoryUUID:(id)arg0 ;
-(id)associatedGroupsWithGroupIdentifier:(id)arg0 ;
-(id)backupGroupsForParticipantAccessoryUUID:(id)arg0 ;
-(id)backupGroupsForParticipantAccessoryUUID:(id)arg0 mediaGroupsAggregatorBackupSender:(id)arg1 ;
-(id)groupWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 backupSender:(id)arg1 ;
-(id)logIdentifier;
-(id)nullSentinalUUID;
-(id)receiverForParticipantAccessoryUUID:(id)arg0 ;
-(id)receiverForParticipantAccessoryUUID:(id)arg0 mediaGroupsAggregatorBackupSender:(id)arg1 ;
-(id)routerForParticipantAccessoryUUID:(id)arg0 ;
-(id)routerForParticipantAccessoryUUID:(id)arg0 mediaGroupsAggregatorBackupSender:(id)arg1 ;
-(void)addBackedUpGroup:(id)arg0 ;
-(void)addBackedUpGroups:(id)arg0 ;
-(void)backupData;
-(void)clearCachedData;
-(void)removeGroupWithIdentifier:(id)arg0 ;
-(void)setParticipantAccessoryUUID:(id)arg0 associatedGroupIdentifier:(id)arg1 ;
-(void)unsetParticipantAccessoryUUIDsWithAssociatedGroupIdentifier:(id)arg0 ;
-(void)updateGroup:(id)arg0 ;
-(void)updateGroup:(id)arg0 participantAccessoryUUIDs:(id)arg1 ;
-(void)updateUsingParticipantAccessoryUUID:(id)arg0 associatedGroupIdentifier:(id)arg1 backedUpGroupData:(id)arg2 ;


@end


#endif