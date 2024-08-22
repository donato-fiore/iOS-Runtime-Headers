// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3QUERY_H
#define ML3QUERY_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"
#import "ML3AggregateQuery.h"
#import "ML3Predicate.h"

@interface ML3Query : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger anyEntityPersistentID;
@property (readonly, nonatomic) NSUInteger countOfEntities;
@property (readonly, nonatomic) Class entityClass; // ivar: _entityClass
@property (readonly, nonatomic) BOOL filtersOnDynamicProperties; // ivar: _filtersOnDynamicProperties
@property (readonly, nonatomic) BOOL hasEntities;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (readonly, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, nonatomic) ML3AggregateQuery *nonDirectAggregateQuery; // ivar: _nonDirectAggregateQuery
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, nonatomic) NSArray *orderingTerms; // ivar: _orderingTerms
@property (readonly, nonatomic) NSString *persistentIDProperty;
@property (readonly, nonatomic) ML3Predicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) ML3Predicate *predicateIncludingSystemwidePredicates;
@property (readonly, nonatomic) NSString *propertyToCount; // ivar: _propertyToCount
@property (readonly, nonatomic) NSString *sectionProperty;
@property (readonly, nonatomic) NSString *selectCountSQL;
@property (readonly, nonatomic) NSString *selectPersistentIDsSQL;
@property (readonly, nonatomic) BOOL usingSections; // ivar: _usingSections


+(BOOL)supportsSecureCoding;
-(BOOL)deleteAllEntitiesFromLibrary;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg0 ;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg0 usingConnection:(id)arg1 ;
-(BOOL)hasRowForColumn:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sectionsPersistentIDColumnIsDistinct;
-(NSUInteger)countOfDistinctRowsForColumn:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countStatementParameters;
-(id)description;
-(id)enumerationDatabaseResultForSQL:(id)arg0 onConnection:(id)arg1 withParameters:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 entityClass:(Class)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(BOOL)arg4 nonDirectAggregateQuery:(id)arg5 propertyToCount:(id)arg6 options:(NSInteger)arg7 ;
-(id)lowerBoundParametersForOrderingTerms:(id)arg0 lowerBoundPersistentID:(NSInteger)arg1 ;
-(id)nameOrderPropertyForProperty:(id)arg0 ;
-(id)persistentIDParameters;
-(id)reverseQuery;
-(id)sections;
-(id)sectionsParameters;
-(id)selectPersistentIDsSQLAndProperties:(id)arg0 ordered:(BOOL)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg0 ordered:(BOOL)arg1 distinct:(BOOL)arg2 ;
-(id)selectSQLWithColumns:(id)arg0 groupBy:(id)arg1 ;
-(id)selectSQLWithColumns:(id)arg0 groupBy:(id)arg1 distinct:(BOOL)arg2 ;
-(id)selectSQLWithColumns:(id)arg0 groupBy:(id)arg1 orderingTerms:(id)arg2 ;
-(id)selectSQLWithColumns:(id)arg0 groupBy:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3 usingLowerBound:(BOOL)arg4 ;
-(id)selectSQLWithColumns:(id)arg0 groupBy:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3 usingLowerBound:(BOOL)arg4 distinct:(BOOL)arg5 limit:(NSUInteger)arg6 ;
-(id)selectSQLWithColumns:(id)arg0 groupBy:(id)arg1 orderingTerms:(id)arg2 limit:(NSUInteger)arg3 ;
-(id)selectSQLWithColumns:(id)arg0 orderingTerms:(id)arg1 ;
-(id)selectSQLWithColumns:(id)arg0 orderingTerms:(id)arg1 directionality:(id)arg2 ;
-(id)selectSQLWithColumns:(id)arg0 orderingTerms:(id)arg1 distinct:(BOOL)arg2 ;
-(id)selectSQLWithColumns:(id)arg0 orderingTerms:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)selectSectionsSQL;
-(id)selectUnorderedPersistentIDsSQL;
-(id)valueForAggregateFunction:(id)arg0 onEntitiesForProperty:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)enumeratePersistentIDsAndProperties:(id)arg0 ordered:(BOOL)arg1 cancelBlock:(id)arg2 usingBlock:(unk)arg3  ;
// -(void)enumeratePersistentIDsAndProperties:(id)arg0 ordered:(BOOL)arg1 sectionProperty:(id)arg2 cancelBlock:(id)arg3 usingBlock:(unk)arg4  ;
-(void)enumeratePersistentIDsAndProperties:(id)arg0 ordered:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersistentIDsAndSectionsWithProperty:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(id)arg0 ;
-(void)enumerateSectionsUsingBlock:(id)arg0 ;
-(void)loadNamesFromLibrary:(id)arg0 onConnection:(id)arg1 forPredicate:(id)arg2 loadAllNames:(BOOL)arg3 cancelHandler:(id)arg4 ;


@end


#endif