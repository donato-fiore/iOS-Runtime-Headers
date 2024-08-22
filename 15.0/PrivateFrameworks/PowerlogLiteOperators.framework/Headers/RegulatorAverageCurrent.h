// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REGULATORAVERAGECURRENT_H
#define REGULATORAVERAGECURRENT_H

@class PBCodable;
@protocol NSCopying;



@interface RegulatorAverageCurrent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int averageCurrentMa; // ivar: _averageCurrentMa
@property (nonatomic) unsigned int duration64ms; // ivar: _duration64ms
@property (nonatomic) BOOL hasAverageCurrentMa;
@property (nonatomic) BOOL hasDuration64ms;
@property (nonatomic) BOOL hasRegulatorId;
@property (nonatomic) BOOL hasSampleCount;
@property (nonatomic) unsigned int regulatorId; // ivar: _regulatorId
@property (nonatomic) unsigned int sampleCount; // ivar: _sampleCount


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