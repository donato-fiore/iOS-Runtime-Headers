// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPFAVORITESREPLICA_H
#define MSPFAVORITESREPLICA_H

@class NSArray, NSString, NSData;
@protocol NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPContainerStateSnapshot, MSPCloudReplica;


#import "MSPOrderedReplica.h"

@interface MSPFavoritesReplica : MSPOrderedReplica <NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPContainerStateSnapshot, MSPCloudReplica>



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
// +(void)switchForEdit:(id)arg0 caseIsInsertRecord:(id)arg1 caseIsEditContents:(unk)arg2 caseIsEditPosition:(id)arg3 caseIsRemoveTombstone:(unk)arg4  ;
-(Class)replicaRecordClass;
-(id)changesMergingCloudChanges:(id)arg0 withReplica:(id)arg1 lastSyncDate:(id)arg2 ;
-(id)editsToMergeWithReplica:(id)arg0 mergeOptions:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 recordCreationHandler:(id)arg1 ;
-(id)mergeOptionsWithLastSyncDate:(id)arg0 ;
-(id)propertyListRepresentationDecoratingRecordsWithBlock:(id)arg0 ;
-(id)replicaByMergingWithReplica:(id)arg0 mergeOptions:(id)arg1 userVisibleEffectiveContentsChanged:(*BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif