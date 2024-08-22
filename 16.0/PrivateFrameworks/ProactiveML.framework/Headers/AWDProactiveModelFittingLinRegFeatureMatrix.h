// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDPROACTIVEMODELFITTINGLINREGFEATUREMATRIX_H
#define AWDPROACTIVEMODELFITTINGLINREGFEATUREMATRIX_H

@class PBCodable;
@protocol NSCopying;


#import "AWDProactiveModelFittingMinibatchStats.h"
#import "AWDProactiveModelFittingModelInfo.h"
#import "AWDProactiveModelFittingSparseFloatMatrix.h"
#import "AWDProactiveModelFittingQuantizedSparseMatrix.h"

@interface AWDProactiveModelFittingLinRegFeatureMatrix : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float featureMatrixL2norm; // ivar: _featureMatrixL2norm
@property (nonatomic) float featureMatrixScaleFactor; // ivar: _featureMatrixScaleFactor
@property (nonatomic) BOOL hasFeatureMatrixL2norm;
@property (nonatomic) BOOL hasFeatureMatrixScaleFactor;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatFeatureMatrix;
@property (readonly, nonatomic) BOOL hasSparseQuantizedFeatureMatrix;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // ivar: _minibatchStats
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // ivar: _modelInfo
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatMatrix *sparseFloatFeatureMatrix; // ivar: _sparseFloatFeatureMatrix
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseMatrix *sparseQuantizedFeatureMatrix; // ivar: _sparseQuantizedFeatureMatrix
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)hasFeatureMatrix;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)featureMatrixValueAtRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif