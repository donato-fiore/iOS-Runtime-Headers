// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSTIMERANGEMESSAGE_H
#define BCSTIMERANGEMESSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface BCSTimeRangeMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allDay; // ivar: _allDay
@property (nonatomic) int from; // ivar: _from
@property (nonatomic) BOOL hasAllDay;
@property (nonatomic) BOOL hasFrom;
@property (nonatomic) BOOL hasTo;
@property (nonatomic) int to; // ivar: _to


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif