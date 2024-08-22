// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMLVCSERVICE_H
#define CDMLVCSERVICE_H

@class SNLPLanguageVariantClassifier;


#import "CDMDAGBaseService.h"
#import "SiriNLUOverrideProxy.h"

@interface CDMLVCService : CDMDAGBaseService {
    SNLPLanguageVariantClassifier *_lvcOrchestrator;
    SiriNLUOverrideProxy *_overrideProxy;
}




+(BOOL)deviceSupportsLVC;
+(BOOL)isAssetRequired;
+(BOOL)isEnabled;
+(id)assetsPathURLForModelBundle:(id)arg0 ;
+(id)buildMultiLingualVariant:(id)arg0 ;
+(id)getAssetFolderNamesByTrialFactorNames;
-(BOOL)initializeLVCOverrides:(id)arg0 ;
-(id)doInference:(id)arg0 error:(*id)arg1 ;
-(id)getSNLPLanguageVariantClassifierPath:(id)arg0 error:(*id)arg1 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;
-(void)_prewarmModelWithEmbeddingConfigItem:(id)arg0 ;


@end


#endif