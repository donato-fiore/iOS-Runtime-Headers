// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDQUANTITYSAMPLESERIESENTITY_H
#define HDQUANTITYSAMPLESERIESENTITY_H

@class NSString;
@protocol HDSeriesEntity;


#import "HDQuantitySampleEntity.h"

@interface HDQuantitySampleSeriesEntity : HDQuantitySampleEntity <HDSeriesEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deleteSeriesDataWithKey:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteSeriesWithID:(id)arg0 deleteSeriesData:(BOOL)arg1 profile:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(BOOL)enumerateDataWithIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)enumerateDataWithIdentifier:(id)arg0 transaction:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)enumerateDataWithTransaction:(id)arg0 HFDKey:(NSInteger)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)enumerateRawDataWithTransaction:(id)arg0 HFDKey:(NSInteger)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)insertValues:(id)arg0 series:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)isConcreteEntity;
+(BOOL)performPostFirstJournalMergeCleanupWithTransaction:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)primitiveInsertValues:(id)arg0 seriesVersion:(NSInteger)arg1 HFDKey:(NSInteger)arg2 database:(id)arg3 error:(*id)arg4 ;
+(BOOL)primitiveRemoveDatums:(id)arg0 HFDKey:(NSInteger)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)replaceExistingObject:(id)arg0 existingObjectID:(id)arg1 replacementObject:(id)arg2 replacementObjectID:(id)arg3 profile:(id)arg4 transaction:(id)arg5 error:(*id)arg6 ;
+(BOOL)replaceObjectID:(id)arg0 replacementObjectID:(id)arg1 deleteOriginalSeriesData:(BOOL)arg2 profile:(id)arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(BOOL)supportsObjectMerging;
+(BOOL)unitTesting_insertValues:(id)arg0 quantitySample:(id)arg1 seriesVersion:(NSInteger)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)validateEntityWithProfile:(id)arg0 error:(*id)arg1 validationErrorHandler:(id)arg2 ;
+(Class)entityClassForEnumeration;
+(NSInteger)_hasSeriesDataWithDatabase:(id)arg0 hfdKey:(NSUInteger)arg1 error:(*id)arg2 ;
+(NSInteger)unitTesting_insertionEra;
+(id)additionalPredicateForEnumeration;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)foreignKeys;
+(id)freezeSeriesWithIdentifier:(id)arg0 metadata:(id)arg1 endDate:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)hasSeriesDataForHFDKey:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)indices;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)mergeDataObject:(id)arg0 provenance:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(*id)arg4 insertHandler:(id)arg5 ;
+(id)objectInsertionFilterForProfile:(SEL)arg0 ;
+(id)orderingTermForSortDescriptor:(id)arg0 ;
+(id)privateSubEntities;
+(id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+(id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)arg0 error:(*id)arg1 ;
+(id)removeValues:(id)arg0 fromQuantitySeriesSample:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
+(void)unitTesting_updateInsertionEra;
-(BOOL)deleteFromDatabase:(id)arg0 error:(*id)arg1 ;
-(BOOL)enumerateDataWithTransaction:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)insertValues:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)startTimeEndTimeCountForSeriesWithTransaction:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)unitTesting_setInsertionEra:(NSInteger)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(id)HFDKeyWithDatabase:(id)arg0 error:(*id)arg1 ;
-(id)countForSeriesWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)freezeWithEndDate:(id)arg0 transaction:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
-(id)hasSeriesDataWithTransaction:(id)arg0 error:(*id)arg1 ;
-(void)willDeleteFromDatabase:(id)arg0 ;


@end


#endif