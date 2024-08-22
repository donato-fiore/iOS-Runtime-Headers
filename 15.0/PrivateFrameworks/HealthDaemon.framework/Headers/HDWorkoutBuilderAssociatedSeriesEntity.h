// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTBUILDERASSOCIATEDSERIESENTITY_H
#define HDWORKOUTBUILDERASSOCIATEDSERIESENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutBuilderAssociatedSeriesEntity : HDHealthEntity



+(BOOL)enumerateSeriesForBuilder:(id)arg0 transaction:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(NSInteger)associateSeries:(id)arg0 toWorkoutBuilderID:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(id)allBuilderAssociatedSeriesWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)seriesForBuilder:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif