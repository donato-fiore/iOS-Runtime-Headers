// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODCURAREEVALUATIONANDREPORTINGMODULE_H
#define ODCURAREEVALUATIONANDREPORTINGMODULE_H


#import <Foundation/Foundation.h>

#import "ODCurareEvaluationAndReportingModuleInternal.h"

@interface ODCurareEvaluationAndReportingModule : NSObject

@property (readonly) ODCurareEvaluationAndReportingModuleInternal *underlyingObject; // ivar: _underlyingObject


-(BOOL)evaluateDefaultModelWithDefaultModelPath:(id)arg0 modelConfiguration:(id)arg1 error:(*id)arg2 ;
-(BOOL)trainAndEvaluateAdaptedModelsWithAdaptableModelPath:(id)arg0 modelConfiguration:(id)arg1 error:(*id)arg2 ;
-(BOOL)trainAndEvaluateModelsWithCandidateModels:(id)arg0 personalizationPolicy:(id)arg1 selectionPolicy:(id)arg2 error:(*id)arg3 ;
-(id)getEvaluationResults;
-(id)getSelectedModel:(*id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 dataProviderInstance:(id)arg1 evaluationInstance:(id)arg2 personalizationInstance:(id)arg3 pruningPolicy:(id)arg4 error:(*id)arg5 ;


@end


#endif