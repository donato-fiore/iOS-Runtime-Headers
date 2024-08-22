// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDPROACTIVEMODELFITTINGEVALUATION_H
#define AWDPROACTIVEMODELFITTINGEVALUATION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "AWDProactiveModelFittingEvalMetrics.h"
#import "AWDProactiveModelFittingMinibatchStats.h"
#import "AWDProactiveModelFittingModelInfo.h"

@interface AWDProactiveModelFittingEvaluation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // ivar: _evaluationMetrics
@property (readonly, nonatomic) BOOL hasEvaluationMetrics;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // ivar: _minibatchStats
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // ivar: _modelInfo
@property (retain, nonatomic) NSMutableArray *precisionAtKs; // ivar: _precisionAtKs
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(Class)precisionAtKType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)precisionAtK:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)precisionAtKAtIndex:(NSUInteger)arg0 ;
-(void)addPrecisionAtK:(id)arg0 ;
-(void)clearPrecisionAtKs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif