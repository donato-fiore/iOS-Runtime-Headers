// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBCARPLAYEVENT_H
#define BMPBCARPLAYEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface BMPBCarPlayEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL isStart; // ivar: _isStart
@property (nonatomic) int reason; // ivar: _reason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reasonAsString:(int)arg0 ;
-(int)StringAsReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif