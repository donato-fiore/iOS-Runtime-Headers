// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTSTATISTICSENTITY_H
#define HDWORKOUTSTATISTICSENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutStatisticsEntity : HDHealthEntity



+(BOOL)enumerateWorkoutStatisticsForActivityId:(NSUInteger)arg0 database:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)insertWorkoutStatistics:(id)arg0 workoutActivityId:(NSUInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(Class)ownerEntityClass;
+(NSInteger)protectionClass;
+(id)_allProperties;
+(id)databaseTable;
+(id)foreignKeys;
+(id)uniquedColumns;
+(id)workoutStatisticsForActivityId:(NSUInteger)arg0 quantityType:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif