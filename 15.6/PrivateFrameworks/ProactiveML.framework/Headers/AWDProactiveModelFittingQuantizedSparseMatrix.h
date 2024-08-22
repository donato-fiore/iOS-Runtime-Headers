// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDPROACTIVEMODELFITTINGQUANTIZEDSPARSEMATRIX_H
#define AWDPROACTIVEMODELFITTINGQUANTIZEDSPARSEMATRIX_H

@class PBCodable;
@protocol NSCopying;



@interface AWDProactiveModelFittingQuantizedSparseMatrix : PBCodable <NSCopying>

 {
    ? _columnIndices;
    ? _rowIndices;
    ? _values;
    ? _has;
}


@property (nonatomic) float bucketSize; // ivar: _bucketSize
@property (readonly, nonatomic) *unsigned int columnIndices;
@property (readonly, nonatomic) NSUInteger columnIndicesCount;
@property (nonatomic) unsigned int columnLength; // ivar: _columnLength
@property (nonatomic) BOOL hasBucketSize;
@property (nonatomic) BOOL hasColumnLength;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) BOOL hasRowLength;
@property (nonatomic) float minValue; // ivar: _minValue
@property (readonly, nonatomic) *unsigned int rowIndices;
@property (readonly, nonatomic) NSUInteger rowIndicesCount;
@property (nonatomic) unsigned int rowLength; // ivar: _rowLength
@property (readonly, nonatomic) *unsigned int values;
@property (readonly, nonatomic) NSUInteger valuesCount;


+(id)quantizedSparseMatrixFromSparseMatrix:(id)arg0 numberOfBuckets:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)originalValueAtRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)columnIndicesAtIndex:(NSUInteger)arg0 ;
-(unsigned int)rowIndicesAtIndex:(NSUInteger)arg0 ;
-(unsigned int)valuesAtIndex:(NSUInteger)arg0 ;
-(void)addColumnIndices:(unsigned int)arg0 ;
-(void)addRowIndices:(unsigned int)arg0 ;
-(void)addValues:(unsigned int)arg0 ;
-(void)clearColumnIndices;
-(void)clearRowIndices;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif