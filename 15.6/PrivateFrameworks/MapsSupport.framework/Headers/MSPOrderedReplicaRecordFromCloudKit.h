// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPORDEREDREPLICARECORDFROMCLOUDKIT_H
#define MSPORDEREDREPLICARECORDFROMCLOUDKIT_H

@class NSData, NSString, CKRecord, NSUUID;
@protocol MSPOrderedReplicaRecord, MSPOrderedReplicaRecordFromCloud;


#import "MSPReplicaRecordFromCloudKit.h"
#import "MSPVectorTimestamp.h"
#import "MSPPosition.h"

@interface MSPOrderedReplicaRecordFromCloudKit : MSPReplicaRecordFromCloudKit <MSPOrderedReplicaRecord, MSPOrderedReplicaRecordFromCloud>



@property (readonly, copy, nonatomic) NSData *contents;
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MSPPosition *position; // ivar: _position
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp; // ivar: _positionTimestamp
@property (retain, nonatomic) CKRecord *record;
@property (readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) BOOL tombstoneRepresentedByCloudRecord;


+(id)recordFromInsertEdit:(id)arg0 ;
-(id)initWithCKRecord:(id)arg0 ;
-(id)initWithContents:(id)arg0 contentsTimestamp:(id)arg1 position:(id)arg2 positionTimestamp:(id)arg3 identifier:(id)arg4 ;
-(id)initWithReplicaRecord:(id)arg0 recordID:(id)arg1 ;
-(void)applyUpdatePositionEdit:(id)arg0 ;


@end


#endif