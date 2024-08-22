// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCANDIDATERELEVANCEMODELPBMODELMETRICS_H
#define ATXCANDIDATERELEVANCEMODELPBMODELMETRICS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXCandidateRelevanceModelPBModelMetrics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (nonatomic) unsigned int avgNumberOfModelWeights; // ivar: _avgNumberOfModelWeights
@property (nonatomic) unsigned int avgNumberOfNonZeroModelWeights; // ivar: _avgNumberOfNonZeroModelWeights
@property (retain, nonatomic) NSString *blendingABGroup; // ivar: _blendingABGroup
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (retain, nonatomic) NSString *executableType; // ivar: _executableType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (nonatomic) BOOL hasAvgNumberOfModelWeights;
@property (nonatomic) BOOL hasAvgNumberOfNonZeroModelWeights;
@property (readonly, nonatomic) BOOL hasBlendingABGroup;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (nonatomic) BOOL hasDefaultHyperParams; // ivar: _hasDefaultHyperParams
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (nonatomic) BOOL hasHasDefaultHyperParams;
@property (nonatomic) BOOL hasHasTrainedModel;
@property (nonatomic) BOOL hasLearningRate;
@property (nonatomic) BOOL hasLogisticRegressionRegularizationL1Ratio;
@property (nonatomic) BOOL hasLogisticRegressionRegularizationRate;
@property (readonly, nonatomic) BOOL hasLogisticRegressionRegularizationStrategy;
@property (nonatomic) BOOL hasMinIterations;
@property (nonatomic) BOOL hasModelAgeInDays;
@property (readonly, nonatomic) BOOL hasModelType;
@property (nonatomic) BOOL hasNumberOfCandidateModels;
@property (nonatomic) BOOL hasPipelineEnabled;
@property (nonatomic) BOOL hasStoppingThreshold;
@property (nonatomic) BOOL hasTrainDataNumberOfCandidates;
@property (nonatomic) BOOL hasTrainDataNumberOfDaysWithPositiveSamples;
@property (nonatomic) BOOL hasTrainDataNumberOfPositiveSamples;
@property (nonatomic) BOOL hasTrainDataNumberOfSamples;
@property (nonatomic) BOOL hasTrainedModel; // ivar: _hasTrainedModel
@property (nonatomic) float learningRate; // ivar: _learningRate
@property (nonatomic) float logisticRegressionRegularizationL1Ratio; // ivar: _logisticRegressionRegularizationL1Ratio
@property (nonatomic) float logisticRegressionRegularizationRate; // ivar: _logisticRegressionRegularizationRate
@property (retain, nonatomic) NSString *logisticRegressionRegularizationStrategy; // ivar: _logisticRegressionRegularizationStrategy
@property (nonatomic) unsigned int minIterations; // ivar: _minIterations
@property (nonatomic) unsigned int modelAgeInDays; // ivar: _modelAgeInDays
@property (retain, nonatomic) NSString *modelType; // ivar: _modelType
@property (nonatomic) unsigned int numberOfCandidateModels; // ivar: _numberOfCandidateModels
@property (nonatomic) BOOL pipelineEnabled; // ivar: _pipelineEnabled
@property (nonatomic) float stoppingThreshold; // ivar: _stoppingThreshold
@property (nonatomic) unsigned int trainDataNumberOfCandidates; // ivar: _trainDataNumberOfCandidates
@property (nonatomic) unsigned int trainDataNumberOfDaysWithPositiveSamples; // ivar: _trainDataNumberOfDaysWithPositiveSamples
@property (nonatomic) unsigned int trainDataNumberOfPositiveSamples; // ivar: _trainDataNumberOfPositiveSamples
@property (nonatomic) unsigned int trainDataNumberOfSamples; // ivar: _trainDataNumberOfSamples


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