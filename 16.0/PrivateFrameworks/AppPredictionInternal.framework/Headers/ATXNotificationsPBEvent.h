// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSPBEVENT_H
#define ATXNOTIFICATIONSPBEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface ATXNotificationsPBEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int event; // ivar: _event
@property (nonatomic) BOOL hasEvent;
@property (nonatomic) BOOL hasIsOffscreen;
@property (nonatomic) BOOL hasPos;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTopOfPile;
@property (nonatomic) BOOL isOffscreen; // ivar: _isOffscreen
@property (nonatomic) int pos; // ivar: _pos
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) BOOL topOfPile; // ivar: _topOfPile


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventAsString:(int)arg0 ;
-(int)StringAsEvent:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif