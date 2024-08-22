// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDLOCATIONSERIESSAMPLEENTITY_H
#define HDLOCATIONSERIESSAMPLEENTITY_H

@class NSString;
@protocol HDSeriesEntity;


#import "HDSeriesSampleEntity.h"

@interface HDLocationSeriesSampleEntity : HDSeriesSampleEntity <HDSeriesEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)enumerateLocationDataInDatabase:(id)arg0 HFDKey:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)insertLocationData:(id)arg0 seriesIdentifier:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)isBackedByTable;
+(BOOL)isConcreteEntity;
+(BOOL)migrateDataFromDataStore:(*void)arg0 to:(*void)arg1 transaction:(id)arg2 recoveryAnalytics:(id)arg3 error:(*id)arg4 ;
+(BOOL)migrateDataToSQLFromStore:(*void)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)participatesInInsertion;
+(BOOL)performPostJournalMergeCleanupWithTransaction:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsObjectMerging;
+(BOOL)validateEntityWithProfile:(id)arg0 error:(*id)arg1 validationErrorHandler:(id)arg2 ;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)createTableSQL;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)hasSeriesDataForHFDKey:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)mergeDataObject:(id)arg0 provenance:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(*id)arg4 insertHandler:(id)arg5 ;
+(id)privateSubEntities;
-(BOOL)deleteFromDatabase:(id)arg0 error:(*id)arg1 ;
-(BOOL)enumerateLocationDataFromTimestamp:(CGFloat)arg0 toTimestamp:(CGFloat)arg1 database:(id)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(BOOL)enumerateLocationDataInDatabase:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)insertLocationData:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
-(id)dateIntervalForSeriesInDatabase:(id)arg0 error:(*id)arg1 ;
-(id)freezeWithTransaction:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
-(id)sampleCountForSeriesInDatabase:(id)arg0 error:(*id)arg1 ;
-(void)willDeleteFromDatabase:(id)arg0 ;


@end


#endif