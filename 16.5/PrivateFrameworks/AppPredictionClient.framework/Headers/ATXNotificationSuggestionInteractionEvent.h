// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSUGGESTIONINTERACTIONEVENT_H
#define ATXNOTIFICATIONSUGGESTIONINTERACTIONEVENT_H

@class NSString, NSDate, NSUUID;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXNotificationSuggestionInteractionEvent : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger suggestionType; // ivar: _suggestionType
@property (readonly, nonatomic) NSUUID *suggestionUUID; // ivar: _suggestionUUID
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)eventCausesSuggestionInactivity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXNotificationSuggestionInteractionEvent:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSuggestionType:(NSInteger)arg0 eventType:(NSInteger)arg1 suggestionUUID:(id)arg2 eventDate:(id)arg3 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(id)serialize;


@end


#endif