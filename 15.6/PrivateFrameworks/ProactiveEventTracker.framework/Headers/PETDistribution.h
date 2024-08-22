// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETDISTRIBUTION_H
#define PETDISTRIBUTION_H

@class PBCodable;
@protocol NSCopying;



@interface PETDistribution : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMax;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) BOOL hasVariance;
@property (nonatomic) CGFloat max; // ivar: _max
@property (nonatomic) CGFloat mean; // ivar: _mean
@property (nonatomic) CGFloat min; // ivar: _min
@property (nonatomic) CGFloat variance; // ivar: _variance


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