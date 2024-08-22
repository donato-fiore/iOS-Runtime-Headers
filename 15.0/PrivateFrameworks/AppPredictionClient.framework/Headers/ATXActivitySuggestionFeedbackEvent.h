// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXACTIVITYSUGGESTIONFEEDBACKEVENT_H
#define ATXACTIVITYSUGGESTIONFEEDBACKEVENT_H

@class NSArray, NSString, NSDate;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXActivity.h"

@interface ATXActivitySuggestionFeedbackEvent : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSArray *acceptedTriggers; // ivar: _acceptedTriggers
@property (readonly, nonatomic) ATXActivity *activity; // ivar: _activity
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger location; // ivar: _location
@property (readonly, nonatomic) NSUInteger suggestionType; // ivar: _suggestionType
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXActivitySuggestionFeedbackEvent:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithEventDate:(id)arg0 activity:(id)arg1 acceptedTriggers:(id)arg2 eventType:(NSUInteger)arg3 suggestionType:(NSUInteger)arg4 location:(NSUInteger)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif