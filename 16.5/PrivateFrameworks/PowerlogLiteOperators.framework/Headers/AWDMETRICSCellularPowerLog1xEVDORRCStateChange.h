// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDMETRICSCELLULARPOWERLOG1XEVDORRCSTATECHANGE_H
#define AWDMETRICSCELLULARPOWERLOG1XEVDORRCSTATECHANGE_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMETRICSCellularPowerLog1xEVDORRCStateChange : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int cause; // ivar: _cause
@property (nonatomic) BOOL hasCause;
@property (nonatomic) BOOL hasPrevState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int prevState; // ivar: _prevState
@property (nonatomic) unsigned int prevStateDurMs; // ivar: _prevStateDurMs
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)causeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)prevStateAsString:(int)arg0 ;
-(id)stateAsString:(int)arg0 ;
-(int)StringAsCause:(id)arg0 ;
-(int)StringAsPrevState:(id)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif