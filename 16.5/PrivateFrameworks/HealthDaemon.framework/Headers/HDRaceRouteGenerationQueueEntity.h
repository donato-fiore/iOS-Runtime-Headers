// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDRACEROUTEGENERATIONQUEUEENTITY_H
#define HDRACEROUTEGENERATIONQUEUEENTITY_H



#import "HDHealthEntity.h"

@interface HDRaceRouteGenerationQueueEntity : HDHealthEntity



+(BOOL)finishWorkoutCluster:(id)arg0 concreteCluster:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)populateWithWorkoutClusters:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(NSInteger)protectionClass;
+(id)clearQueueWithTransaction:(id)arg0 error:(*id)arg1 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)nextWorkoutClusterWithTransaction:(id)arg0 error:(*id)arg1 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif