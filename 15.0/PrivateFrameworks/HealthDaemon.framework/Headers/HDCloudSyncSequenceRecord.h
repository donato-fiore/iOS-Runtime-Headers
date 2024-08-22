// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCSEQUENCERECORD_H
#define HDCLOUDSYNCSEQUENCERECORD_H

@class CKRecordID, NSSet, NSUUID;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableSequence.h"
#import "HDSyncAnchorMap.h"

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSequence *_underlyingSequence;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSInteger baselineEpoch;
@property (readonly, nonatomic) NSInteger changeIndex;
@property (readonly, nonatomic) NSInteger childRecordCount;
@property (copy, nonatomic) CKRecordID *firstUnfrozenChangeRecord;
@property (readonly, nonatomic) HDSyncAnchorMap *frozenSyncAnchorMap;
@property (readonly, copy, nonatomic) NSSet *includedIdentifiers;
@property (nonatomic) int protocolVersion;
@property (readonly, nonatomic) int slot;
@property (readonly, copy, nonatomic) NSUUID *storeIdentifier; // ivar: _storeIdentifier
@property (readonly, nonatomic) HDSyncAnchorMap *syncAnchorMap;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isSequenceRecord:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(id)fieldsForUnprotectedSerialization;
+(id)recordIDsForOwnerIdentifier:(id)arg0 storeIdentifier:(id)arg1 zoneID:(id)arg2 ;
+(id)recordIDsWithIndividualZoneID:(id)arg0 ;
+(id)recordType;
+(id)recordWithCKRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initForSequenceSlot:(int)arg0 syncAnchorMap:(id)arg1 changeIndex:(NSUInteger)arg2 baselineEpoch:(NSInteger)arg3 includedIdentifiers:(id)arg4 storeRecord:(id)arg5 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;
-(void)decrementChildRecordCount:(NSUInteger)arg0 ;
-(void)incrementChangeIndex;
-(void)incrementChildRecordCount;
-(void)replaceSyncAnchorMapWithSyncAnchorMap:(id)arg0 ;
-(void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)arg0 ;
-(void)updateSyncAnchorMapWithSyncAnchorMap:(id)arg0 ;


@end


#endif