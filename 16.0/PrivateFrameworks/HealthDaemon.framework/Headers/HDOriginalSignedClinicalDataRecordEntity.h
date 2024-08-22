// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDORIGINALSIGNEDCLINICALDATARECORDENTITY_H
#define HDORIGINALSIGNEDCLINICALDATARECORDENTITY_H



#import "HDHealthEntity.h"

@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity



+(NSInteger)protectionClass;
+(id)allColumns;
+(id)allProperties;
+(id)checkConstraints;
+(id)databaseTable;
+(id)entityWithSyncIdentifier:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)existingEntityWithSyncIdentifier:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)foreignKeys;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif