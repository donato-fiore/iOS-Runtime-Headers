// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNLPEMBEDDER_H
#define SNLPEMBEDDER_H


#import <Foundation/Foundation.h>


@interface SNLPEmbedder : NSObject {
    unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> _cppOrchestrator;
}




-(id)getEmbeddings:(id)arg0 ;
-(id)getEmbeddingsBySentence:(id)arg0 ;
-(id)initFromSourceVocabPath:(id)arg0 bertModelPath:(id)arg1 bertConfigPath:(id)arg2 reformulatorPath:(id)arg3 ;
-(void)warmup;


@end


#endif