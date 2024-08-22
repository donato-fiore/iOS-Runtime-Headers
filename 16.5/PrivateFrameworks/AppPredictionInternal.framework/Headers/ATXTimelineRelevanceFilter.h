// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXTIMELINERELEVANCEFILTER_H
#define ATXTIMELINERELEVANCEFILTER_H


#import <Foundation/Foundation.h>


@interface ATXTimelineRelevanceFilter : NSObject



+(id)applyLimitsToTimelineSuggestions:(id)arg0 forWidget:(id)arg1 withTimelineEntryDelegate:(id)arg2 abuseControlConfig:(id)arg3 ;
+(id)filteredAndSortedTimelineEntriesForWidget:(id)arg0 entries:(id)arg1 withTimelineEntryDelegate:(id)arg2 abuseControlConfig:(id)arg3 ;


@end


#endif