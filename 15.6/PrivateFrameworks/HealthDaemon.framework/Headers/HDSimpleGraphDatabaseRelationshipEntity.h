// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSIMPLEGRAPHDATABASERELATIONSHIPENTITY_H
#define HDSIMPLEGRAPHDATABASERELATIONSHIPENTITY_H



#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseRelationshipEntity : HDSQLiteEntity



+(BOOL)addRelationshipWithID:(NSInteger)arg0 subjectNodeID:(NSInteger)arg1 objectNodeID:(NSInteger)arg2 database:(id)arg3 error:(*id)arg4 ;
+(BOOL)enumerateRelationshipsWithPredicate:(id)arg0 database:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)removeRelationshipWithID:(NSInteger)arg0 subjectNodeID:(NSInteger)arg1 objectNodeID:(NSInteger)arg2 database:(id)arg3 error:(*id)arg4 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)indices;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif