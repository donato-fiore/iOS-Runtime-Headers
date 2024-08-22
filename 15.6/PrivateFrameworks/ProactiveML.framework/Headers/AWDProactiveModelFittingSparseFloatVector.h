// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDPROACTIVEMODELFITTINGSPARSEFLOATVECTOR_H
#define AWDPROACTIVEMODELFITTINGSPARSEFLOATVECTOR_H

@class PBCodable;
@protocol NSCopying;



@interface AWDProactiveModelFittingSparseFloatVector : PBCodable <NSCopying>

 {
    ? _indices;
    ? _values;
    ? _has;
}


@property (nonatomic) BOOL hasLength;
@property (readonly, nonatomic) *NSUInteger indices;
@property (readonly, nonatomic) NSUInteger indicesCount;
@property (nonatomic) NSUInteger length; // ivar: _length
@property (readonly, nonatomic) *float values;
@property (readonly, nonatomic) NSUInteger valuesCount;


+(id)sparseFloatVectorFromModelWeights:(id)arg0 ;
+(id)sparseFloatVectorFromSparseVector:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)indicesAtIndex:(NSUInteger)arg0 ;
-(float)valueAtIndex:(NSUInteger)arg0 ;
-(float)valuesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addIndices:(NSUInteger)arg0 ;
-(void)addValues:(float)arg0 ;
-(void)clearIndices;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif