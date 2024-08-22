// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTIMELINESCHEDULER_H
#define PXTIMELINESCHEDULER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PXTimelineDataSource.h"

@interface PXTimelineScheduler : NSObject

@property (retain, nonatomic) NSArray *bestContent; // ivar: _bestContent
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSArray *featuredPhotoTimelineEntries; // ivar: _featuredPhotoTimelineEntries
@property (retain, nonatomic) NSArray *memoryTimelineEntries; // ivar: _memoryTimelineEntries
@property (retain, nonatomic) NSArray *timelineCandidates; // ivar: _timelineCandidates
@property (retain, nonatomic) PXTimelineDataSource *timelineDataSource; // ivar: _timelineDataSource


-(NSInteger)_startOfDayIndexWithOffsetDay:(NSInteger)arg0 entriesCount:(NSInteger)arg1 perDayLimit:(NSInteger)arg2 options:(id)arg3 ;
-(id)_coalesceRepeatedTimelineEntries:(id)arg0 ;
-(id)_findBestContentAndRemoveFromSourceAtDate:(id)arg0 options:(id)arg1 ;
-(id)_findBestFeaturedPhotoAndRemoveFromSource;
-(id)_scheduledTimelineEntriesWithOptions:(id)arg0 atDate:(id)arg1 ;
-(id)_sortedTimelineEntriesForMemoriesAtDate:(id)arg0 ;
-(id)_timelineAtDate:(id)arg0 startOfDayCandidatesIndex:(NSInteger)arg1 timelineEntryByBestContentInterval:(id)arg2 options:(id)arg3 ;
-(id)_timelineEntriesFromAssetCollections:(id)arg0 ;
-(id)_timelineEntryByBestContentIntervalAtDate:(id)arg0 numberOfDays:(NSInteger)arg1 options:(id)arg2 ;
-(id)init;
-(id)initWithTimelineDataSource:(id)arg0 ;
-(id)scheduledTimelineEntriesWithOptions:(id)arg0 ;
-(void)_initTimelineEntriesAtDate:(id)arg0 options:(id)arg1 ;


@end


#endif