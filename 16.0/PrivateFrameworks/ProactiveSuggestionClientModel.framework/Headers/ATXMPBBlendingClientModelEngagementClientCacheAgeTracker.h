// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMPBBLENDINGCLIENTMODELENGAGEMENTCLIENTCACHEAGETRACKER_H
#define ATXMPBBLENDINGCLIENTMODELENGAGEMENTCLIENTCACHEAGETRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBBlendingClientModelEngagementClientCacheAgeTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientModelABGroup; // ivar: _clientModelABGroup
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasOutcomeType;
@property (nonatomic) int outcomeType; // ivar: _outcomeType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outcomeTypeAsString:(int)arg0 ;
-(int)StringAsOutcomeType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif