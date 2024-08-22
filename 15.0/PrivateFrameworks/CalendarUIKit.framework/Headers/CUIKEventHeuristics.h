// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKEVENTHEURISTICS_H
#define CUIKEVENTHEURISTICS_H


#import <Foundation/Foundation.h>


@interface CUIKEventHeuristics : NSObject



+(BOOL)_shouldFilterEvent:(id)arg0 filterOptions:(NSUInteger)arg1 ;
+(id)_sortedAndFilteredEventsForPredicate:(id)arg0 filterOptions:(NSUInteger)arg1 sortMethod:(NSUInteger)arg2 eventStore:(id)arg3 ;
+(id)_sortedEvents:(id)arg0 withMethod:(NSUInteger)arg1 ;
+(id)todaysEventsInCalendars:(id)arg0 filterOptions:(NSUInteger)arg1 sortMethod:(NSUInteger)arg2 eventStore:(id)arg3 ;
+(id)tomorrowsEventsInCalendars:(id)arg0 filterOptions:(NSUInteger)arg1 sortMethod:(NSUInteger)arg2 eventStore:(id)arg3 ;
+(id)upcomingEventsInCalendars:(id)arg0 onlyReturnFirstEvents:(BOOL)arg1 filterOptions:(NSUInteger)arg2 sortMethod:(NSUInteger)arg3 eventStore:(id)arg4 ;


@end


#endif