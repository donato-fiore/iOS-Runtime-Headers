// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDPROACTIVEMODELFITTINGSPARSEFLOATMATRIX_H
#define AWDPROACTIVEMODELFITTINGSPARSEFLOATMATRIX_H

@class PBCodable;
@protocol NSCopying;



@interface AWDProactiveModelFittingSparseFloatMatrix : PBCodable <NSCopying>

 {
    ? _columnIndices;
    ? _rowIndices;
    ? _values;
    ? _has;
}


@property (readonly, nonatomic) *NSUInteger columnIndices;
@property (readonly, nonatomic) NSUInteger columnIndicesCount;
@property (nonatomic) NSUInteger columnLength; // ivar: _columnLength
@property (nonatomic) BOOL hasColumnLength;
@property (nonatomic) BOOL hasRowLength;
@property (readonly, nonatomic) *NSUInteger rowIndices;
@property (readonly, nonatomic) NSUInteger rowIndicesCount;
@property (nonatomic) NSUInteger rowLength; // ivar: _rowLength
@property (readonly, nonatomic) *float values;
@property (readonly, nonatomic) NSUInteger valuesCount;


+(id)sparseFloatMatrixFromDenseMatrix:(id)arg0 ;
+(id)sparseFloatMatrixFromSparseMatrix:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)columnIndicesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)rowIndicesAtIndex:(NSUInteger)arg0 ;
-(float)valueAtRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(float)valuesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addColumnIndices:(NSUInteger)arg0 ;
-(void)addRowIndices:(NSUInteger)arg0 ;
-(void)addValues:(float)arg0 ;
-(void)clearColumnIndices;
-(void)clearRowIndices;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif