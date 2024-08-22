// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHENTITY_H
#define HDHEALTHENTITY_H

@protocol HDHealthEntityEncoding;


#import "HDSQLiteEntity.h"

@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>





+(BOOL)deleteEntitiesWithPredicate:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(BOOL)enumerateEntitiesForSyncWithProperties:(id)arg0 predicate:(id)arg1 session:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange )arg3 limit:(NSUInteger)arg4 lastSyncAnchor:(*NSInteger)arg5 healthDatabase:(id)arg6 error:(*id)arg7 block:(id)arg8 ;
+(BOOL)enumerateEntitiesForSyncWithProperties:(id)arg0 predicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange )arg4 orderingTerms:(id)arg5 limit:(NSUInteger)arg6 lastSyncAnchor:(*NSInteger)arg7 healthDatabase:(id)arg8 error:(*id)arg9 block:(id)arg10 ;
+(BOOL)enumerateProperties:(id)arg0 withPredicate:(id)arg1 healthDatabase:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)performPostFirstJournalMergeCleanupWithTransaction:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)performReadTransactionWithHealthDatabase:(id)arg0 context:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(BOOL)performReadTransactionWithHealthDatabase:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg0 context:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
// +(BOOL)performWriteTransactionWithHealthDatabase:(id)arg0 context:(id)arg1 error:(*id)arg2 block:(id)arg3 inaccessibilityHandler:(unk)arg4  ;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
// +(BOOL)performWriteTransactionWithHealthDatabase:(id)arg0 error:(*id)arg1 block:(id)arg2 inaccessibilityHandler:(unk)arg3  ;
+(BOOL)updateProperties:(id)arg0 predicate:(id)arg1 healthDatabase:(id)arg2 error:(*id)arg3 bindingHandler:(id)arg4 ;
+(BOOL)validateEntityWithProfile:(id)arg0 error:(*id)arg1 validationErrorHandler:(id)arg2 ;
+(NSInteger)countOfObjectsWithPredicate:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(NSInteger)nextSyncAnchorWithStartAnchor:(NSInteger)arg0 predicate:(id)arg1 session:(id)arg2 healthDatabase:(id)arg3 error:(*id)arg4 ;
+(NSInteger)nextSyncAnchorWithStartAnchor:(NSInteger)arg0 predicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 orderingTerms:(id)arg4 limit:(NSUInteger)arg5 healthDatabase:(id)arg6 error:(*id)arg7 ;
+(NSInteger)protectionClass;
+(NSInteger)sizeOfDatabaseTableInHealthDatabase:(id)arg0 error:(*id)arg1 ;
+(id)anyWithPredicate:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(id)columnNamesForTimeOffset;
+(id)countDistinctForProperty:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(id)createValidationError:(id)arg0 rowId:(id)arg1 ;
+(id)defaultForeignKey;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertOrReplaceEntity:(BOOL)arg0 healthDatabase:(id)arg1 properties:(id)arg2 error:(*id)arg3 bindingHandler:(id)arg4 ;
+(id)maxRowIDForPredicate:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(id)predicateForSyncWithPredicate:(id)arg0 syncEntityClass:(Class)arg1 session:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange )arg3 ;
+(id)propertyForSyncAnchor;
+(id)propertyForSyncIdentity;
+(id)propertyForSyncProvenance;
+(id)propertyValueForAnyWithProperty:(id)arg0 predicate:(id)arg1 healthDatabase:(id)arg2 error:(*id)arg3 ;
+(id)transactionContextForWriting:(BOOL)arg0 baseContext:(id)arg1 ;
+(id)updateSQLForTimeOffsetWithBindingCount:(*NSUInteger)arg0 ;
-(BOOL)getValuesForProperties:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(BOOL)setDate:(id)arg0 forProperty:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(BOOL)setForeignKeyEntity:(id)arg0 forProperty:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(BOOL)setNumber:(id)arg0 forProperty:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(BOOL)setString:(id)arg0 forProperty:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateProperties:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 bindingHandler:(id)arg3 ;
-(BOOL)willDeleteWithTransaction:(id)arg0 error:(*id)arg1 ;
-(id)dateForProperty:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)foreignKeyEntity:(Class)arg0 forProperty:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(id)numberForProperty:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)stringForProperty:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
-(id)stringForProperty:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)valueForProperty:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;


@end


#endif