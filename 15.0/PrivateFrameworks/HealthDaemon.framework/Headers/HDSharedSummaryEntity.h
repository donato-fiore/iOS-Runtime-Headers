// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSHAREDSUMMARYENTITY_H
#define HDSHAREDSUMMARYENTITY_H



#import "HDHealthEntity.h"

@interface HDSharedSummaryEntity : HDHealthEntity



+(BOOL)deleteAllSummariesWithDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
+(BOOL)enumerateEntitiesWithReuseTransactionID:(NSUInteger)arg0 package:(id)arg1 names:(id)arg2 databaseTransaction:(id)arg3 error:(*id)arg4 enumerationHandler:(id)arg5 ;
+(BOOL)enumerateEntitiesWithTransactionID:(NSUInteger)arg0 package:(id)arg1 names:(id)arg2 databaseTransaction:(id)arg3 error:(*id)arg4 enumerationHandler:(id)arg5 ;
+(BOOL)enumerateSummariesWithTransactionID:(NSUInteger)arg0 package:(id)arg1 names:(id)arg2 databaseTransaction:(id)arg3 error:(*id)arg4 enumerationHandler:(id)arg5 ;
+(BOOL)reuseSummariesForTransactionID:(NSUInteger)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(NSInteger)countOfObjectsForTransactionID:(NSInteger)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)entityWithUUID:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
+(id)foreignKeys;
+(id)insertOrReplaceWithUUID:(id)arg0 package:(id)arg1 name:(id)arg2 version:(id)arg3 compatibilityVersion:(id)arg4 transactionID:(NSUInteger)arg5 summaryData:(id)arg6 databaseTransaction:(id)arg7 error:(*id)arg8 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(BOOL)setReuseTransactionID:(id)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)setSynced:(BOOL)arg0 databaseTransaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)syncedInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)UUIDInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)compatibilityVersionInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)nameInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)packageInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)reuseTransactionIDInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)summaryDataInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)transactionIDInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;
-(id)versionInDatabaseTransaction:(id)arg0 error:(*id)arg1 ;


@end


#endif