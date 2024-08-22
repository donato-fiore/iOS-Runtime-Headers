// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPPINNEDPLACESREPLICA_H
#define MSPPINNEDPLACESREPLICA_H

@class NSArray, NSString, NSData;
@protocol MSPCloudReplica, MSPContainerStateSnapshot, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization;


#import "MSPOrderedReplica.h"

@interface MSPPinnedPlacesReplica : MSPOrderedReplica <MSPCloudReplica, MSPContainerStateSnapshot, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization>



@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *propertyListDataRepresentation;
@property (readonly, nonatomic) id *propertyListRepresentation;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


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