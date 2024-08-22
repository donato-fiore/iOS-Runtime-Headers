// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODCURAREINTERFACEMODULEINTERNAL_H
#define ODCURAREINTERFACEMODULEINTERNAL_H


#import <Foundation/Foundation.h>


@interface ODCurareInterfaceModuleInternal : NSObject {
    ? evaluationInstance;
    ? personalizationInstance;
    ? pruningPolicy;
    ? clientBundleIdentifier;
    ? temporaryDirectory;
    ? shouldReportFailure;
    ? frameworkExecutionDate;
    ? frameworkPersonalizationDate;
    ? lastPersonalizationSampleDate;
    ? frameworkEvaluationDate;
    ? personalizationModelEvaluationResults;
    ? historicalModelEvaluationResults;
    ? defaultModelEvaluationSummary;
    ? frameworkExecutionMetadata;
    ? frameworkExecutionSelectedModelURL;
    ? modelStore;
    ? metadataStore;
    ? modelEvaluationSummaryStore;
}




-(BOOL)generateCAReportAndReturnError:(*id)arg0 ;
-(id)evaluateModelsWithEvaluationModels:(id)arg0 error:(*id)arg1 ;
-(id)getSelectedModelWithDefaultModel:(id)arg0 selectionPolicy:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 evaluationInstance:(id)arg1 personalizationInstance:(id)arg2 pruningPolicy:(id)arg3 error:(*id)arg4 ;
-(id)personalizeModelsWithPersonalizableModels:(id)arg0 personalizationPolicy:(id)arg1 error:(*id)arg2 ;


@end


#endif