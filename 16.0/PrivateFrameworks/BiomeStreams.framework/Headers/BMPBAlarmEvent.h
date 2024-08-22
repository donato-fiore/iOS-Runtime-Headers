// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBALARMEVENT_H
#define BMPBALARMEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBAlarmEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *alarmID; // ivar: _alarmID
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasAlarmID;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasIsSleepAlarm;
@property (nonatomic) BOOL hasLastEventType;
@property (nonatomic) BOOL isSleepAlarm; // ivar: _isSleepAlarm
@property (nonatomic) int lastEventType; // ivar: _lastEventType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)lastEventTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(int)StringAsLastEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif