// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALENDAREVENTLOADER_H
#define CALENDAREVENTLOADER_H

@class EKEventStore, NSArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_group, CalendarEventLoaderDelegate;

#import <Foundation/Foundation.h>


@interface CalendarEventLoader : NSObject {
    EKEventStore *_store;
    NSObject<OS_dispatch_queue> *_occurrencesLock;
    NSArray *_loadedOccurrences;
    NSArray *_loadedProposedTimeOccurrences;
    NSMutableSet *_occurrencesAwaitingRefresh;
    NSMutableSet *_occurrencesAwaitingDeletion;
    NSSet *_selectedCalendars;
    BOOL _selectedCalendarsWereSet;
    unsigned int _daysOfPadding;
    unsigned int _maxDaysToCache;
    NSUInteger _componentForExpandingRequests;
    NSUInteger _componentForExpandingPadding;
    CGFloat _preferredReloadStart;
    CGFloat _preferredReloadEnd;
    NSObject<OS_dispatch_group> *_loadGroup;
    NSObject<OS_dispatch_queue> *_loadQueue;
    int _cancelSeed;
    CGFloat _loadedStart;
    CGFloat _loadedEnd;
    BOOL _loadedOccurrencesAreStale;
    CGFloat _currentlyLoadingStart;
    CGFloat _currentlyLoadingEnd;
    CGFloat _lastRequestedStart;
    CGFloat _lastRequestedEnd;
    int _currentGeneration;
}


@property (nonatomic) BOOL allowEventLocationPrediction; // ivar: _allowEventLocationPrediction
@property (weak, nonatomic) NSObject<CalendarEventLoaderDelegate> *delegate; // ivar: _delegate


-(BOOL)firstLoadBegan;
-(BOOL)loadIsComplete;
-(BOOL)setSelectedCalendars:(id)arg0 ;
-(id)_uniqueEventsFromArray:(id)arg0 ;
-(id)initWithEventStore:(id)arg0 ;
-(id)occurrencesForStartDate:(id)arg0 endDate:(id)arg1 preSorted:(BOOL)arg2 waitForLoad:(BOOL)arg3 ;
-(void)_enqueueLoadForRangeStart:(CGFloat)arg0 end:(CGFloat)arg1 ;
-(void)_eventStoreChanged:(id)arg0 ;
-(void)_getLoadStart:(*CGFloat)arg0 end:(*CGFloat)arg1 fromLoadedStart:(CGFloat)arg2 loadedEnd:(CGFloat)arg3 currentlyLoadingStart:(CGFloat)arg4 currentlyLoadingEnd:(CGFloat)arg5 ;
-(void)_getStart:(CGFloat)arg0 end:(CGFloat)arg1 expandedToComponents:(NSUInteger)arg2 withResultStart:(*CGFloat)arg3 resultEnd:(*CGFloat)arg4 ;
-(void)_getStart:(CGFloat)arg0 end:(CGFloat)arg1 paddedByDays:(int)arg2 inTimeZone:(id)arg3 resultStart:(*CGFloat)arg4 resultEnd:(*CGFloat)arg5 ;
-(void)_loadIfNeededBetweenStart:(CGFloat)arg0 end:(CGFloat)arg1 loadPaddingNow:(BOOL)arg2 ;
-(void)_pruneLoadedOccurrences;
-(void)_reload;
-(void)addOccurrenceAwaitingDeletion:(id)arg0 ;
-(void)addOccurrenceAwaitingRefresh:(id)arg0 ;
-(void)cancelAllLoads;
-(void)dealloc;
-(void)loadIfNeeded;
-(void)setCacheLimit:(unsigned int)arg0 ;
-(void)setComponentForExpandingPadding:(NSUInteger)arg0 ;
-(void)setComponentForExpandingRequests:(NSUInteger)arg0 ;
-(void)setPadding:(unsigned int)arg0 ;
-(void)setPreferredReloadStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)timeZoneChanged;
-(void)waitForBackgroundLoad;


@end


#endif