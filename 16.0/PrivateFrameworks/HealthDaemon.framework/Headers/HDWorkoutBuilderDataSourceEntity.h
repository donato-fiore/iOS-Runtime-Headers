// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTBUILDERDATASOURCEENTITY_H
#define HDWORKOUTBUILDERDATASOURCEENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutBuilderDataSourceEntity : HDHealthEntity



+(BOOL)enumerateDataSourcesForWorkoutBuilder:(id)arg0 transaction:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(BOOL)removeDataSourceWithIdentifier:(id)arg0 fromWorkoutBuilder:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)storeDataSourceWithIdentifier:(id)arg0 archivedState:(id)arg1 workoutBuilder:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif