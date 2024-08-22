// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICSLOGEVENTMATCHER_H
#define CPANALYTICSLOGEVENTMATCHER_H

@class NSArray, NSString;


#import "CPAnalyticsEventMatcher.h"

@interface CPAnalyticsLogEventMatcher : CPAnalyticsEventMatcher {
    CPAnalyticsEventMatcher *_eventMatcher;
}


@property (readonly, nonatomic) NSArray *eventPropertiesToLog; // ivar: _eventPropertiesToLog
@property (readonly, nonatomic) NSArray *eventPublicPropertiesToLog; // ivar: _eventPublicPropertiesToLog
@property (readonly, nonatomic) NSString *eventTypeLabel; // ivar: _eventTypeLabel
@property (readonly, nonatomic) BOOL shouldLogEventName; // ivar: _shouldLogEventName


-(BOOL)doesMatch:(id)arg0 ;
-(id)init;
-(id)initWithConfig:(id)arg0 ;


@end


#endif