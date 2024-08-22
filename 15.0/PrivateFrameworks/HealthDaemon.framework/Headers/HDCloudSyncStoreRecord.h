// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCSTORERECORD_H
#define HDCLOUDSYNCSTORERECORD_H

@class NSString, NSArray, NSUUID;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableStore.h"
#import "HDCloudSyncSequenceRecord.h"
#import "HDCloudSyncShardPredicate.h"

@interface HDCloudSyncStoreRecord : HDCloudSyncRecord {
    HDCloudSyncCodableStore *_underlyingStore;
    HDCloudSyncSequenceRecord *_slotASequenceHeaderRecord;
    HDCloudSyncSequenceRecord *_slotBSequenceHeaderRecord;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) int deviceMode;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) NSInteger order;
@property (readonly, copy, nonatomic) NSArray *orderedSequenceRecords;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (copy, nonatomic) NSString *pendingOwner;
@property (copy, nonatomic) NSString *productType;
@property (nonatomic) int requiredProtocolVersion;
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord;
@property (copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate;
@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (nonatomic) int supportedProtocolVersion;
@property (copy, nonatomic) NSString *systemBuildVersion;
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *tombstoneSequenceRecord; // ivar: _tombstoneSequenceRecord


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isStoreRecord:(id)arg0 ;
+(BOOL)isStoreRecordID:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(id)fieldsForUnprotectedSerialization;
+(id)recordIDForOwnerIdentifier:(id)arg0 storeIdentifier:(id)arg1 zoneID:(id)arg2 ;
+(id)recordIDWithIndividualZoneID:(id)arg0 ;
+(id)recordType;
+(id)recordWithCKRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasActiveSequence;
-(BOOL)hasSequenceWithFutureProtocolVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeSequenceHeaderRecord;
-(id)addNewSequenceHeaderRecordWithSyncAnchorMap:(id)arg0 includedIdentifiers:(id)arg1 ;
-(id)addNewTombstoneSequenceHeaderRecordWithIncludedIdentifiers:(id)arg0 ;
-(id)clearCurrentSequenceHeaderRecord;
-(id)clearOldSequenceHeaderRecord;
-(id)clearPendingSequenceHeaderRecord;
-(id)clearTombstoneSequenceHeaderRecord;
-(id)currentSequenceHeaderRecord;
-(id)description;
-(id)initInSyncCircle:(id)arg0 ownerIdentifier:(id)arg1 storeIdentifier:(id)arg2 unified:(BOOL)arg3 ;
-(id)initInSyncCircle:(id)arg0 ownerIdentifier:(id)arg1 storeIdentifier:(id)arg2 zoneID:(id)arg3 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)oldSequenceHeaderRecord;
-(id)pendingSequenceHeaderRecord;
-(id)printDescription;
-(id)sequenceRecordWithRecordID:(id)arg0 ;
-(id)serializeUnderlyingMessage;
-(void)addSequenceHeaderRecord:(id)arg0 ;
-(void)removeSequenceHeaderRecord:(id)arg0 ;
-(void)repairOwnerIdentifier:(id)arg0 ;


@end


#endif