// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3ENTITY_H
#define ML3ENTITY_H


#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"

@interface ML3Entity : NSObject

@property (readonly, nonatomic) BOOL existsInLibrary;
@property (weak, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSInteger persistentID; // ivar: _persistentID


+(BOOL)_deleteRowForPersistentIDs:(*NSInteger)arg0 count:(NSUInteger)arg1 library:(id)arg2 table:(id)arg3 usingColumn:(id)arg4 usingConnection:(id)arg5 ;
+(BOOL)_shouldIncrementRevisionForType:(int)arg0 persistentID:(NSInteger)arg1 usingConnection:(id)arg2 ;
+(BOOL)assistantLibraryContentsChangeForProperty:(id)arg0 ;
+(BOOL)deleteFromLibrary:(id)arg0 deletionType:(int)arg1 persistentIDs:(*NSInteger)arg2 count:(NSUInteger)arg3 ;
+(BOOL)deleteFromLibrary:(id)arg0 deletionType:(int)arg1 persistentIDs:(*NSInteger)arg2 count:(NSUInteger)arg3 usingConnection:(id)arg4 ;
+(BOOL)incrementRevisionForRevisionTypeContentWithConnection:(id)arg0 deletionType:(int)arg1 persistentIDs:(*NSInteger)arg2 count:(NSUInteger)arg3 ;
+(BOOL)incrementRevisionForRevisionTypeContentWithConnection:(id)arg0 deletionType:(int)arg1 persistentIDs:(id)arg2 ;
+(BOOL)incrementRevisionForRevisionTypeContentWithLibrary:(id)arg0 deletionType:(int)arg1 persistentIDs:(id)arg2 ;
+(BOOL)incrementRevisionWithLibrary:(id)arg0 persistentID:(NSInteger)arg1 deletionType:(int)arg2 revisionType:(int)arg3 ;
+(BOOL)incrementRevisionWithLibrary:(id)arg0 persistentID:(NSInteger)arg1 deletionType:(int)arg2 revisionType:(int)arg3 usingConnection:(id)arg4 ;
+(BOOL)insertValues:(id)arg0 intoTable:(id)arg1 persistentID:(NSInteger)arg2 connection:(id)arg3 ;
+(BOOL)insertValues:(id)arg0 intoTable:(id)arg1 persistentID:(NSInteger)arg2 library:(id)arg3 ;
+(BOOL)insertionChangesLibraryContents;
+(BOOL)libraryContentsChangeForProperty:(id)arg0 ;
+(BOOL)libraryDynamicChangeForProperty:(id)arg0 ;
+(BOOL)propertyIsCountProperty:(id)arg0 ;
+(BOOL)removeFromMyLibrary:(id)arg0 deletionType:(int)arg1 persistentIDs:(*NSInteger)arg2 count:(NSUInteger)arg3 ;
+(BOOL)setValues:(id)arg0 forProperties:(id)arg1 forEntityPersistentIDs:(id)arg2 inLibrary:(id)arg3 usingConnection:(id)arg4 ;
+(NSInteger)revisionTrackingCode;
+(id)URLForEntityWithPersistentID:(NSInteger)arg0 libraryUID:(id)arg1 ;
+(id)_createDisambiguatedSQLForProperty:(id)arg0 ;
+(id)aggregateQueryWithUnitQuery:(id)arg0 foreignPersistentIDProperty:(id)arg1 ;
+(id)allItemsQueryWithLibrary:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 usingSections:(BOOL)arg3 ;
+(id)allProperties;
+(id)anyInLibrary:(id)arg0 predicate:(id)arg1 ;
+(id)anyInLibrary:(id)arg0 predicate:(id)arg1 options:(NSInteger)arg2 ;
+(id)collectionClassesToUpdateBeforeDelete;
+(id)countingQueryForBaseQuery:(id)arg0 countProperty:(id)arg1 forIdentifier:(NSInteger)arg2 ;
+(id)defaultFilterPredicates;
+(id)defaultOrderingTerms;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)disambiguatedSelectSQLForProperty:(id)arg0 ;
+(id)entityFromURL:(id)arg0 inLibrary:(id)arg1 ;
+(id)entityFromURL:(id)arg0 inLibrary:(id)arg1 verifyExistence:(BOOL)arg2 ;
+(id)entityURLScheme;
+(id)extraTablesToDelete;
+(id)extraTablesToInsert;
+(id)foreignColumnForProperty:(id)arg0 ;
+(id)foreignDatabaseTableForProperty:(id)arg0 ;
+(id)foreignPropertyForProperty:(id)arg0 entityClass:(Class)arg1 ;
+(id)indexableSQLForProperties:(id)arg0 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)newSelectAllEntitiesSQLForProperties:(*id)arg0 count:(NSUInteger)arg1 predicate:(id)arg2 ;
+(id)newSelectSQLForProperties:(*id)arg0 count:(NSUInteger)arg1 predicate:(id)arg2 ;
+(id)newWithDictionary:(id)arg0 inLibrary:(id)arg1 ;
+(id)newWithDictionary:(id)arg0 inLibrary:(id)arg1 cachedNameOrders:(id)arg2 ;
+(id)newWithDictionary:(id)arg0 inLibrary:(id)arg1 cachedNameOrders:(id)arg2 usingConnection:(id)arg3 ;
+(id)newWithPersistentID:(NSInteger)arg0 inLibrary:(id)arg1 ;
+(id)orderingSQLForProperties:(id)arg0 directionality:(id)arg1 ;
+(id)persistentIDColumnForTable:(id)arg0 ;
+(id)predicateByOptimizingComparisonPredicate:(id)arg0 ;
+(id)predicateByOptimizingPredicate:(id)arg0 ;
+(id)predicateIncludingSystemwidePredicatesWithPredicate:(id)arg0 library:(id)arg1 options:(NSInteger)arg2 ;
+(id)predisambiguatedProperties;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 options:(NSInteger)arg2 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 orderingProperties:(id)arg2 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 orderingProperties:(id)arg2 orderingDirectionMappings:(id)arg3 usingSections:(BOOL)arg4 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 orderingProperties:(id)arg2 usingSections:(BOOL)arg3 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 propertyToCount:(id)arg3 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 propertyToCount:(id)arg3 options:(NSInteger)arg4 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 usingSections:(BOOL)arg3 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 usingSections:(BOOL)arg3 options:(NSInteger)arg4 ;
+(id)queryWithLibrary:(id)arg0 predicate:(id)arg1 usingSections:(BOOL)arg2 ;
+(id)sectionPropertyForProperty:(id)arg0 ;
+(id)subselectPropertyForProperty:(id)arg0 ;
+(id)subselectStatementForProperty:(id)arg0 ;
+(id)unrestrictedAllItemsQueryWithlibrary:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 ;
+(id)unrestrictedQueryWithLibrary:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 ;
+(id)unsettableProperties;
+(void)_didChangeValueForProperties:(id)arg0 inLibrary:(id)arg1 ;
+(void)enumeratePersistentIDsInLibrary:(id)arg0 afterRevision:(NSInteger)arg1 usingBlock:(id)arg2 ;
+(void)enumeratePersistentIDsInLibrary:(id)arg0 matchingPredicate:(id)arg1 orderingTerms:(id)arg2 persistentIDs:(*NSInteger)arg3 count:(NSUInteger)arg4 options:(NSInteger)arg5 usingBlock:(id)arg6 ;
+(void)predisambiguateProperties:(id)arg0 toDictionary:(id)arg1 ;
-(BOOL)deleteFromLibrary;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPredicate:(id)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(BOOL)setValues:(*id)arg0 forProperties:(*id)arg1 count:(NSUInteger)arg2 ;
-(BOOL)setValues:(id)arg0 forProperties:(id)arg1 ;
-(BOOL)setValues:(id)arg0 forProperties:(id)arg1 usingConnection:(id)arg2 ;
-(BOOL)setValuesForPropertiesWithDictionary:(id)arg0 ;
-(NSUInteger)hash;
-(id)URL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getValuesForProperties:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 inLibrary:(id)arg1 cachedNameOrders:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 inLibrary:(id)arg1 cachedNameOrders:(id)arg2 usingConnection:(id)arg3 ;
-(id)initWithPersistentID:(NSInteger)arg0 inLibrary:(id)arg1 ;
-(id)valueForProperty:(id)arg0 ;
-(void)didChangeValueForProperties:(id)arg0 ;
-(void)getValues:(*id)arg0 forProperties:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)incrementRevision;
-(void)setValues:(id)arg0 forProperties:(id)arg1 async:(BOOL)arg2 withCompletionBlock:(id)arg3 ;


@end


#endif