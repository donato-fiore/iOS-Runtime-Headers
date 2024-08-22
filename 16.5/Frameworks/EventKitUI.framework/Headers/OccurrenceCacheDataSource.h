// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OCCURRENCECACHEDATASOURCE_H
#define OCCURRENCECACHEDATASOURCE_H

@class EKEventStore, NSSet, NSMutableArray, NSString;
@protocol OccurrenceCacheDataSourceProtocol;

#import <Foundation/Foundation.h>


@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol>

 {
    EKEventStore *_eventStore;
    NSSet *_calendars;
    os_unfair_lock_s _dataLock;
    os_unfair_lock_s _fetchLock;
    NSMutableArray *_cachedDays;
    int _cachedDaysSeed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cachedOccurrencesAreLoaded;
-(BOOL)supportsFakeTodaySection;
-(BOOL)supportsInvitations;
-(NSInteger)cachedDayCount;
-(NSInteger)countOfOccurrencesAtDayIndex:(NSInteger)arg0 ;
-(NSInteger)sectionForCachedOccurrencesOnDate:(id)arg0 ;
-(id)_cachedDays;
-(id)_cachedOccurrenceAtIndexPath:(id)arg0 ;
-(id)_createCachedDays;
-(id)_mutableDayDictionaryAtIndex:(NSUInteger)arg0 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg0 ;
-(id)dateAtDayIndex:(NSInteger)arg0 ;
-(id)faultOccurrencesForDay:(id)arg0 inOccurrencesArray:(id)arg1 index:(NSInteger)arg2 limit:(*NSInteger)arg3 cacheSeed:(int)arg4 ;
-(id)indexPathsForOccurrence:(id)arg0 ;
-(id)initWithEventStore:(id)arg0 calendars:(id)arg1 ;
-(void)_fetchDaysStartingFromSection:(NSInteger)arg0 sectionsToLoadInBothDirections:(NSInteger)arg1 background:(BOOL)arg2 includeGivenSection:(BOOL)arg3 ;
-(void)fetchDaysInBackgroundStartingFromSection:(NSInteger)arg0 ;
-(void)fetchDaysStartingFromSection:(NSInteger)arg0 sectionsToLoadInBothDirections:(NSInteger)arg1 ;
-(void)invalidate;
-(void)invalidateCachedOccurrences;
-(void)searchWithTerm:(id)arg0 ;
-(void)setCachedDays:(id)arg0 ;
-(void)stopSearching;


@end


#endif