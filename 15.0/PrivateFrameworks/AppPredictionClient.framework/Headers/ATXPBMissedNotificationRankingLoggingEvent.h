// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPBMISSEDNOTIFICATIONRANKINGLOGGINGEVENT_H
#define ATXPBMISSEDNOTIFICATIONRANKINGLOGGINGEVENT_H

@class PBCodable;
@protocol ATXJSONSerializableProtocol, NSCopying;


#import "ATXPBMissedNotificationRanking.h"

@interface ATXPBMissedNotificationRankingLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int eventType; // ivar: _eventType
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasMissedNotificationRanking;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) ATXPBMissedNotificationRanking *missedNotificationRanking; // ivar: _missedNotificationRanking
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif