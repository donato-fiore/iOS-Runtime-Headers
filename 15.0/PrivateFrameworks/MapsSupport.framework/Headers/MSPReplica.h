// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPREPLICA_H
#define MSPREPLICA_H

@class NSUUID, NSString, NSDictionary;
@protocol MSPCloudReplica;

#import <Foundation/Foundation.h>


@interface MSPReplica : NSObject <MSPCloudReplica>



@property (readonly, copy, nonatomic) NSUUID *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *records; // ivar: _records
@property (readonly) Class superclass;


+(id)allowedEditClasses;
// +(void)_switchForEdit:(id)arg0 caseIsInsertRecord:(id)arg1 caseIsEditContents:(unk)arg2  ;
-(BOOL)_containerSerializationRequiresTrackingPositionEdits;
-(Class)replicaRecordClass;
// -(id)_replicaByApplyingContainerEdits:(id)arg0 toOldContents:(id)arg1 forNewContents:(id)arg2 recordCreationHandler:(id)arg3 replicaEditApplier:(unk)arg4 error:(id)arg5  ;
-(id)changesMergingCloudChanges:(id)arg0 withReplica:(id)arg1 lastSyncDate:(id)arg2 ;
-(id)editsToInsertOrUpdateRecords:(id)arg0 ;
-(id)editsToMergeWithReplica:(id)arg0 ;
-(id)editsToMergeWithReplica:(id)arg0 mergeOptions:(id)arg1 ;
-(id)editsToRemoveRecordsWithIdentifiers:(id)arg0 ;
-(id)init;
-(id)initWithRecords:(id)arg0 clientIdentifier:(id)arg1 ;
-(id)mergeOptionsWithLastSyncDate:(id)arg0 ;
// -(id)replicaByApplyingContainerEdits:(id)arg0 toOldContents:(id)arg1 forNewContents:(id)arg2 recordCreationHandler:(id)arg3 replicaEditApplier:(unk)arg4 error:(id)arg5  ;
-(id)tombstoneRecordForRecord:(id)arg0 ;
-(void)_mergeSelfRecord:(id)arg0 withRecordFromOtherReplica:(id)arg1 identifier:(id)arg2 options:(id)arg3 edits:(id)arg4 ;


@end


#endif