// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDPROACTIVEMODELFITTINGQUANTIZEDDENSEVECTOR_H
#define AWDPROACTIVEMODELFITTINGQUANTIZEDDENSEVECTOR_H

@class PBCodable;
@protocol NSCopying;



@interface AWDProactiveModelFittingQuantizedDenseVector : PBCodable <NSCopying>

 {
    ? _values;
    ? _has;
}


@property (nonatomic) float bucketSize; // ivar: _bucketSize
@property (nonatomic) BOOL hasBucketSize;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) float minValue; // ivar: _minValue
@property (readonly, nonatomic) *unsigned int values;
@property (readonly, nonatomic) NSUInteger valuesCount;


+(id)quantizedDenseVectorFromDenseVector:(id)arg0 numberOfBuckets:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)originalValueAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)valuesAtIndex:(NSUInteger)arg0 ;
-(void)addValues:(unsigned int)arg0 ;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif