// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNLPSERVERNLCLASSIFIER_H
#define SNLPSERVERNLCLASSIFIER_H


#import <Foundation/Foundation.h>


@interface SNLPServerNLClassifier : NSObject {
    unique_ptr<snlc_inference_orchestrator::orchestration::SNLCOrchestrator, std::default_delete<snlc_inference_orchestrator::orchestration::SNLCOrchestrator>> _snlcOrchestrator;
    unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> _assetLogger;
    BOOL _hasVersionInfo;
}




+(id)_classifierWithModelURL:(id)arg0 configURL:(id)arg1 spanVocabularyURL:(id)arg2 contextVocabularyURL:(id)arg3 versionURL:(id)arg4 error:(*id)arg5 ;
+(id)_classifierWithPathURL:(id)arg0 shouldExpectVersionInfo:(BOOL)arg1 error:(*id)arg2 ;
+(id)_errorForMissingResourceURL:(id)arg0 ;
+(id)_responseForSNLCResponse:(struct SNLCParserResponse )arg0 ;
+(id)classifierWithModelURL:(id)arg0 configURL:(id)arg1 spanVocabularyURL:(id)arg2 contextVocabularyURL:(id)arg3 error:(*id)arg4 ;
+(id)classifierWithPathURL:(id)arg0 error:(*id)arg1 ;
+(struct unique_ptr<const sirinluinternalsnlc::SNLCParserRequest, std::default_delete<const sirinluinternalsnlc::SNLCParserRequest>> )_convertRequest:(id)arg0 ;
-(BOOL)_hasVersionInfo;
-(id)_initWithModelURL:(id)arg0 configURL:(id)arg1 spanVocabularyURL:(id)arg2 contextVocabularyURL:(id)arg3 versionURL:(id)arg4 error:(*id)arg5 ;
-(id)inferenceResponseForRequest:(id)arg0 ;
-(id)inferenceResponseForRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif