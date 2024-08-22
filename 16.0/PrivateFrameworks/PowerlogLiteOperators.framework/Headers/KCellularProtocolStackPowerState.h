// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KCELLULARPROTOCOLSTACKPOWERSTATE_H
#define KCELLULARPROTOCOLSTACKPOWERSTATE_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularProtocolStackPowerState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPrevState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int prevState; // ivar: _prevState
@property (nonatomic) unsigned int prevStateDurMs; // ivar: _prevStateDurMs
@property (nonatomic) unsigned int state; // ivar: _state
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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