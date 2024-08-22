// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSSOCIALSERVICECALENDAR_H
#define CLSSOCIALSERVICECALENDAR_H

@class CNContactStore, CNContact, NSMutableSet;


#import "CLSSocialService.h"
#import "CLSCalendarEventsCache.h"

@interface CLSSocialServiceCalendar : CLSSocialService {
    CNContactStore *_contactStore;
    CNContact *_meContact;
    CLSCalendarEventsCache *_calendarEventsCache;
    NSMutableSet *_prefetchedDateIntervals;
}




+(BOOL)_isCalendarRelevant:(id)arg0 ;
+(BOOL)_isEventInMeetingRoom:(id)arg0 ;
+(BOOL)eventAtLocation:(id)arg0 withAttendeeNames:(id)arg1 matchesClueCollection:(id)arg2 ;
+(BOOL)shouldKeepEvent:(id)arg0 withClueCollection:(id)arg1 ;
+(id)relevantCalendars:(id)arg0 ;
-(BOOL)_hasAlreadyPrefetchedEventsFromUniversalDate:(id)arg0 toUniversalDate:(id)arg1 ;
-(BOOL)_sortedAssetCollections:(id)arg0 containsEvent:(id)arg1 ;
-(id)_fullNameWithContact:(id)arg0 ;
-(id)eventFromProxyEvent:(id)arg0 ;
-(id)eventsForClueCollection:(id)arg0 ;
-(id)eventsForDates:(id)arg0 ;
-(id)initWithProxyAtURL:(id)arg0 andIntent:(NSUInteger)arg1 ;
-(id)meContact;
-(id)personsFromEventParticipants:(id)arg0 excludeCurrentUser:(BOOL)arg1 ;
-(id)workCalendarEventsMatchingContactIdentifiers:(id)arg0 fromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 ;
-(void)_enumerateEventsFromDate:(id)arg0 toDate:(id)arg1 fetchIfNeeded:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)enumerateEventsFromUniversalDate:(id)arg0 toUniversalDate:(id)arg1 usingBlock:(id)arg2 ;
-(void)invalidateMemoryCaches;
-(void)prefetchEventsFromUniversalDate:(id)arg0 toUniversalDate:(id)arg1 forAssetCollectionsSortedByStartDate:(id)arg2 usingBlock:(id)arg3 ;


@end


#endif