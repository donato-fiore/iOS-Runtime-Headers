// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDPROACTIVEMODELFITTINGLOGREGWEIGHTS_H
#define AWDPROACTIVEMODELFITTINGLOGREGWEIGHTS_H

@class PBCodable;
@protocol NSCopying;


#import "AWDProactiveModelFittingQuantizedDenseVector.h"
#import "AWDProactiveModelFittingEvalMetrics.h"
#import "AWDProactiveModelFittingMinibatchStats.h"
#import "AWDProactiveModelFittingModelInfo.h"
#import "AWDProactiveModelFittingSparseFloatVector.h"
#import "AWDProactiveModelFittingQuantizedSparseVector.h"

@interface AWDProactiveModelFittingLogRegWeights : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedWeights; // ivar: _denseQuantizedWeights
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // ivar: _evaluationMetrics
@property (readonly, nonatomic) BOOL hasDenseQuantizedWeights;
@property (readonly, nonatomic) BOOL hasEvaluationMetrics;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatWeights;
@property (readonly, nonatomic) BOOL hasSparseQuantizedWeights;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWeightsL2norm;
@property (nonatomic) BOOL hasWeightsScaleFactor;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // ivar: _minibatchStats
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // ivar: _modelInfo
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatWeights; // ivar: _sparseFloatWeights
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedWeights; // ivar: _sparseQuantizedWeights
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) float weightsL2norm; // ivar: _weightsL2norm
@property (nonatomic) float weightsScaleFactor; // ivar: _weightsScaleFactor


-(BOOL)hasWeights;
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