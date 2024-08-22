// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKANALYTICSDDEVENT_H
#define VKANALYTICSDDEVENT_H



#import "VKAnalyticsEvent.h"

@interface VKAnalyticsDDEvent : VKAnalyticsEvent

@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (nonatomic) NSInteger eventType; // ivar: _eventType


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithElement:(id)arg0 eventType:(NSInteger)arg1 customIdentifier:(id)arg2 ;


@end


#endif