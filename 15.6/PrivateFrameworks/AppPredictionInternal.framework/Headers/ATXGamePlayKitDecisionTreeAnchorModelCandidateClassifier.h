// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXGAMEPLAYKITDECISIONTREEANCHORMODELCANDIDATECLASSIFIER_H
#define ATXGAMEPLAYKITDECISIONTREEANCHORMODELCANDIDATECLASSIFIER_H

@class NSString;
@protocol ATXAnchorModelCandidateClassifierProtocol, ATXAnchorModelDataStoreWrapperProtocol;


#import "ATXNaivePositiveAnchorModelCandidateClassifier.h"
#import "ATXGamePlayKitDecisionTree.h"
#import "ATXAnchorModelHyperParameters.h"

@interface ATXGamePlayKitDecisionTreeAnchorModelCandidateClassifier : ATXNaivePositiveAnchorModelCandidateClassifier <ATXAnchorModelCandidateClassifierProtocol>

 {
    id<ATXAnchorModelDataStoreWrapperProtocol> *_storeWrapper;
    ATXGamePlayKitDecisionTree *_tree;
    ATXAnchorModelHyperParameters *_hyperParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *treeDescription; // ivar: _treeDescription


+(BOOL)supportsSecureCoding;
+(void)configureKeyedArchiver:(id)arg0 ;
+(void)configureKeyedUnarchiver:(id)arg0 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)shouldComputeLaunchHistoryCounts;
-(NSInteger)classifierType;
-(id)anchorFeaturesWithAnchorOccurrence:(id)arg0 ;
-(id)candidateFeaturesForActionCandidateOnAnchorOccurrenceDate:(id)arg0 cachedLaunchHistory:(id)arg1 ;
-(id)candidateFeaturesForAppCandidateOnAnchorOccurrenceDate:(id)arg0 cachedLaunchHistory:(id)arg1 ;
-(id)candidateFeaturesForModeCandidateOnAnchorOccurrenceDate:(id)arg0 cachedLaunchHistory:(id)arg1 ;
-(id)candidateFeaturesWithAnchorOccurrence:(id)arg0 trainingResult:(id)arg1 ;
-(id)classifyCandidateForAnchorOccurrence:(id)arg0 trainingResult:(id)arg1 ;
-(id)featureNames;
-(id)featureVectorFromFeatureDictionary:(id)arg0 ;
-(id)indicesToKeepInTrainingAfterRemovingDuplicateFeatureVectorsWithConflictingLabels:(id)arg0 labels:(id)arg1 ;
-(id)inferenceFeatureDictForAnchorOccurrence:(id)arg0 trainingResult:(id)arg1 ;
-(id)initWithCandidateId:(id)arg0 candidateType:(id)arg1 anchor:(id)arg2 ;
-(id)initWithCandidateId:(id)arg0 candidateType:(id)arg1 anchor:(id)arg2 hyperParameters:(id)arg3 ;
-(id)initWithCandidateId:(id)arg0 candidateType:(id)arg1 anchor:(id)arg2 hyperParameters:(id)arg3 dataStoreWrapper:(id)arg4 ;
-(id)initWithCandidateId:(id)arg0 candidateType:(id)arg1 anchor:(id)arg2 tree:(id)arg3 hyperParameters:(id)arg4 dataStoreWrapper:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)labelKey;
-(id)predictWhenNoTreeInitialized;
-(id)stringFeaturesToReplaceWithUnk;
-(id)trainDecisionTree;
-(id)trainingData;
-(id)trainingFeatureVectorsFromTrainingData:(id)arg0 ;
-(id)trainingLabelsFromTrainingData:(id)arg0 ;
-(id)tree;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setRecentAppLaunchCountsFromAppInfoManager:(id)arg0 anchorOccurrenceDate:(id)arg1 ;
-(void)train;


@end


#endif