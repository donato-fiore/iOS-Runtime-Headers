// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNLPITFMCLASSIFIER_H
#define SNLPITFMCLASSIFIER_H


#import <Foundation/Foundation.h>

#import "SNLPITFMModelBundle.h"
#import "SNLPITFMModelInfo.h"

@interface SNLPITFMClassifier : NSObject {
    unique_ptr<itfm_inference_orchestrator::orchestration::ITFMOrchestrator, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>> _orchestrator;
    unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> _assetLogger;
}


@property (readonly, nonatomic) SNLPITFMModelBundle *modelBundle; // ivar: _modelBundle
@property (readonly, nonatomic) SNLPITFMModelInfo *modelInfo; // ivar: _modelInfo


+(id)_convertResponse:(struct ITFMParserResponse )arg0 ;
+(id)_initializationBlock:(SEL)arg0 ;
+(id)classifierWithModelBundle:(id)arg0 modelInfo:(id)arg1 error:(*id)arg2 ;
// +(id)classifierWithModelBundle:(id)arg0 modelInfo:(id)arg1 initializationBlock:(id)arg2 error:(unk)arg3  ;
+(struct unique_ptr<const sirinluinternalitfm::ITFMParserRequest, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>> )_convertRequest:(id)arg0 ;
// -(id)initWithModelBundle:(id)arg0 modelInfo:(id)arg1 initializationBlock:(id)arg2 error:(unk)arg3  ;
-(id)responseForRequest:(id)arg0 error:(*id)arg1 ;
-(struct unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> )_setupAssetLogger;


@end


#endif