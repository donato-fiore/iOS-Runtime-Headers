// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMSNLCPROTOSERVICE_H
#define CDMSNLCPROTOSERVICE_H

@class SNLPServerNLClassifier;


#import "CDMDAGBaseService.h"

@interface CDMSNLCProtoService : CDMDAGBaseService {
    SNLPServerNLClassifier *_snlcOrchestrator;
}




+(id)_stockServerResponse;
+(id)assetFolderNames;
+(id)getParserEnum;
+(id)trialFactorName;
-(id)assetsPathURLForModelBundle:(id)arg0 ;
-(id)doInference:(id)arg0 ;
-(id)getSNLPServerNLClassifierPath:(id)arg0 error:(*id)arg1 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif