// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSIMPLEGRAPHDATABASERELATIONSHIPENTITY_H
#define HDSIMPLEGRAPHDATABASERELATIONSHIPENTITY_H



#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseRelationshipEntity : HDSQLiteEntity



+(BOOL)addRelationshipWithType:(NSInteger)arg0 subjectNodeID:(NSInteger)arg1 objectNodeID:(NSInteger)arg2 version:(NSInteger)arg3 slots:(NSUInteger)arg4 database:(id)arg5 error:(*id)arg6 ;
+(BOOL)deleteRelationshipsWithSubjectID:(NSInteger)arg0 lessThanVersion:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(BOOL)deleteRelationshipsWithSubjectID:(NSInteger)arg0 relationshipID:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateRelationshipsWithPredicate:(id)arg0 skipDeleted:(BOOL)arg1 database:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)enumerateRelationshipsWithSubjectID:(NSInteger)arg0 skipDeleted:(BOOL)arg1 database:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)removeRelationshipWithType:(NSInteger)arg0 subjectNodeID:(NSInteger)arg1 objectNodeID:(NSInteger)arg2 database:(id)arg3 error:(*id)arg4 ;
+(BOOL)updateSlots:(NSUInteger)arg0 subjectNodeID:(NSInteger)arg1 relationshipID:(NSInteger)arg2 database:(id)arg3 error:(*id)arg4 ;
+(NSInteger)maxVersion:(*NSInteger)arg0 slots:(*NSUInteger)arg1 subjectNodeID:(NSInteger)arg2 relationshipID:(NSInteger)arg3 database:(id)arg4 error:(*id)arg5 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)indices;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif