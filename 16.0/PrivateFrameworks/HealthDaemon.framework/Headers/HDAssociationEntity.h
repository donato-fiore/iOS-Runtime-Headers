// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDASSOCIATIONENTITY_H
#define HDASSOCIATIONENTITY_H



#import "HDHealthEntity.h"

@interface HDAssociationEntity : HDHealthEntity



+(BOOL)associateSampleUUIDData:(id)arg0 withSampleUUID:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)associateSampleUUIDs:(id)arg0 withSampleUUID:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)copyAssociationsFromObject:(id)arg0 toObject:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)copyAssociationsFromObjectID:(id)arg0 toObjectID:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)insertEntriesWithAssociation:(id)arg0 objects:(id)arg1 enforceSameSource:(BOOL)arg2 profile:(id)arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(BOOL)insertEntriesWithAssociationUUID:(id)arg0 objectUUIDsData:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)realizePendingAssociationsWithTransaction:(id)arg0 startingAnchor:(NSInteger)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)associationUUIDsForObjectUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)countOfObjectsAssociatedWithObjectUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)deleteStatementForAssociationWithTransaction:(id)arg0 ;
+(id)deleteStatementForObjectAssociationsWithTransaction:(id)arg0 ;
+(id)indices;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)journalEntryForAssociation:(id)arg0 objects:(id)arg1 ;
+(id)objectIDsForAssociationEntityWithPersistentID:(NSInteger)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)objectUUIDsAssociatedWithObjectUUID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)privateSubEntities;
+(id)propertyForSyncProvenance;
+(id)tableAliases;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif