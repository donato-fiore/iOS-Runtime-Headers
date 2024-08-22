// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNLPNATURALLANGUAGEPARSER_H
#define SNLPNATURALLANGUAGEPARSER_H


#import <Foundation/Foundation.h>


@interface SNLPNaturalLanguageParser : NSObject {
    unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> _cppOrchestrator;
}




+(id)parserFromAssetDirectory:(id)arg0 error:(*id)arg1 ;
+(id)parserFromSpansVocab:(id)arg0 targetVocab:(id)arg1 contextVocab:(id)arg2 parserEncoder:(id)arg3 parserDecoder:(id)arg4 config:(id)arg5 error:(*id)arg6 ;
-(id)_initWithCppOrchestrator:(struct unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> )arg0 ;
-(id)inferenceResponseForRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif