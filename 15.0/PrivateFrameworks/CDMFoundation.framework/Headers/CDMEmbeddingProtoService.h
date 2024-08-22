// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMEMBEDDINGPROTOSERVICE_H
#define CDMEMBEDDINGPROTOSERVICE_H



#import "CDMDAGBaseService.h"

@interface CDMEmbeddingProtoService : CDMDAGBaseService {
    unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> _embedderOrchestrator;
}




+(id)assetFolderName;
+(id)trialFactorName;
-(BOOL)hasEmbedderOrchestrator;
-(NSInteger)getServiceState;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;
-(struct EmbedderResponse )doEmbedding:(struct EmbedderRequest )arg0 ;
-(struct unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> )createEmbedderOrchestrator:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 embedding_bert_path:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg1 embedding_config_path:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg2 reformulation_path:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg3 ;


@end


#endif