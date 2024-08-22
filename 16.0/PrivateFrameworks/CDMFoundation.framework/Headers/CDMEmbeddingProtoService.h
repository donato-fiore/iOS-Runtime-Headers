// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMEMBEDDINGPROTOSERVICE_H
#define CDMEMBEDDINGPROTOSERVICE_H

@class SNLPEmbedder;


#import "CDMDAGBaseService.h"

@interface CDMEmbeddingProtoService : CDMDAGBaseService {
    SNLPEmbedder *_snlpEmbedder;
}




+(id)assetFolderNames;
+(id)trialFactorName;
-(BOOL)hasEmbedderOrchestrator;
-(NSInteger)getServiceState;
-(id)createEmbedderOrchestrator:(id)arg0 embedding_bert_path:(id)arg1 embedding_config_path:(id)arg2 reformulation_path:(id)arg3 ;
-(id)doEmbedding:(id)arg0 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif