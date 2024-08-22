// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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


-(?)_deleteEventIdsSearchContext;
-(?)_deleteLocationIdsSearchContext;
-(?)_deleteParticipantIdsSearchContext;
-(?)_deleteSearchContext;
-(?)_getApplicationSearchResults;
-(?)_getAttendeesSearchResults;
-(?)_getEventsSearchResults;
-(?)_getLocationSearchResults;
-(?)_getParticipantsSearchResults;
-(?)initWithDatabase:(?)arg0 filterdataSink;
-(BOOL)moreResultsAvailable;
-(int)seed;
-(struct CalEventIdsSearchContext *)_createEventIdsSearchContext;
-(struct CalEventOccurrenceSearchContext *)_createSearchContext;
-(struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;
-(struct CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;
-(void)_addMatchedEventIds:(struct __CFArray *)arg0 ;
-(void)_addMatchedLocationIds:(struct __CFArray *)arg0 ;
-(void)_addMatchedParticipantIds:(struct __CFArray *)arg0 ;
-(void)_startLoadingResults;
-(void)dealloc;
-(void)startSearching;
-(void)stopSearching;


@end


#endif