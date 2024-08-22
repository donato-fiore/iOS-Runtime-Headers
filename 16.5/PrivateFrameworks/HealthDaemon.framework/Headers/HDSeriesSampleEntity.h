// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSERIESSAMPLEENTITY_H
#define HDSERIESSAMPLEENTITY_H

@class NSString;
@protocol _HDSeriesFreezeJournalEntrySeries, HDSeriesEntity;


#import "HDSampleEntity.h"

@interface HDSeriesSampleEntity : HDSampleEntity <_HDSeriesFreezeJournalEntrySeries, HDSeriesEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)deleteSeriesWithID:(id)arg0 deleteSeriesData:(BOOL)arg1 insertDeletedObject:(BOOL)arg2 profile:(id)arg3 transaction:(id)arg4 error:(*id)arg5 ;
+(BOOL)migrateDataFromDataStore:(*void)arg0 to:(*void)arg1 database:(id)arg2 recoveryAnalytics:(id)arg3 error:(*id)arg4 ;
+(BOOL)migrateDataToSQLFromStore:(*void)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)replaceObjectID:(id)arg0 replacementObjectID:(id)arg1 deleteOriginalSeriesData:(BOOL)arg2 insertDeletedObject:(BOOL)arg3 profile:(id)arg4 transaction:(id)arg5 error:(*id)arg6 ;
+(id)additionalPredicateForEnumeration;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)foreignKeys;
+(id)freezeSeriesWithIdentifier:(id)arg0 metadata:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)objectInsertionFilterForProfile:(SEL)arg0 ;
+(id)seriesSampleWithID:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
+(void)updateInsertionEra;
-(BOOL)canAddDatumInDatabase:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateSampleCount:(NSInteger)arg0 withDatabase:(id)arg1 error:(*id)arg2 ;
-(id)HFDKeyWithDatabase:(id)arg0 error:(*id)arg1 ;
-(id)freezeWithTransaction:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;


@end


#endif