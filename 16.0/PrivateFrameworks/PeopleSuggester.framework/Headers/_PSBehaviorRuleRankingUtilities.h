// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSBEHAVIORRULERANKINGUTILITIES_H
#define _PSBEHAVIORRULERANKINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface _PSBehaviorRuleRankingUtilities : NSObject



+(BOOL)copyFileFromURL:(id)arg0 toURL:(id)arg1 ;
+(BOOL)copyZippedAdaptableModel:(id)arg0 ;
+(BOOL)loadDeployedAdaptableModelUnderDirectory:(id)arg0 ;
+(BOOL)removeFolderAtPath:(id)arg0 ;
+(id)batchPredictWithAdaptedMLModel:(id)arg0 psConfigForAdaptableModel:(id)arg1 featureDictArray:(id)arg2 ;
+(id)batchPredictWithAdaptedMLModel:(id)arg0 psConfigForAdaptableModel:(id)arg1 featurizedRules:(id)arg2 ;
+(id)batchPredictWithMLModel:(id)arg0 featureArrayDict:(id)arg1 ;
+(id)compileMLModelAtPath:(id)arg0 ;
+(id)getAdaptedCompiledMLModelPath;
+(id)getAdaptedModelRecipeVersionFilePath;
+(id)getArchivedDefaultAdaptableModelPath;
+(id)getDeployedAdaptableCompiledMLModelPath;
+(id)getDeployedCompiledMLModelPath;
+(id)getDeployedCompiledMLModelPathForContactRanker;
+(id)getIntermediateAdaptableCompiledMLModel;
+(id)getTrialCompiledAdaptableMLModelPath;
+(id)getTrialCompiledMLModelPath;
+(id)getTrialCompiledMLModelPathForContactRanker;
+(id)getZippedDefaultAdaptableModelPath;
+(id)loadAdaptableModelConfig:(id)arg0 ;
+(id)loadMLModel:(id)arg0 modelConfig:(id)arg1 ;
+(id)loadMLModelConfigurationWithConfigDict:(id)arg0 ;
+(id)predictWithMLModel:(id)arg0 featureDictArray:(id)arg1 ;
+(id)reformatFeaturesInFeatureDictArray:(id)arg0 ;
+(id)reformatFeaturesInFeaturizedBehaviorRuleArray:(id)arg0 ;
+(id)unzipFileWithPath:(id)arg0 toFileName:(id)arg1 toFolderPath:(id)arg2 ;


@end


#endif