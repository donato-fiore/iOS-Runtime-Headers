// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPREPLICARECORDFROMCLOUDKIT_H
#define MSPREPLICARECORDFROMCLOUDKIT_H

@class NSData, NSString, CKRecord, NSUUID;
@protocol MSPReplicaRecordFromCloud;

#import <Foundation/Foundation.h>

#import "MSPVectorTimestamp.h"

@interface MSPReplicaRecordFromCloudKit : NSObject <MSPReplicaRecordFromCloud>



@property (readonly, copy, nonatomic) NSData *contents; // ivar: _contents
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // ivar: _contentsTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier; // ivar: _recordIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) BOOL tombstoneRepresentedByCloudRecord;


+(id)recordFromInsertEdit:(id)arg0 ;
+(id)tombstoneWithRecordIdentifier:(id)arg0 ;
-(id)initWithCKRecord:(id)arg0 ;
-(id)initWithContents:(id)arg0 contentsTimestamp:(id)arg1 identifier:(id)arg2 ;
-(id)initWithReplicaRecord:(id)arg0 recordID:(id)arg1 ;
-(id)recordRepresentationWithType:(id)arg0 recordZoneID:(id)arg1 ;
-(id)tombstoneRecordRepresentation;
-(void)applyUpdateEdit:(id)arg0 ;


@end


#endif