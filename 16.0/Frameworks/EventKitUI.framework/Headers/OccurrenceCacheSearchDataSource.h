// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCCURRENCECACHESEARCHDATASOURCE_H
#define OCCURRENCECACHESEARCHDATASOURCE_H

@class EKSpotlightSearch, NSString, NSMutableDictionary, NSArray;


#import "OccurrenceCacheDataSource.h"

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {
    EKSpotlightSearch *_narrowSearch;
    EKSpotlightSearch *_distantFutureSearch;
    EKSpotlightSearch *_distantPastSearch;
    NSString *_searchTerm;
    NSMutableDictionary *_processingCachedDays;
    _opaque_pthread_mutex_t _resultsLock;
    NSArray *_sortedDays;
    BOOL _sortedDaysUpdated;
    int _searchSeed;
}




-(BOOL)supportsFakeTodaySection;
-(BOOL)supportsInvitations;
-(id)_createCachedDays;
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