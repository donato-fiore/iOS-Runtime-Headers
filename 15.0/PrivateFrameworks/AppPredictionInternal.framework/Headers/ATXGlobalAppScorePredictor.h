// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXGLOBALAPPSCOREPREDICTOR_H
#define ATXGLOBALAPPSCOREPREDICTOR_H

@class _PASCFBurstTrie, MLModel, ATXMemoryPressureMonitor;
@protocol ATXMemoryPressureObserver;

#import <Foundation/Foundation.h>


@interface ATXGlobalAppScorePredictor : NSObject <ATXMemoryPressureObserver>

 {
    _PASCFBurstTrie *_index;
    _PASCFBurstTrie *_signalsTrie;
    MLModel *_globalPopularityPredictor;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
}


@property (readonly, nonatomic) MLModel *globalPopularityPredictor;


+(id)sharedInstance;
-(id)globalPopularitiesAtTimeOfDay:(int)arg0 atDayOfWeek:(int)arg1 atLocation:(int)arg2 withLastAppLaunched:(id)arg3 ;
-(id)globalPopularitiesForBundleIds:(id)arg0 atTimeOfDayIndex:(int)arg1 atDayOfWeekIndex:(int)arg2 atLocationIndex:(int)arg3 ;
-(id)globalPopularitiesForBundleIds:(id)arg0 atTimeOfDayIndex:(int)arg1 atDayOfWeekIndex:(int)arg2 atLocationIndex:(int)arg3 withLastAppLaunched:(id)arg4 ;
-(id)globalPopularityForBundleIds:(id)arg0 atDate:(id)arg1 atLocation:(NSInteger)arg2 withLastAppLaunched:(id)arg3 ;
-(id)globalPopularityForBundleIdsGivenTimeDayAndLocation:(id)arg0 context:(id)arg1 ;
-(id)globalPopularityForBundleIdsGivenTimeDayLocationAndLastApp:(id)arg0 context:(id)arg1 ;
-(id)init;
-(id)initWithMemoryPressureMonitor:(id)arg0 ;
-(void)dealloc;
-(void)handleMemoryPressure;
-(void)unloadGlobalPopularityPredictor;


@end


#endif