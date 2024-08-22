// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALSEARCH_H
#define CALSEARCH_H

@protocol CalSearchDataSink;

#import <Foundation/Foundation.h>


@interface CalSearch : NSObject {
    ? _database;
    *CalFilter _filter;
    *__CFString _searchString;
    int _seed;
    id<CalSearchDataSink> *_dataSink;
    BOOL _dateToStartShowingResultsSentToDataSink;
    BOOL _moreResultsAvailable;
    *__CFArray _partialResults;
    *__CFArray _partialCachedOccurrences;
    *__CFArray _partialCachedDays;
    *__CFArray _partialCachedDaysIndexes;
    *__CFSet _matchedEventsSet;
    *__CFSet _matchedParticipantsSet;
    *__CFSet _matchedLocationsSet;
    BOOL _stopLoadingResults;
    _opaque_pthread_mutex_t _dataSourceDeallocLock;
    BOOL _implementsCancellationCallback;
}


@property BOOL searchAttendees; // ivar: _searchAttendees
@property BOOL searchLocations; // ivar: _searchLocations
@property BOOL searchParticipants; // ivar: _searchParticipants
@property BOOL shouldMatchLocationsOnlyForEventSearch; // ivar: _shouldMatchLocationsOnlyForEventSearch


-(?)_createEventIdsSearchContext;
-(?)_createParticipantIdsSearchContext;
-(?)_createSearchContext;
-(?)_deleteLocationIdsSearchContext;
-(?)_getLocationSearchResults;
-(?)initWithDatabase:(?)arg0 filterdataSink;
-(BOOL)moreResultsAvailable;
-(int)seed;
-(struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;
-(void)_addMatchedEventIds:(struct __CFArray *)arg0 ;
-(void)_addMatchedLocationIds:(struct __CFArray *)arg0 ;
-(void)_addMatchedParticipantIds:(struct __CFArray *)arg0 ;
-(void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext *)arg0 ;
-(void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext *)arg0 ;
-(void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext *)arg0 ;
-(void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext *)arg0 ;
-(void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext *)arg0 ;
-(void)_getEventsSearchResults:(struct CalEventIdsSearchContext *)arg0 ;
-(void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext *)arg0 ;
-(void)_startLoadingResults;
-(void)dealloc;
-(void)startSearching;
-(void)stopSearching;


@end


#endif