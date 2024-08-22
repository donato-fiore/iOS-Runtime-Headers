// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBNOTIFICATIONGROUPEVENT_H
#define ATXPBNOTIFICATIONGROUPEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBNotificationGroupEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int eventType; // ivar: _eventType
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) CGFloat secondsSinceReferenceDate; // ivar: _secondsSinceReferenceDate
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif