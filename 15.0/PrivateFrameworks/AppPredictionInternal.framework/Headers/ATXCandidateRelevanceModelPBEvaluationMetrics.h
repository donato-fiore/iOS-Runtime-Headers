// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCANDIDATERELEVANCEMODELPBEVALUATIONMETRICS_H
#define ATXCANDIDATERELEVANCEMODELPBEVALUATIONMETRICS_H

@class PBCodable;
@protocol NSCopying;



@interface ATXCandidateRelevanceModelPBEvaluationMetrics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasProdShadowEvaluationMRR;
@property (nonatomic) BOOL hasProdShadowEvaluationNumberOfDaysWithSessions;
@property (nonatomic) BOOL hasProdShadowEvaluationNumberOfSessions;
@property (nonatomic) BOOL hasProdShadowEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) BOOL hasProdShadowEvaluationSuccessAt1;
@property (nonatomic) BOOL hasProdShadowEvaluationSuccessAt2;
@property (nonatomic) BOOL hasProdShadowEvaluationSuccessAt4;
@property (nonatomic) BOOL hasProdShadowEvaluationSuccessAt8;
@property (nonatomic) BOOL hasProdUIEvaluationMRR;
@property (nonatomic) BOOL hasProdUIEvaluationNumberOfDaysWithSessions;
@property (nonatomic) BOOL hasProdUIEvaluationNumberOfSessions;
@property (nonatomic) BOOL hasProdUIEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) BOOL hasProdUIEvaluationSuccessAt1;
@property (nonatomic) BOOL hasProdUIEvaluationSuccessAt2;
@property (nonatomic) BOOL hasProdUIEvaluationSuccessAt4;
@property (nonatomic) BOOL hasProdUIEvaluationSuccessAt8;
@property (nonatomic) BOOL hasShadowEvaluationMRR;
@property (nonatomic) BOOL hasShadowEvaluationNumberOfDaysWithSessions;
@property (nonatomic) BOOL hasShadowEvaluationNumberOfSessions;
@property (nonatomic) BOOL hasShadowEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) BOOL hasShadowEvaluationSuccessAt1;
@property (nonatomic) BOOL hasShadowEvaluationSuccessAt2;
@property (nonatomic) BOOL hasShadowEvaluationSuccessAt4;
@property (nonatomic) BOOL hasShadowEvaluationSuccessAt8;
@property (nonatomic) BOOL hasUiEvaluationMRR;
@property (nonatomic) BOOL hasUiEvaluationNumberOfDaysWithSessions;
@property (nonatomic) BOOL hasUiEvaluationNumberOfSessions;
@property (nonatomic) BOOL hasUiEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) BOOL hasUiEvaluationSuccessAt1;
@property (nonatomic) BOOL hasUiEvaluationSuccessAt2;
@property (nonatomic) BOOL hasUiEvaluationSuccessAt4;
@property (nonatomic) BOOL hasUiEvaluationSuccessAt8;
@property (nonatomic) float prodShadowEvaluationMRR; // ivar: _prodShadowEvaluationMRR
@property (nonatomic) unsigned int prodShadowEvaluationNumberOfDaysWithSessions; // ivar: _prodShadowEvaluationNumberOfDaysWithSessions
@property (nonatomic) unsigned int prodShadowEvaluationNumberOfSessions; // ivar: _prodShadowEvaluationNumberOfSessions
@property (nonatomic) unsigned int prodShadowEvaluationNumberOfSessionsWithPredictions; // ivar: _prodShadowEvaluationNumberOfSessionsWithPredictions
@property (nonatomic) float prodShadowEvaluationSuccessAt1; // ivar: _prodShadowEvaluationSuccessAt1
@property (nonatomic) float prodShadowEvaluationSuccessAt2; // ivar: _prodShadowEvaluationSuccessAt2
@property (nonatomic) float prodShadowEvaluationSuccessAt4; // ivar: _prodShadowEvaluationSuccessAt4
@property (nonatomic) float prodShadowEvaluationSuccessAt8; // ivar: _prodShadowEvaluationSuccessAt8
@property (nonatomic) float prodUIEvaluationMRR; // ivar: _prodUIEvaluationMRR
@property (nonatomic) unsigned int prodUIEvaluationNumberOfDaysWithSessions; // ivar: _prodUIEvaluationNumberOfDaysWithSessions
@property (nonatomic) unsigned int prodUIEvaluationNumberOfSessions; // ivar: _prodUIEvaluationNumberOfSessions
@property (nonatomic) unsigned int prodUIEvaluationNumberOfSessionsWithPredictions; // ivar: _prodUIEvaluationNumberOfSessionsWithPredictions
@property (nonatomic) float prodUIEvaluationSuccessAt1; // ivar: _prodUIEvaluationSuccessAt1
@property (nonatomic) float prodUIEvaluationSuccessAt2; // ivar: _prodUIEvaluationSuccessAt2
@property (nonatomic) float prodUIEvaluationSuccessAt4; // ivar: _prodUIEvaluationSuccessAt4
@property (nonatomic) float prodUIEvaluationSuccessAt8; // ivar: _prodUIEvaluationSuccessAt8
@property (nonatomic) float shadowEvaluationMRR; // ivar: _shadowEvaluationMRR
@property (nonatomic) unsigned int shadowEvaluationNumberOfDaysWithSessions; // ivar: _shadowEvaluationNumberOfDaysWithSessions
@property (nonatomic) unsigned int shadowEvaluationNumberOfSessions; // ivar: _shadowEvaluationNumberOfSessions
@property (nonatomic) unsigned int shadowEvaluationNumberOfSessionsWithPredictions; // ivar: _shadowEvaluationNumberOfSessionsWithPredictions
@property (nonatomic) float shadowEvaluationSuccessAt1; // ivar: _shadowEvaluationSuccessAt1
@property (nonatomic) float shadowEvaluationSuccessAt2; // ivar: _shadowEvaluationSuccessAt2
@property (nonatomic) float shadowEvaluationSuccessAt4; // ivar: _shadowEvaluationSuccessAt4
@property (nonatomic) float shadowEvaluationSuccessAt8; // ivar: _shadowEvaluationSuccessAt8
@property (nonatomic) float uiEvaluationMRR; // ivar: _uiEvaluationMRR
@property (nonatomic) unsigned int uiEvaluationNumberOfDaysWithSessions; // ivar: _uiEvaluationNumberOfDaysWithSessions
@property (nonatomic) unsigned int uiEvaluationNumberOfSessions; // ivar: _uiEvaluationNumberOfSessions
@property (nonatomic) unsigned int uiEvaluationNumberOfSessionsWithPredictions; // ivar: _uiEvaluationNumberOfSessionsWithPredictions
@property (nonatomic) float uiEvaluationSuccessAt1; // ivar: _uiEvaluationSuccessAt1
@property (nonatomic) float uiEvaluationSuccessAt2; // ivar: _uiEvaluationSuccessAt2
@property (nonatomic) float uiEvaluationSuccessAt4; // ivar: _uiEvaluationSuccessAt4
@property (nonatomic) float uiEvaluationSuccessAt8; // ivar: _uiEvaluationSuccessAt8


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