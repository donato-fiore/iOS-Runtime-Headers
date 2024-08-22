// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARCDMAEVDORRSTATE_H
#define KCELLULARCDMAEVDORRSTATE_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularCdmaEvdoRrState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int currAtState; // ivar: _currAtState
@property (nonatomic) int currNormalizedState; // ivar: _currNormalizedState
@property (nonatomic) BOOL hasCurrAtState;
@property (nonatomic) BOOL hasCurrNormalizedState;
@property (nonatomic) BOOL hasPrevAtState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int prevAtState; // ivar: _prevAtState
@property (nonatomic) unsigned int prevStateDurMs; // ivar: _prevStateDurMs
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currNormalizedStateAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCurrNormalizedState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif