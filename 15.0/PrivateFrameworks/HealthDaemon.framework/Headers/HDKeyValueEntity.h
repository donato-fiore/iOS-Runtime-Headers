// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDKEYVALUEENTITY_H
#define HDKEYVALUEENTITY_H



#import "HDHealthEntity.h"

@interface HDKeyValueEntity : HDHealthEntity



+(BOOL)_enumerateKeyValueEntitiesInCategory:(NSInteger)arg0 predicate:(id)arg1 healthDatabase:(id)arg2 error:(*id)arg3 usingBlock:(id)arg4 ;
+(BOOL)_insertCodableCategoryDomainDictionary:(id)arg0 provenance:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)_insertCodableTimestampedKeyValuePairs:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 provenance:(NSInteger)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)_insertCodableTimestampedKeyValuePairs:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 provenance:(NSInteger)arg3 updatePolicy:(NSInteger)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(BOOL)_insertKeysAndValues:(id)arg0 modificationDate:(id)arg1 domain:(id)arg2 category:(NSInteger)arg3 provenance:(NSInteger)arg4 updatePolicy:(NSInteger)arg5 profile:(id)arg6 error:(*id)arg7 ;
+(BOOL)_insertValues:(id)arg0 forKeys:(id)arg1 modificationDates:(id)arg2 domain:(id)arg3 category:(NSInteger)arg4 provenance:(NSInteger)arg5 updatePolicy:(NSInteger)arg6 profile:(id)arg7 error:(*id)arg8 ;
+(BOOL)_setRawKeysAndValues:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 database:(id)arg3 error:(*id)arg4 ;
+(BOOL)enumerateValuesForDomain:(id)arg0 category:(NSInteger)arg1 keys:(id)arg2 profile:(id)arg3 error:(*id)arg4 usingBlock:(id)arg5 ;
+(BOOL)persistDatabaseIdentifier:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)persistDatabaseIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)removeValuesForDomain:(id)arg0 category:(NSInteger)arg1 keys:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)setData:(id)arg0 forKey:(id)arg1 domain:(id)arg2 category:(NSInteger)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)setDate:(id)arg0 forKey:(id)arg1 domain:(id)arg2 category:(NSInteger)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)setDateComponents:(id)arg0 forKey:(id)arg1 domain:(id)arg2 category:(NSInteger)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)setNumber:(id)arg0 forKey:(id)arg1 domain:(id)arg2 category:(NSInteger)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)setOkemoZursObjectAnchor:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)setQuantity:(id)arg0 unit:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(NSInteger)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(BOOL)setString:(id)arg0 forKey:(id)arg1 domain:(id)arg2 category:(NSInteger)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)setValueForAllKeys:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)setValuesWithDictionary:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(Class)_entityClassForKeyValueCategory:(NSInteger)arg0 ;
+(NSInteger)_deviceLocalCategory;
+(char *)_insertStatementKey;
+(id)_modDateForKey:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 entity:(*id)arg4 error:(*id)arg5 ;
+(id)_rawValuesForKeys:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 database:(id)arg3 error:(*id)arg4 ;
+(id)allValuesForDomain:(id)arg0 category:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(id)dataForKey:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 entity:(*id)arg4 error:(*id)arg5 ;
+(id)databaseTable;
+(id)dateComponentsForKey:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 entity:(*id)arg4 error:(*id)arg5 ;
+(id)dateForKey:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 entity:(*id)arg4 error:(*id)arg5 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)generateNewDatabaseIdentifier;
+(id)modificationDatesForKeys:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)numberForKey:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 entity:(*id)arg4 error:(*id)arg5 ;
+(id)okemoZursObjectAnchorWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)propertyForSyncProvenance;
+(id)quantityForKey:(id)arg0 unit:(id)arg1 domain:(id)arg2 category:(NSInteger)arg3 profile:(id)arg4 entity:(*id)arg5 error:(*id)arg6 ;
+(id)retrieveDatabaseIdentifierCreationDateFromProfile:(id)arg0 error:(*id)arg1 ;
+(id)retrieveDatabaseIdentifierFromDatabase:(id)arg0 error:(*id)arg1 ;
+(id)retrieveDatabaseIdentifierFromProfile:(id)arg0 error:(*id)arg1 ;
+(id)stringForKey:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 entity:(*id)arg4 error:(*id)arg5 ;
+(id)uniquedColumns;
+(id)valuesForKeys:(id)arg0 domain:(id)arg1 category:(NSInteger)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif