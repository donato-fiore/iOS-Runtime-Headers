// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITETABLE_H
#define CKSQLITETABLE_H

@class NSMutableDictionary, NSString, NSArray;
@protocol CKSQLiteDatabaseKeyValueProperties;

#import <Foundation/Foundation.h>

#import "CKSQLiteDatabase.h"
#import "CKSQLiteTableGroup.h"

@interface CKSQLiteTable : NSObject <CKSQLiteDatabaseKeyValueProperties>

 {
    CKSQLiteDatabase *_strongDB;
    NSMutableDictionary *_compiledStatementsByLabel;
    ? _serializer;
    *_opaque_pthread_t _transactionThread;
}


@property (readonly, copy, nonatomic) NSString *dbTableName; // ivar: _dbTableName
@property (nonatomic) BOOL logOperations; // ivar: _logOperations
@property (readonly, copy, nonatomic) NSString *logicalTableName; // ivar: _logicalTableName
@property (readonly, nonatomic) NSArray *primaryKeyProperties; // ivar: _primaryKeyProperties
@property (weak, nonatomic) CKSQLiteTableGroup *tableGroup; // ivar: _tableGroup


+(BOOL)entriesHaveEqualProperties:(id)arg0 other:(id)arg1 includePrimaryKeys:(BOOL)arg2 ;
+(Class)entryClass;
+(NSUInteger)dbVersion;
+(id)allPropertyNames;
+(id)dbProperties;
+(id)descriptionOfEntry:(id)arg0 ;
+(id)descriptionOfProperties:(id)arg0 from:(id)arg1 ;
+(id)propertyType:(id)arg0 ;
+(id)valueForProperty:(id)arg0 inObject:(id)arg1 ;
+(unsigned int)propertyCount;
+(void)decodeEntry:(id)arg0 withCoder:(id)arg1 ;
+(void)encodeEntry:(id)arg0 withCoder:(id)arg1 ;
+(void)enumerateClassPropertyDictionariesWithBlock:(id)arg0 ;
+(void)enumeratePropertyDataWithBlock:(id)arg0 ;
+(void)setValue:(id)arg0 forProperty:(id)arg1 inObject:(id)arg2 ;
-(BOOL)hasEntries:(*id)arg0 ;
-(NSInteger)sizeOfProperty:(id)arg0 error:(*id)arg1 ;
-(NSInteger)sizeOfProperty:(id)arg0 inEntriesMatching:(id)arg1 label:(id)arg2 error:(*id)arg3 predicate:(id)arg4 ;
-(NSInteger)sizeOfProperty:(id)arg0 inEntry:(id)arg1 label:(id)arg2 error:(*id)arg3 ;
-(NSInteger)sumOfProperty:(id)arg0 error:(*id)arg1 ;
-(NSInteger)sumOfProperty:(id)arg0 inEntriesMatching:(id)arg1 label:(id)arg2 error:(*id)arg3 predicate:(id)arg4 ;
-(NSUInteger)count:(*id)arg0 ;
-(NSUInteger)countOfEntriesMatching:(id)arg0 label:(id)arg1 error:(*id)arg2 predicate:(id)arg3 ;
-(NSUInteger)deleteAllEntries:(*id)arg0 ;
-(NSUInteger)deleteEntriesMatching:(id)arg0 label:(id)arg1 error:(*id)arg2 predicate:(id)arg3 ;
-(NSUInteger)setProperties:(id)arg0 valuesToStore:(id)arg1 inEntriesMatching:(id)arg2 label:(id)arg3 error:(*id)arg4 predicate:(id)arg5 ;
-(id)UUIDValueForKey:(id)arg0 ;
-(id)_bindProperties:(id)arg0 valueObject:(id)arg1 inStatement:(id)arg2 includePrimaryKeys:(BOOL)arg3 ;
-(id)_fetchPropertiesUsingStatement:(id)arg0 inObject:(id)arg1 matchingDBProperties:(id)arg2 label:(id)arg3 ;
// -(id)_performEnumerationWithBlock:(id)arg0 usingEnumerator:(unk)arg1  ;
-(id)_performInsertOrUpdateStatement:(id)arg0 usingObject:(id)arg1 ;
-(id)_predicateForMatchingProperties:(id)arg0 ;
-(id)_statementForFetchingEntriesMatchingObject:(id)arg0 label:(id)arg1 error:(*id)arg2 setupBlock:(id)arg3 ;
-(id)_valueDictionaryForProperties:(id)arg0 inObject:(id)arg1 nilPropertyError:(*id)arg2 selForNilPropertyError:(SEL)arg3 ;
-(id)addPredicateToStatement:(id)arg0 predicate:(id)arg1 ;
-(id)compiledStatementWithLabel:(id)arg0 creationBlock:(id)arg1 ;
-(id)createTableSQL;
-(id)dataValueForKey:(id)arg0 ;
-(id)dateValueForKey:(id)arg0 ;
-(id)db;
-(id)deleteObject:(id)arg0 ;
-(id)deletePrimaryKeyValue:(id)arg0 ;
-(id)entriesMatchingObject:(id)arg0 label:(id)arg1 error:(*id)arg2 setupBlock:(id)arg3 ;
-(id)entriesWithValues:(id)arg0 label:(id)arg1 error:(*id)arg2 setupBlock:(id)arg3 ;
-(id)entryEnumerator:(*id)arg0 ;
-(id)entryWithPrimaryKey:(id)arg0 fetchProperties:(id)arg1 error:(*id)arg2 ;
-(id)entryWithValues:(id)arg0 label:(id)arg1 error:(*id)arg2 setupBlock:(id)arg3 ;
-(id)enumerateEntriesWithBlock:(id)arg0 ;
-(id)fetchAllEntries:(*id)arg0 ;
-(id)fetchAllProperties:(id)arg0 ;
-(id)fetchProperties:(id)arg0 inObject:(id)arg1 matchingDBProperties:(id)arg2 label:(id)arg3 ;
-(id)fetchProperties:(id)arg0 label:(id)arg1 error:(*id)arg2 ;
-(id)finishInitializing:(BOOL)arg0 ;
-(id)init;
-(id)initWithLogicalTableName:(id)arg0 ;
-(id)insertObject:(id)arg0 ;
-(id)insertObject:(id)arg0 orUpdateProperties:(id)arg1 label:(id)arg2 ;
-(id)maximumValueOfProperty:(id)arg0 error:(*id)arg1 ;
-(id)minimumValueOfProperty:(id)arg0 error:(*id)arg1 ;
-(id)newEntryObject;
-(id)nonKeyProperties;
-(id)numberValueForKey:(id)arg0 ;
-(id)objectValueForKey:(id)arg0 ;
-(id)performInTransaction:(id)arg0 ;
-(id)performTransaction:(id)arg0 ;
-(id)predicateForMatchingPrimaryKeys;
-(id)primaryKeyValuesInEntry:(id)arg0 ;
-(id)statementForFetchingProperties:(id)arg0 inEntriesMatchingColumns:(id)arg1 error:(*id)arg2 ;
-(id)stringValueForKey:(id)arg0 ;
-(id)updateProperties:(id)arg0 usingObject:(id)arg1 label:(id)arg2 ;
-(id)updateUsingObject:(id)arg0 ;
-(id)valueForProperty:(id)arg0 inObject:(id)arg1 ;
-(void)_addPredicateForMatching:(id)arg0 toStatement:(id)arg1 ;
-(void)addTransactionCompletionHandler:(id)arg0 ;
-(void)assertNotSerialized;
-(void)assertSerialized;
-(void)cacheStatement:(id)arg0 ;
-(void)dealloc;
-(void)invalidateCachedStatements;
-(void)performMaintenance;
-(void)serializeTable:(id)arg0 ;
-(void)setDataValue:(id)arg0 forKey:(id)arg1 ;
-(void)setDateValue:(id)arg0 forKey:(id)arg1 ;
-(void)setDb:(id)arg0 ;
-(void)setNumberValue:(id)arg0 forKey:(id)arg1 ;
-(void)setObjectValue:(id)arg0 forKey:(id)arg1 ;
-(void)setStringValue:(id)arg0 forKey:(id)arg1 ;
-(void)setUUIDValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 inObject:(id)arg2 ;


@end


#endif