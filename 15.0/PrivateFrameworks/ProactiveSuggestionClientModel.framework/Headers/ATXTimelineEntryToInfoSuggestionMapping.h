// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXTIMELINEENTRYTOINFOSUGGESTIONMAPPING_H
#define ATXTIMELINEENTRYTOINFOSUGGESTIONMAPPING_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXInfoTimelineEntry.h"

@interface ATXTimelineEntryToInfoSuggestionMapping : NSObject

@property (readonly, nonatomic) NSString *suggestionId; // ivar: _suggestionId
@property (readonly, nonatomic) NSInteger suggestionMappingReason; // ivar: _suggestionMappingReason
@property (readonly, nonatomic) ATXInfoTimelineEntry *timelineEntry; // ivar: _timelineEntry


+(id)entryMappingWithTimelineEntry:(id)arg0 suggestionId:(id)arg1 withSuggestionMappingReason:(NSInteger)arg2 ;
-(id)init;
-(id)initWithTimelineEntry:(id)arg0 suggestionId:(id)arg1 withSuggestionMappingReason:(NSInteger)arg2 ;


@end


#endif