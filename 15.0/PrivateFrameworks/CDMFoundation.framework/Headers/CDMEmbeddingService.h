// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMEMBEDDINGSERVICE_H
#define CDMEMBEDDINGSERVICE_H



#import "CDMDAGBaseService.h"

@interface CDMEmbeddingService : CDMDAGBaseService {
    unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> _embedderOrchestrator;
}




+(id)assetFolderName;
+(id)trialFactorName;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif