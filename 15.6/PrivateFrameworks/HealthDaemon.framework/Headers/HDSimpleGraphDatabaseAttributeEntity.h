// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSIMPLEGRAPHDATABASEATTRIBUTEENTITY_H
#define HDSIMPLEGRAPHDATABASEATTRIBUTEENTITY_H



#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseAttributeEntity : HDSQLiteEntity



+(BOOL)addAttributeWithID:(NSInteger)arg0 value:(id)arg1 valueType:(NSInteger)arg2 nodeID:(NSInteger)arg3 database:(id)arg4 error:(*id)arg5 ;
+(BOOL)enumerateAttributeWithPredicate:(id)arg0 database:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)indices;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif