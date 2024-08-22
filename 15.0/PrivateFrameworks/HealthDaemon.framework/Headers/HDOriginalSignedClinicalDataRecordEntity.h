// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDORIGINALSIGNEDCLINICALDATARECORDENTITY_H
#define HDORIGINALSIGNEDCLINICALDATARECORDENTITY_H



#import "HDHealthEntity.h"

@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity



+(BOOL)validateCodableRecord:(id)arg0 error:(*id)arg1 ;
+(NSInteger)protectionClass;
+(id)allProperties;
+(id)checkConstraints;
+(id)databaseTable;
+(id)entityWithSyncIdentifier:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)entityWithSyncIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)existingEntityWithSyncIdentifier:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)existingEntityWithSyncIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)foreignKeys;
+(id)insertCodableRecord:(id)arg0 shouldReplace:(BOOL)arg1 accountPersistentID:(NSInteger)arg2 syncProvenance:(NSInteger)arg3 database:(id)arg4 error:(*id)arg5 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)newCompatibleCodableSignedClinicalDataRecord;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif