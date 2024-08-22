// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCCURRENCECACHESEARCHDATASOURCE_H
#define OCCURRENCECACHESEARCHDATASOURCE_H

@class EKSpotlightSearch, EKOccurrenceCacheSearch, NSString, NSMutableDictionary, NSArray;


#import "OccurrenceCacheDataSource.h"

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {
    EKSpotlightSearch *_narrowSearch;
    EKSpotlightSearch *_distantFutureSearch;
    EKSpotlightSearch *_distantPastSearch;
    EKOccurrenceCacheSearch *_legacySearch;
    NSString *_searchTerm;
    NSMutableDictionary *_processingCachedDays;
    _opaque_pthread_mutex_t _resultsLock;
    NSArray *_sortedDays;
    int _searchSeed;
}




-(BOOL)supportsFakeTodaySection;
-(BOOL)supportsInvitations;
-(NSInteger)countOfOccurrencesAtDayIndex:(NSInteger)arg0 ;
-(id)_cachedDays;
-(id)initWithEventStore:(id)arg0 calendars:(id)arg1 ;
-(void)_setCachedDaysAndNotify:(id)arg0 ;
-(void)_updateCachedDays;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateCachedOccurrences;
-(void)searchWithTerm:(id)arg0 ;
-(void)stopSearching;


@end


#endif