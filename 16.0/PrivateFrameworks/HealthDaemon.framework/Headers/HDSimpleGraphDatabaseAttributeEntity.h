// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSIMPLEGRAPHDATABASEATTRIBUTEENTITY_H
#define HDSIMPLEGRAPHDATABASEATTRIBUTEENTITY_H



#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseAttributeEntity : HDSQLiteEntity



+(BOOL)addAttributeWithType:(NSInteger)arg0 value:(id)arg1 nodeID:(NSInteger)arg2 version:(NSInteger)arg3 slots:(NSUInteger)arg4 database:(id)arg5 error:(*id)arg6 ;
+(BOOL)deleteAttributesWithNodeID:(NSInteger)arg0 lessThanVersion:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(BOOL)deleteAttributesWithNodeID:(NSInteger)arg0 type:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateAttributesForNodeWithID:(NSInteger)arg0 skipDeleted:(BOOL)arg1 database:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)enumerateAttributesWithPredicate:(id)arg0 skipDeleted:(BOOL)arg1 database:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)updateSlots:(NSUInteger)arg0 nodeID:(NSInteger)arg1 type:(NSInteger)arg2 database:(id)arg3 error:(*id)arg4 ;
+(NSInteger)maxVersion:(*NSInteger)arg0 slots:(*NSUInteger)arg1 nodeID:(NSInteger)arg2 type:(NSInteger)arg3 database:(id)arg4 error:(*id)arg5 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)indices;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif