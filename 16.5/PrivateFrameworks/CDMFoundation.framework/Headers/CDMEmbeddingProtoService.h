// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMEMBEDDINGPROTOSERVICE_H
#define CDMEMBEDDINGPROTOSERVICE_H

@class NSMutableArray;


#import "CDMDAGBaseService.h"
#import "CDMEmbeddingConfigs.h"

@interface CDMEmbeddingProtoService : CDMDAGBaseService {
    NSMutableArray *_embedders;
    CDMEmbeddingConfigs *_embeddingConfigs;
}




+(BOOL)isSiriInputRepresentationModel:(id)arg0 ;
+(id)getAssetFolderNamesByTrialFactorNames;
-(BOOL)hasEmbedderOrchestrator;
-(NSInteger)getServiceState;
-(id)assetsPathURLForModelBundle:(id)arg0 ;
-(id)createEmbedderOrchestrator:(id)arg0 ;
-(id)createEmbedderOrchestrator:(id)arg0 embedding_bert_path:(id)arg1 embedding_config_path:(id)arg2 reformulation_path:(id)arg3 ;
-(id)createEmbeddingProtoServiceErrorWithCode:(NSInteger)arg0 description:(id)arg1 ;
-(id)createEmbeddingsBundleMissingPathResponse;
-(id)createEmptyEmbeddingsBundleResponse:(id)arg0 ;
-(id)createNoStableEmbeddingsModelFoundResponse;
-(id)createNotReadyForHandleProtoResponse;
-(id)createOrchestratorConstructFailureResponse;
-(id)doEmbedding:(id)arg0 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)legacyEmbeddingPaths:(id)arg0 ;
-(id)setup:(id)arg0 ;
-(void)setEmbedders:(id)arg0 ;


@end


#endif