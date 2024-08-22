// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTIMETITLEUTILITY_H
#define PGTIMETITLEUTILITY_H


#import <Foundation/Foundation.h>


@interface PGTimeTitleUtility : NSObject



+(BOOL)_canUseOverTheYearsForStartYear:(NSInteger)arg0 endYear:(NSInteger)arg1 ;
+(BOOL)_eventNodesCoverCompleteMonth:(id)arg0 ;
+(BOOL)_eventNodesCoverCompleteYear:(id)arg0 ;
+(BOOL)_hasReachedNumberVisitsPerMonth:(NSUInteger)arg0 inEvents:(id)arg1 withLocationNodes:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4 ;
+(BOOL)_hasReachedNumberVisitsPerYear:(NSUInteger)arg0 inEvents:(id)arg1 withLocationNodes:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4 ;
+(BOOL)_momentNodes:(id)arg0 coverCompleteMonth:(BOOL)arg1 coverCompleteYear:(BOOL)arg2 ;
+(BOOL)_yearIsNeededForDisplayingDate:(id)arg0 ;
+(BOOL)yearIsNeededForDisplayingDate:(id)arg0 ;
+(NSInteger)numberOfYearsFromDate:(id)arg0 toDate:(id)arg1 ;
+(NSUInteger)_dateIntervalFormatterTypeWithEventNodes:(id)arg0 allowedFormats:(NSUInteger)arg1 ;
+(id)_commonLocationLabelForLocationNodes:(id)arg0 ;
+(id)_dateNodesFromMomentNodes:(id)arg0 featuredYearNodes:(id)arg1 momentsLocalStartDate:(*id)arg2 momentsLocalEndDate:(*id)arg3 ;
+(id)_featuredDateNodesFromDateNodes:(id)arg0 featuredYearNodes:(id)arg1 ;
+(id)_locationNodesForTimeTitleFromLocationNodes:(id)arg0 ;
+(id)_numberOfYearsAgoWithEventNodes:(id)arg0 relativeToDateComponents:(id)arg1 ;
+(id)_splitTimeTitleWithLocalStartDate:(id)arg0 endDate:(id)arg1 startDateNode:(id)arg2 endDateNode:(id)arg3 allowedFormats:(NSUInteger)arg4 locale:(id)arg5 ;
+(id)babyGrowingUpTimeTitleWithEventNodes:(id)arg0 ;
+(id)numberOfYearsAgoWithMomentNodes:(id)arg0 relativeToDateComponents:(id)arg1 useOrdinal:(BOOL)arg2 ;
+(id)peopleTimeTitleWithEventNodes:(id)arg0 ;
+(id)peopleTimeTitleWithEventNodes:(id)arg0 requireMultipleYears:(BOOL)arg1 ;
+(id)significantDateNodesFromMomentNodes:(id)arg0 dateFormatterType:(NSUInteger)arg1 ;
+(id)splitTimeTitleWithDateInterval:(id)arg0 allowedFormats:(NSUInteger)arg1 ;
+(id)splitTimeTitleWithOptions:(id)arg0 ;
+(id)timeTitleWithDateInterval:(id)arg0 allowedFormats:(NSUInteger)arg1 ;
+(id)timeTitleWithOptions:(id)arg0 ;
+(void)_enumerateNeighborMomentNodesOfMomentNodes:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif