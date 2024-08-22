// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIPSMARTPLAYLISTINFO_H
#define MIPSMARTPLAYLISTINFO_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface MIPSmartPlaylistInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL dynamic; // ivar: _dynamic
@property (nonatomic) BOOL enabledItemsOnly; // ivar: _enabledItemsOnly
@property (nonatomic) unsigned int evaluationOrder; // ivar: _evaluationOrder
@property (nonatomic) BOOL filtered; // ivar: _filtered
@property (nonatomic) BOOL genius; // ivar: _genius
@property (nonatomic) BOOL hasDynamic;
@property (nonatomic) BOOL hasEnabledItemsOnly;
@property (nonatomic) BOOL hasEvaluationOrder;
@property (nonatomic) BOOL hasFiltered;
@property (nonatomic) BOOL hasGenius;
@property (nonatomic) BOOL hasLimitKind;
@property (nonatomic) BOOL hasLimitOrder;
@property (nonatomic) BOOL hasLimitValue;
@property (nonatomic) BOOL hasLimited;
@property (nonatomic) BOOL hasReverseLimitOrder;
@property (readonly, nonatomic) BOOL hasSmartCriteria;
@property (nonatomic) int limitKind; // ivar: _limitKind
@property (nonatomic) unsigned int limitOrder; // ivar: _limitOrder
@property (nonatomic) unsigned int limitValue; // ivar: _limitValue
@property (nonatomic) BOOL limited; // ivar: _limited
@property (nonatomic) BOOL reverseLimitOrder; // ivar: _reverseLimitOrder
@property (retain, nonatomic) NSData *smartCriteria; // ivar: _smartCriteria


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