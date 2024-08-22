// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSIMPLEGRAPHDATABASENODEENTITY_H
#define HDSIMPLEGRAPHDATABASENODEENTITY_H



#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseNodeEntity : HDSQLiteEntity



+(BOOL)enumerateNodesWithPredicate:(id)arg0 database:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)firstNodeWithName:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)indices;
+(id)insertNodeWithName:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)nodeEntityForeignKey;
+(id)nodeForID:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif