// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPHISTORYREPLICA_H
#define MSPHISTORYREPLICA_H

@class NSArray, NSString, NSData;
@protocol MSPContainerStateSnapshot, NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPCloudReplica;


#import "MSPReplica.h"

@interface MSPHistoryReplica : MSPReplica <MSPContainerStateSnapshot, NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPCloudReplica>



@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *propertyListDataRepresentation;
@property (readonly, nonatomic) id *propertyListRepresentation;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)allowedEditClasses;
// +(void)switchForEdit:(id)arg0 caseIsInsertRecord:(id)arg1 caseIsEditContents:(unk)arg2 caseIsEditModificationDate:(id)arg3 caseIsDeleteTombstone:(unk)arg4  ;
-(Class)replicaRecordClass;
-(id)_sortedHistoryEntriesByApplyingEdits:(id)arg0 invalidEntryIdentifiers:(*id)arg1 ;
-(id)changesMergingCloudChanges:(id)arg0 withReplica:(id)arg1 lastSyncDate:(id)arg2 ;
-(id)editsToMergeWithReplica:(id)arg0 ;
-(id)editsToMergeWithReplica:(id)arg0 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg1 ;
-(id)editsToMergeWithReplica:(id)arg0 mergeOptions:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 recordCreationHandler:(id)arg1 ;
-(id)mergeOptionsWithLastSyncDate:(id)arg0 ;
-(id)propertyListRepresentationDecoratingRecordsWithBlock:(id)arg0 ;
-(id)replicaByMergingWithReplica:(id)arg0 mergeOptions:(id)arg1 userVisibleEffectiveContentsChanged:(*BOOL)arg2 ;
-(void)_mergeSelfRecord:(id)arg0 withRecordFromOtherReplica:(id)arg1 identifier:(id)arg2 options:(id)arg3 edits:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif