// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSTATISTICSCALCULATORENTITY_H
#define HDSTATISTICSCALCULATORENTITY_H



#import "HDHealthEntity.h"

@interface HDStatisticsCalculatorEntity : HDHealthEntity



+(BOOL)deleteStatisticsForOwner:(id)arg0 type:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)enumerateStatisticsForOwner:(id)arg0 transaction:(id)arg1 error:(*id)arg2 block:(id)arg3 ;
+(BOOL)setCalculator:(id)arg0 forOwner:(id)arg1 anchor:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(BOOL)setStatistics:(id)arg0 forOwner:(id)arg1 anchor:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(Class)ownerEntityClass;
+(NSInteger)protectionClass;
+(id)calculatorForOwner:(id)arg0 type:(id)arg1 anchor:(*id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(id)databaseTable;
+(id)foreignKeys;
+(id)ownerEntityReferenceColumn;
+(id)statisticsForOwner:(id)arg0 type:(id)arg1 anchor:(*id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif