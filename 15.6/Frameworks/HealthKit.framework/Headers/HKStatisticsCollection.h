// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSTATISTICSCOLLECTION_H
#define HKSTATISTICSCOLLECTION_H

@class NSMutableDictionary, NSSet, NSDate, NSDateComponents;

#import <Foundation/Foundation.h>


@interface HKStatisticsCollection : NSObject {
    id *_emptyStatisticsConstructor;
    CGFloat _approximateStatisticsInterval;
    NSMutableDictionary *_statisticsByIndex;
    NSSet *_cachedSources;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (readonly, nonatomic) NSUInteger statisticsCount;
@property (readonly, copy, nonatomic) NSDateComponents *statisticsInterval; // ivar: _statisticsInterval


-(BOOL)_insertStatistics:(id)arg0 ;
-(id)_initWithAnchorDate:(id)arg0 statisticsInterval:(id)arg1 ;
-(id)_initWithAnchorDate:(id)arg0 statisticsInterval:(id)arg1 emptyStatisticsConstructor:(id)arg2 ;
-(id)_maxSumQuantityStatistics;
-(id)_minSumQuantityStatistics;
-(id)_mostRecentQuantityDateInterval;
-(id)_mostRecentQuantityStatistics;
-(id)_statisticsDateIntervalAndIndex:(*NSInteger)arg0 forDate:(id)arg1 ;
-(id)_statisticsDateIntervalAtIndex:(NSInteger)arg0 ;
-(id)_statisticsForIndex:(NSInteger)arg0 ;
-(id)_statisticsForLastIndex;
-(id)init;
-(id)initWithAnchorDate:(id)arg0 statisticsInterval:(id)arg1 ;
-(id)initWithAnchorDate:(id)arg0 statisticsInterval:(id)arg1 emptyStatisticsConstructor:(id)arg2 ;
-(id)sources;
-(id)statistics;
-(id)statisticsForDate:(id)arg0 ;
-(void)_clearSourcesCache;
-(void)_enumerateStatisticsIndexesFromDate:(id)arg0 toDate:(id)arg1 withBlock:(id)arg2 ;
-(void)_enumerateTimePeriodsFromDate:(id)arg0 toDate:(id)arg1 withBlock:(id)arg2 ;
-(void)_resetStatistics:(id)arg0 ;
-(void)_timePeriodForStatisticsAtIndex:(NSInteger)arg0 startDate:(*id)arg1 endDate:(*id)arg2 ;
-(void)enumeratePopulatedStatisticsWithBlock:(id)arg0 ;
-(void)enumerateStatisticsFromDate:(id)arg0 toDate:(id)arg1 withBlock:(id)arg2 ;


@end


#endif