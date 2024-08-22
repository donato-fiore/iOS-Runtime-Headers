// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARLTERADIOLINKFAILURE_H
#define KCELLULARLTERADIOLINKFAILURE_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularLteRadioLinkFailure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int band; // ivar: _band
@property (nonatomic) unsigned int coexPolicy; // ivar: _coexPolicy
@property (nonatomic) int failCause; // ivar: _failCause
@property (nonatomic) BOOL hasBand;
@property (nonatomic) BOOL hasCoexPolicy;
@property (nonatomic) BOOL hasFailCause;
@property (nonatomic) BOOL hasHstState;
@property (nonatomic) BOOL hasRrcState;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int hstState; // ivar: _hstState
@property (nonatomic) int rrcState; // ivar: _rrcState
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)failCauseAsString:(int)arg0 ;
-(id)rrcStateAsString:(int)arg0 ;
-(int)StringAsFailCause:(id)arg0 ;
-(int)StringAsRrcState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif