// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELPBMETRICS_H
#define ATXCANDIDATERELEVANCEMODELPBMETRICS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "ATXCandidateRelevanceModelPBEvaluationMetrics.h"
#import "ATXCandidateRelevanceModelPBModelMetrics.h"

@interface ATXCandidateRelevanceModelPBMetrics : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *candidateMetrics; // ivar: _candidateMetrics
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsFourWeeksAgo; // ivar: _evaluationMetricsFourWeeksAgo
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsLastFourWeeks; // ivar: _evaluationMetricsLastFourWeeks
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsOneWeekAgo; // ivar: _evaluationMetricsOneWeekAgo
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsThreeWeeksAgo; // ivar: _evaluationMetricsThreeWeeksAgo
@property (retain, nonatomic) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsTwoWeeksAgo; // ivar: _evaluationMetricsTwoWeeksAgo
@property (readonly, nonatomic) BOOL hasEvaluationMetricsFourWeeksAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsLastFourWeeks;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsOneWeekAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsThreeWeeksAgo;
@property (readonly, nonatomic) BOOL hasEvaluationMetricsTwoWeeksAgo;
@property (readonly, nonatomic) BOOL hasModelMetrics;
@property (retain, nonatomic) ATXCandidateRelevanceModelPBModelMetrics *modelMetrics; // ivar: _modelMetrics


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)candidateMetricsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCandidateMetrics:(id)arg0 ;
-(void)clearCandidateMetrics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif