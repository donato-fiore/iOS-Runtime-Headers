// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXUNIFIEDMODESTREAMMODEEVENTPROVIDER_H
#define ATXUNIFIEDMODESTREAMMODEEVENTPROVIDER_H



#import "ATXModeTransitionModeEventProvider.h"

@interface ATXUnifiedModeStreamModeEventProvider : ATXModeTransitionModeEventProvider



-(BOOL)isEventFromProvider:(id)arg0 ;
-(id)aggregationEventsFromEvent:(id)arg0 ;
-(id)biomePublisherWithBookmark:(id)arg0 ;
-(id)dateIntervalFromEvent:(id)arg0 ;
-(id)init;


@end


#endif