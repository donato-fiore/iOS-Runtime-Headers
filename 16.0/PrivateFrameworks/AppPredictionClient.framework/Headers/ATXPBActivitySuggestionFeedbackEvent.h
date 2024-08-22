// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBACTIVITYSUGGESTIONFEEDBACKEVENT_H
#define ATXPBACTIVITYSUGGESTIONFEEDBACKEVENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "ATXPBActivity.h"

@interface ATXPBActivitySuggestionFeedbackEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ATXPBActivity *activity; // ivar: _activity
@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasActivity;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasSuggestionType;
@property (nonatomic) int location; // ivar: _location
@property (retain, nonatomic) NSMutableArray *serializedAcceptedTriggers; // ivar: _serializedAcceptedTriggers
@property (nonatomic) int suggestionType; // ivar: _suggestionType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)locationAsString:(int)arg0 ;
-(id)serializedAcceptedTriggersAtIndex:(NSUInteger)arg0 ;
-(id)suggestionTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(int)StringAsLocation:(id)arg0 ;
-(int)StringAsSuggestionType:(id)arg0 ;
-(void)addSerializedAcceptedTriggers:(id)arg0 ;
-(void)clearSerializedAcceptedTriggers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif