// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDPROACTIVEMODELFITTINGQUANTIZEDSPARSEVECTOR_H
#define AWDPROACTIVEMODELFITTINGQUANTIZEDSPARSEVECTOR_H

@class PBCodable;
@protocol NSCopying;



@interface AWDProactiveModelFittingQuantizedSparseVector : PBCodable <NSCopying>

 {
    ? _indices;
    ? _values;
    ? _has;
}


@property (nonatomic) float bucketSize; // ivar: _bucketSize
@property (nonatomic) BOOL hasBucketSize;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) BOOL hasMinValue;
@property (readonly, nonatomic) *unsigned int indices;
@property (readonly, nonatomic) NSUInteger indicesCount;
@property (nonatomic) unsigned int length; // ivar: _length
@property (nonatomic) float minValue; // ivar: _minValue
@property (readonly, nonatomic) *unsigned int values;
@property (readonly, nonatomic) NSUInteger valuesCount;


+(id)quantizedSparseVectorFromDenseVector:(id)arg0 numberOfBuckets:(NSUInteger)arg1 ;
+(id)quantizedSparseVectorFromSparseVector:(id)arg0 numberOfBuckets:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)originalValueAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)indicesAtIndex:(NSUInteger)arg0 ;
-(unsigned int)valuesAtIndex:(NSUInteger)arg0 ;
-(void)addIndices:(unsigned int)arg0 ;
-(void)addValues:(unsigned int)arg0 ;
-(void)clearIndices;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif