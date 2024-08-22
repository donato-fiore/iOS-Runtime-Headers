// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSPERSONALIZATIONEVALUATION_H
#define _PSPERSONALIZATIONEVALUATION_H

@class NSNumber, MLModelConfiguration, NSString, ODCurareEvaluationAndReportingModule, NSMutableArray, NSMutableDictionary, NSURL, NSUserDefaults, NSDictionary;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface _PSPersonalizationEvaluation : NSObject

@property (retain, nonatomic) NSNumber *accuracyGainThresholdForSwap; // ivar: _accuracyGainThresholdForSwap
@property (retain, nonatomic) MLModelConfiguration *adaptableModelConfiguration; // ivar: _adaptableModelConfiguration
@property (retain, nonatomic) NSString *adaptableModelDeployPath; // ivar: _adaptableModelDeployPath
@property (nonatomic) NSInteger adaptationStrategy; // ivar: _adaptationStrategy
@property (retain, nonatomic) NSNumber *batchSize; // ivar: _batchSize
@property (retain, nonatomic) ODCurareEvaluationAndReportingModule *curareEvaluationAndReporting; // ivar: _curareEvaluationAndReporting
@property (retain, nonatomic) NSNumber *engagementRateGainThresholdForSwap; // ivar: _engagementRateGainThresholdForSwap
@property (retain, nonatomic) NSNumber *epoc; // ivar: _epoc
@property (retain, nonatomic) NSNumber *evaluationIterationCount; // ivar: _evaluationIterationCount
@property (retain, nonatomic) NSMutableArray *featureDateForAllShareEvents; // ivar: _featureDateForAllShareEvents
@property (retain, nonatomic) NSMutableArray *featureDateForShareEventsSinceLastAdaptation; // ivar: _featureDateForShareEventsSinceLastAdaptation
@property (retain, nonatomic) NSMutableArray *featureMatricesForAllShareEvents; // ivar: _featureMatricesForAllShareEvents
@property (retain, nonatomic) NSMutableDictionary *featureNameDict; // ivar: _featureNameDict
@property (retain, nonatomic) NSURL *intermediateCompiledModelURL; // ivar: _intermediateCompiledModelURL
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) NSNumber *learningRate; // ivar: _learningRate
@property (retain, nonatomic) NSNumber *maxDepth; // ivar: _maxDepth
@property (retain, nonatomic) NSNumber *minChildWeight; // ivar: _minChildWeight
@property (retain, nonatomic) NSNumber *minSampleCountForAdaptation; // ivar: _minSampleCountForAdaptation
@property (retain, nonatomic) NSNumber *minimumTestDataSizeForSwap; // ivar: _minimumTestDataSizeForSwap
@property (retain, nonatomic) NSMutableDictionary *modelTagToCandidateModel; // ivar: _modelTagToCandidateModel
@property (retain, nonatomic) NSMutableDictionary *modelTagToHyperparameters; // ivar: _modelTagToHyperparameters
@property (retain, nonatomic) NSNumber *numClasses; // ivar: _numClasses
@property (retain, nonatomic) NSNumber *numTrees; // ivar: _numTrees
@property (retain, nonatomic) NSUserDefaults *psAdaptationDefaults; // ivar: _psAdaptationDefaults
@property (readonly, nonatomic) NSDictionary *recipe; // ivar: _recipe
@property (retain, nonatomic) NSNumber *recipeID; // ivar: _recipeID
@property (retain, nonatomic) NSMutableArray *results; // ivar: _results
@property (retain, nonatomic) NSMutableArray *sampledFeatureVectors; // ivar: _sampledFeatureVectors
@property (retain, nonatomic) NSMutableDictionary *sampledFeatureVectorsForSplits; // ivar: _sampledFeatureVectorsForSplits
@property (retain, nonatomic) NSDictionary *selectedFeaturesConfig; // ivar: _selectedFeaturesConfig
@property (retain, nonatomic) NSNumber *swapOK; // ivar: _swapOK
@property (retain, nonatomic) NSNumber *testDataCount; // ivar: _testDataCount
@property (retain, nonatomic) NSNumber *testSplitPercent; // ivar: _testSplitPercent
@property (retain, nonatomic) NSNumber *topN; // ivar: _topN
@property (retain, nonatomic) NSNumber *trainDataCount; // ivar: _trainDataCount


-(BOOL)cloneAdaptableModel:(id)arg0 toFilePath:(id)arg1 originalXgboostModelName:(id)arg2 clonedXgboostModelName:(id)arg3 ;
-(BOOL)isAdaptedModelCreated;
-(BOOL)performPrerequisitesBeforeAdaptationWithFeaturesConfigDeployPath:(id)arg0 ;
-(NSUInteger)bucketedValue:(NSUInteger)arg0 ;
-(id)_getDataStatistics:(id)arg0 ;
-(id)_getDataStatistics:(id)arg0 forData:(id)arg1 ;
-(id)_getRecentUserData;
-(id)allUserDataAdapted;
-(id)allUserDataDefault;
-(id)createMLArrayBatchProviderOverDataSplitType:(id)arg0 mlModelType:(id)arg1 ;
-(id)createMLArrayBatchProviderOverDataSplitType:(id)arg0 mlModelType:(id)arg1 dataStartingIndex:(NSInteger)arg2 dataLength:(NSInteger)arg3 ;
-(id)createMLArrayBatchProviderWithMLModelType:(id)arg0 withDataArray:(id)arg1 ;
-(id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg0 forMLModel:(id)arg1 ;
-(id)createMLFeatureProviderInstanceForMLModelType:(id)arg0 forFeatureVector:(id)arg1 ;
-(id)engagementSimulationWithMLModel:(id)arg0 mlModelType:(id)arg1 labelName:(id)arg2 ;
-(id)evaluateClassicMLModel:(id)arg0 ;
-(id)evaluateWithModel:(id)arg0 ;
-(id)evaluateWithModel:(id)arg0 dataArray:(id)arg1 modelType:(NSUInteger)arg2 ;
-(id)hyperparametersForCandidateModel:(id)arg0 ;
-(id)initWithRecipe:(id)arg0 knowledgeStore:(id)arg1 ;
-(id)loadAdaptableModelUnderDirectory:(id)arg0 ;
-(id)loadDefaultModel;
-(id)measureTestAccuracyOf:(id)arg0 againstTrueValuesOf:(id)arg1 labelName:(id)arg2 ;
-(id)personalize;
-(id)personalizeModel:(id)arg0 ;
-(id)processDataWithQuery:(id)arg0 ;
-(id)runAdaptationAndEvaluation;
-(id)runAdaptationAndEvaluationWithFeaturesConfigDeployPath:(id)arg0 adaptableModelDeployPath:(id)arg1 ;
-(id)updateMLModelWithURL:(id)arg0 overDataSplit:(id)arg1 ;
-(void)adaptMLModel:(id)arg0 overDataSplit:(id)arg1 dataStartingIndex:(NSInteger)arg2 dataLength:(NSInteger)arg3 ;
-(void)adaptMLModel:(id)arg0 withMLModelType:(id)arg1 withDataArray:(id)arg2 modelConfiguration:(id)arg3 ;
-(void)adaptMLModel:(id)arg0 withTrainingData:(id)arg1 modelConfiguration:(id)arg2 ;
-(void)generateCandidateModels;
-(void)getSamplesWithTestSplitPercentWithSeed:(int)arg0 ;
-(void)processData;
-(void)sampleFromDataWithSeed:(int)arg0 ;
-(void)setLastDayOfAdaptation:(id)arg0 ;
-(void)setParametersForHyperparmeters:(id)arg0 ;
-(void)setParametersFromRecipe;
-(void)setParametersFromRecipeForCandidateModel:(id)arg0 ;
-(void)updateAdaptableModelConfigWithUpdateType:(NSInteger)arg0 numTrees:(id)arg1 ;
-(void)updateMLModelWithURL:(id)arg0 withMLModelType:(id)arg1 withDataArray:(id)arg2 modelConfiguration:(id)arg3 ;


@end


#endif