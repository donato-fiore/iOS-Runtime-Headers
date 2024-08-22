// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTCLUSTERCOMPONENTENTITY_H
#define HDWORKOUTCLUSTERCOMPONENTENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutClusterComponentEntity : HDHealthEntity



+(BOOL)associateWorkout:(id)arg0 withCluster:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateWorkoutsForCluster:(id)arg0 transaction:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(BOOL)removeWorkout:(id)arg0 fromCluster:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)numberOfWorkoutsInCluster:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif