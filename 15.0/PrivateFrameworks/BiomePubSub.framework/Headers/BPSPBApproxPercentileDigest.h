// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSPBAPPROXPERCENTILEDIGEST_H
#define BPSPBAPPROXPERCENTILEDIGEST_H

@class PBCodable;
@protocol NSCopying;



@interface BPSPBApproxPercentileDigest : PBCodable <NSCopying>

 {
    ? _centroidMeans;
    ? _centroidWeights;
    ? _has;
}


@property (nonatomic) unsigned int bufferMultiplier; // ivar: _bufferMultiplier
@property (nonatomic) unsigned int centroidCount; // ivar: _centroidCount
@property (readonly, nonatomic) *float centroidMeans;
@property (readonly, nonatomic) NSUInteger centroidMeansCount;
@property (readonly, nonatomic) *unsigned int centroidWeights;
@property (readonly, nonatomic) NSUInteger centroidWeightsCount;
@property (nonatomic) BOOL hasBufferMultiplier;
@property (nonatomic) BOOL hasCentroidCount;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) float max; // ivar: _max
@property (nonatomic) float min; // ivar: _min


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)centroidMeansAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)centroidWeightsAtIndex:(NSUInteger)arg0 ;
-(void)addCentroidMeans:(float)arg0 ;
-(void)addCentroidWeights:(unsigned int)arg0 ;
-(void)clearCentroidMeans;
-(void)clearCentroidWeights;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif