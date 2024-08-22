// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSIMPLEGRAPHDATABASENODEENTITY_H
#define HDSIMPLEGRAPHDATABASENODEENTITY_H



#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseNodeEntity : HDSQLiteEntity



+(BOOL)deleteNodeWithID:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(BOOL)enumerateNodesWithPredicate:(id)arg0 skipDeleted:(BOOL)arg1 limit:(NSUInteger)arg2 database:(id)arg3 error:(*id)arg4 enumerationHandler:(id)arg5 ;
+(BOOL)insertNodeWithID:(NSInteger)arg0 version:(NSInteger)arg1 slots:(NSUInteger)arg2 deleted:(BOOL)arg3 database:(id)arg4 error:(*id)arg5 ;
+(BOOL)updateNodeWithID:(NSInteger)arg0 version:(NSInteger)arg1 slots:(NSUInteger)arg2 deleted:(BOOL)arg3 database:(id)arg4 error:(*id)arg5 ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)nodeEntityForeignKey;
+(id)nodeForID:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif