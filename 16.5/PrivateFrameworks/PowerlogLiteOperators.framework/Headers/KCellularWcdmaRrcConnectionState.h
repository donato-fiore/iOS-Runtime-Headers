// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCELLULARWCDMARRCCONNECTIONSTATE_H
#define KCELLULARWCDMARRCCONNECTIONSTATE_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularWcdmaRrcConnectionState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int establishmentCause; // ivar: _establishmentCause
@property (nonatomic) BOOL hasEstablishmentCause;
@property (nonatomic) BOOL hasReleaseCause;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int releaseCause; // ivar: _releaseCause
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)establishmentCauseAsString:(int)arg0 ;
-(id)releaseCauseAsString:(int)arg0 ;
-(id)stateAsString:(int)arg0 ;
-(int)StringAsEstablishmentCause:(id)arg0 ;
-(int)StringAsReleaseCause:(id)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif