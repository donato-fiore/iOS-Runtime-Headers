// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTEVENTENTITY_H
#define HDWORKOUTEVENTENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutEventEntity : HDHealthEntity



+(BOOL)enumerateEventsForOwner:(NSInteger)arg0 withStatement:(id)arg1 error:(*id)arg2 eventHandler:(id)arg3 ;
+(BOOL)insertWorkoutEventsFromWorkout:(id)arg0 ownerID:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(Class)ownerEntityClass;
+(Class)workoutEventClass;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)deleteStatementForWorkoutEventsWithTransaction:(id)arg0 ;
+(id)foreignKeys;
+(id)insertPersistableWorkoutEvent:(id)arg0 ownerID:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)ownerEntityReferenceColumn;
+(id)statementForEnumeratingEventsForOwnerInDatabase:(id)arg0 error:(*id)arg1 ;
+(id)workoutEventsForOwner:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)workoutEventsWithOwnerID:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif