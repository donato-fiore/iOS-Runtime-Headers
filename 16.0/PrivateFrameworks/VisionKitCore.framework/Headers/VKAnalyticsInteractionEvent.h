// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKANALYTICSINTERACTIONEVENT_H
#define VKANALYTICSINTERACTIONEVENT_H



#import "VKAnalyticsEvent.h"

@interface VKAnalyticsInteractionEvent : VKAnalyticsEvent

@property (nonatomic) NSUInteger activeInteractionTypes; // ivar: _activeInteractionTypes
@property (nonatomic) BOOL analysisButtonActive; // ivar: _analysisButtonActive
@property (nonatomic) NSInteger ddCount; // ivar: _ddCount
@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (nonatomic) NSInteger mrcCount; // ivar: _mrcCount
@property (nonatomic) NSInteger source; // ivar: _source
@property (nonatomic) NSInteger textLength; // ivar: _textLength
@property (nonatomic) NSInteger vsCount; // ivar: _vsCount


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithEventType:(NSInteger)arg0 analysis:(id)arg1 source:(NSInteger)arg2 interactionTypes:(NSUInteger)arg3 buttonActive:(BOOL)arg4 customIdentifier:(id)arg5 ;


@end


#endif