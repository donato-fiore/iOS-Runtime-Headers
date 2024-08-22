// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMIMETRICSAGGREGATEDACCURACYLOG_H
#define SGMIMETRICSAGGREGATEDACCURACYLOG_H

@class PBCodable;
@protocol NSCopying;



@interface SGMIMetricsAggregatedAccuracyLog : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIgnorablePredictedAsIgnorable;
@property (nonatomic) BOOL hasIgnorablePredictedAsNeutral;
@property (nonatomic) BOOL hasIgnorablePredictedAsSalient;
@property (nonatomic) BOOL hasNeutralPredictedAsIgnorable;
@property (nonatomic) BOOL hasNeutralPredictedAsNeutral;
@property (nonatomic) BOOL hasNeutralPredictedAsSalient;
@property (nonatomic) BOOL hasSalientPredictedAsIgnorable;
@property (nonatomic) BOOL hasSalientPredictedAsNeutral;
@property (nonatomic) BOOL hasSalientPredictedAsSalient;
@property (nonatomic) unsigned int ignorablePredictedAsIgnorable; // ivar: _ignorablePredictedAsIgnorable
@property (nonatomic) unsigned int ignorablePredictedAsNeutral; // ivar: _ignorablePredictedAsNeutral
@property (nonatomic) unsigned int ignorablePredictedAsSalient; // ivar: _ignorablePredictedAsSalient
@property (nonatomic) unsigned int neutralPredictedAsIgnorable; // ivar: _neutralPredictedAsIgnorable
@property (nonatomic) unsigned int neutralPredictedAsNeutral; // ivar: _neutralPredictedAsNeutral
@property (nonatomic) unsigned int neutralPredictedAsSalient; // ivar: _neutralPredictedAsSalient
@property (nonatomic) unsigned int salientPredictedAsIgnorable; // ivar: _salientPredictedAsIgnorable
@property (nonatomic) unsigned int salientPredictedAsNeutral; // ivar: _salientPredictedAsNeutral
@property (nonatomic) unsigned int salientPredictedAsSalient; // ivar: _salientPredictedAsSalient


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