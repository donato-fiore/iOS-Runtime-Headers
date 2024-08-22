// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRITRIALROLLOUTFIELDS_H
#define TRITRIALROLLOUTFIELDS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface TRITrialRolloutFields : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientFactorPackSetId; // ivar: _clientFactorPackSetId
@property (retain, nonatomic) NSString *clientRampId; // ivar: _clientRampId
@property (retain, nonatomic) NSString *clientRolloutId; // ivar: _clientRolloutId
@property (nonatomic) int clientTargetingRuleGroupOrdinal; // ivar: _clientTargetingRuleGroupOrdinal
@property (readonly, nonatomic) BOOL hasClientFactorPackSetId;
@property (readonly, nonatomic) BOOL hasClientRampId;
@property (readonly, nonatomic) BOOL hasClientRolloutId;
@property (nonatomic) BOOL hasClientTargetingRuleGroupOrdinal;


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