// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSQLITEENTITY_H
#define HDSQLITEENTITY_H

@class NSString;
@protocol HDSQLiteEntity, NSCopying;


#import "HDSQLiteSchemaEntity.h"

@interface HDSQLiteEntity : HDSQLiteSchemaEntity <HDSQLiteEntity, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (readonly) Class superclass;


+(BOOL)deleteEntitiesInDatabase:(id)arg0 predicate:(id)arg1 error:(*id)arg2 ;
+(BOOL)enumerateEntitiesInDatabase:(id)arg0 predicate:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)enumerateQueryResultsFromColumns:(id)arg0 properties:(id)arg1 predicate:(id)arg2 groupBy:(id)arg3 orderingTerms:(id)arg4 limit:(NSInteger)arg5 database:(id)arg6 error:(*id)arg7 enumerationHandler:(id)arg8 ;
+(BOOL)hasROWID;
+(BOOL)updateProperties:(id)arg0 predicate:(id)arg1 database:(id)arg2 error:(*id)arg3 bindingHandler:(id)arg4 ;
+(NSInteger)sizeOfEntityTableInDatabase:(id)arg0 ;
+(id)additionalPredicateForEnumeration;
+(id)aggregateSingleValueForProperty:(id)arg0 function:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(*id)arg4 ;
+(id)aggregateSingleValueForProperty:(id)arg0 function:(id)arg1 queryDescriptor:(id)arg2 database:(id)arg3 error:(*id)arg4 ;
+(id)aggregateValuesForProperty:(id)arg0 functions:(id)arg1 predicate:(id)arg2 groupBy:(id)arg3 database:(id)arg4 error:(*id)arg5 ;
+(id)aggregateValuesForProperty:(id)arg0 functions:(id)arg1 queryDescriptor:(id)arg2 database:(id)arg3 error:(*id)arg4 ;
+(id)anyInDatabase:(id)arg0 predicate:(id)arg1 error:(*id)arg2 ;
+(id)countDistinctForProperty:(id)arg0 predicate:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)countValueForProperty:(id)arg0 predicate:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)distinctProperty:(id)arg0 predicate:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)entityWithPersistentID:(id)arg0 ;
+(id)firstInDatabase:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 error:(*id)arg3 ;
+(id)insertOrReplaceEntity:(BOOL)arg0 database:(id)arg1 properties:(id)arg2 error:(*id)arg3 bindingHandler:(id)arg4 ;
+(id)maxPersistentIDWithPredicate:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)maxValueForProperty:(id)arg0 predicate:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)primaryKeyColumns;
+(id)propertyValueForAnyInDatabase:(id)arg0 property:(id)arg1 predicate:(id)arg2 error:(*id)arg3 ;
+(id)queryWithDatabase:(id)arg0 predicate:(id)arg1 ;
+(id)queryWithDatabase:(id)arg0 predicate:(id)arg1 limit:(NSUInteger)arg2 orderingTerms:(id)arg3 groupBy:(id)arg4 ;
+(id)sumValueForProperty:(id)arg0 predicate:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
-(BOOL)booleanForProperty:(id)arg0 database:(id)arg1 ;
-(BOOL)deleteFromDatabase:(id)arg0 error:(*id)arg1 ;
-(BOOL)existsInDatabase:(id)arg0 ;
-(BOOL)getValuesForProperties:(id)arg0 database:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(BOOL)getValuesForProperties:(id)arg0 database:(id)arg1 handler:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateProperties:(id)arg0 database:(id)arg1 error:(*id)arg2 bindingHandler:(id)arg3 ;
-(id)UUIDForProperty:(id)arg0 database:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateForProperty:(id)arg0 database:(id)arg1 ;
-(id)initWithPersistentID:(NSInteger)arg0 ;
-(id)numberForProperty:(id)arg0 database:(id)arg1 ;
-(id)stringForProperty:(id)arg0 database:(id)arg1 ;
-(id)valueForProperty:(id)arg0 database:(id)arg1 ;
-(void)willDeleteFromDatabase:(id)arg0 ;


@end


#endif