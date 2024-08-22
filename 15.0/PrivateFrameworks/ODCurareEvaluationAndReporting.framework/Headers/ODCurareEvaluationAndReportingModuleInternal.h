// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODCURAREEVALUATIONANDREPORTINGMODULEINTERNAL_H
#define ODCURAREEVALUATIONANDREPORTINGMODULEINTERNAL_H


#import <Foundation/Foundation.h>


@interface ODCurareEvaluationAndReportingModuleInternal : NSObject {
    ? evaluationInstance;
    ? personalizationInstance;
    ? dataProviderInstance;
    ? pruningPolicy;
    ? clientBundleIdentifier;
    ? temporaryDirectory;
    ? shouldReportFailure;
    ? shouldProduceReport;
    ? frameworkExecutionDate;
    ? frameworkPersonalizationDate;
    ? lastPersonalizationSampleDate;
    ? frameworkEvaluationDate;
    ? modelStore;
    ? personalizationResults;
    ? newModelEvaluationResults;
    ? historicalModelEvaluationResults;
    ? defaultModelEvaluationSummary;
    ? frameworkExecutionMetadata;
    ? frameworkExecutionSelectedModelURL;
    ? metadataStore;
    ? modelEvaluationSummaryStore;
    ? allUserDataDictionaryAdapted;
    ? allUserDataDictionaryDefault;
    ? boundaryList;
    ? allEvaluationResults;
    ? generatedLatestBoundary;
    ? skipAdaptation;
    ? personalizationResult;
    ? personalizedModelPath;
    ? resultMetadataDictionary;
}




-(BOOL)generatePETReportAndReturnError:(*id)arg0 ;
-(id)evaluateDefaultModelWithDefaultModelPath:(id)arg0 modelConfiguration:(id)arg1 error:(*id)arg2 ;
-(id)getEvaluationResults;
-(id)getSelectedModelAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 dataProviderInstance:(id)arg1 evaluationInstance:(id)arg2 personalizationInstance:(id)arg3 pruningPolicy:(id)arg4 error:(*id)arg5 ;
-(id)trainAndEvaluateAdaptedModelsWithAdaptableModelPath:(id)arg0 modelConfiguration:(id)arg1 error:(*id)arg2 ;
-(id)trainAndEvaluateModelsWithCandidateModels:(id)arg0 personalizationPolicy:(id)arg1 modelSelectionPolicy:(id)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif