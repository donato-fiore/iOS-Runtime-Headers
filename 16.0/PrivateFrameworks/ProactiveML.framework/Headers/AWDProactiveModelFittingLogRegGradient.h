// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDPROACTIVEMODELFITTINGLOGREGGRADIENT_H
#define AWDPROACTIVEMODELFITTINGLOGREGGRADIENT_H

@class PBCodable;
@protocol NSCopying;


#import "AWDProactiveModelFittingQuantizedDenseVector.h"
#import "AWDProactiveModelFittingEvalMetrics.h"
#import "AWDProactiveModelFittingMinibatchStats.h"
#import "AWDProactiveModelFittingModelInfo.h"
#import "AWDProactiveModelFittingSparseFloatVector.h"
#import "AWDProactiveModelFittingQuantizedSparseVector.h"

@interface AWDProactiveModelFittingLogRegGradient : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedGradient; // ivar: _denseQuantizedGradient
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // ivar: _evaluationMetrics
@property (nonatomic) float gradientL2norm; // ivar: _gradientL2norm
@property (nonatomic) float gradientScaleFactor; // ivar: _gradientScaleFactor
@property (readonly, nonatomic) BOOL hasDenseQuantizedGradient;
@property (readonly, nonatomic) BOOL hasEvaluationMetrics;
@property (nonatomic) BOOL hasGradientL2norm;
@property (nonatomic) BOOL hasGradientScaleFactor;
@property (nonatomic) BOOL hasIteration;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatGradient;
@property (readonly, nonatomic) BOOL hasSparseQuantizedGradient;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger iteration; // ivar: _iteration
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // ivar: _minibatchStats
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // ivar: _modelInfo
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatGradient; // ivar: _sparseFloatGradient
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedGradient; // ivar: _sparseQuantizedGradient
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)hasGradient;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)gradientLength;
-(NSUInteger)hash;
-(float)gradientValueAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif