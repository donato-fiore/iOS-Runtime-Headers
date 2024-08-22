// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYSHARDREGISTRYENTITY_H
#define HDONTOLOGYSHARDREGISTRYENTITY_H



#import "HDSQLiteEntity.h"

@interface HDOntologyShardRegistryEntity : HDSQLiteEntity



+(BOOL)enumerateEntriesWithPredicate:(id)arg0 orderingTerms:(id)arg1 database:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
+(BOOL)insertEntry:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;
+(id)nextAvailableSlotInAllowedRange:(struct _NSRange )arg0 predicate:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif