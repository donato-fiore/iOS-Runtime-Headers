// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDDEDFINISHERENDED_H
#define AWDDEDFINISHERENDED_H

@class PBCodable;
@protocol NSCopying;



@interface AWDDEDFinisherEnded : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasNumbytes;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSUInteger numbytes; // ivar: _numbytes
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)stateAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif