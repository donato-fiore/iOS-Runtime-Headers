// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKANALYTICSTEXTEVENT_H
#define VKANALYTICSTEXTEVENT_H



#import "VKAnalyticsEvent.h"

@interface VKAnalyticsTextEvent : VKAnalyticsEvent

@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (nonatomic) SEL macOSKBNavigationSelector; // ivar: _macOSKBNavigationSelector
@property (nonatomic) NSUInteger selectionLength; // ivar: _selectionLength
@property (nonatomic) NSUInteger selectionWordCount; // ivar: _selectionWordCount
@property (nonatomic) NSInteger source; // ivar: _source
@property (nonatomic) NSInteger textEventType; // ivar: _textEventType
@property (nonatomic) NSUInteger totalLength; // ivar: _totalLength


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithSelectionLength:(NSUInteger)arg0 totalLength:(NSUInteger)arg1 selectionWordCount:(NSUInteger)arg2 macOSSelector:(SEL)arg3 eventType:(NSInteger)arg4 source:(NSInteger)arg5 customIdentifier:(id)arg6 ;


@end


#endif