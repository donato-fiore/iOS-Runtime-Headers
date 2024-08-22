// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNLPNATURALLANGUAGEPARSER_H
#define SNLPNATURALLANGUAGEPARSER_H


#import <Foundation/Foundation.h>


@interface SNLPNaturalLanguageParser : NSObject {
    unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> _cppOrchestrator;
}




+(id)parserFromAssetDirectory:(id)arg0 error:(*id)arg1 ;
-(id)_initWithCppOrchestrator:(struct unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> )arg0 ;
-(id)inferenceResponseForRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif