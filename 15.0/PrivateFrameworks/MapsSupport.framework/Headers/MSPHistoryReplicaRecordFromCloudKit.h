// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPHISTORYREPLICARECORDFROMCLOUDKIT_H
#define MSPHISTORYREPLICARECORDFROMCLOUDKIT_H

@class NSData, NSString, NSDate, CKRecord, NSUUID;
@protocol MSPHistoryReplicaRecord, MSPHistoryReplicaRecordFromCloud;


#import "MSPReplicaRecordFromCloudKit.h"
#import "MSPVectorTimestamp.h"

@interface MSPHistoryReplicaRecordFromCloudKit : MSPReplicaRecordFromCloudKit <MSPHistoryReplicaRecord, MSPHistoryReplicaRecordFromCloud>



@property (readonly, copy, nonatomic) NSData *contents;
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) CKRecord *record;
@property (readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) BOOL tombstoneRepresentedByCloudRecord;


+(id)recordFromInsertEdit:(id)arg0 ;
+(id)tombstoneWithRecordIdentifier:(id)arg0 ;
-(id)initWithCKRecord:(id)arg0 ;
-(id)initWithReplicaRecord:(id)arg0 recordID:(id)arg1 ;
-(void)applyDeleteTombstoneEdit:(id)arg0 ;
-(void)applyUpdateEdit:(id)arg0 ;
-(void)applyUpdateModificationDateEdit:(id)arg0 ;


@end


#endif