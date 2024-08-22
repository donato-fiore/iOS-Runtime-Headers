// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCELLULARPROTOCOLSTACKSTATE_H
#define KCELLULARPROTOCOLSTACKSTATE_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularProtocolStackState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int currState; // ivar: _currState
@property (nonatomic) BOOL hasCurrState;
@property (nonatomic) BOOL hasPrevState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int prevState; // ivar: _prevState
@property (nonatomic) unsigned int prevStateDurMs; // ivar: _prevStateDurMs
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currStateAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)prevStateAsString:(int)arg0 ;
-(int)StringAsCurrState:(id)arg0 ;
-(int)StringAsPrevState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif