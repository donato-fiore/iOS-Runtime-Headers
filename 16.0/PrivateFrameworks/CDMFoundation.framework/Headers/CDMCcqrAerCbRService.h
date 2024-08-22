// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMCCQRAERCBRSERVICE_H
#define CDMCCQRAERCBRSERVICE_H

@class QueryRewriter;


#import "CDMDAGBaseService.h"
#import "_TtC13CDMFoundation27CDMCcqrAerCbROverridesProxy.h"

@interface CDMCcqrAerCbRService : CDMDAGBaseService {
    _TtC13CDMFoundation27CDMCcqrAerCbROverridesProxy *_overrideProxy;
}


@property (retain, nonatomic) QueryRewriter *ccqrPredictor; // ivar: _ccqrPredictor
@property (readonly, nonatomic) int modelType; // ivar: _modelType
@property (nonatomic) BOOL useMemoryForOverrideStore; // ivar: _useMemoryForOverrideStore


+(BOOL)suppressCcqrUsingCurContext:(id)arg0 ;
+(BOOL)suppressCcqrUsingRdResponse:(id)arg0 responseCommand:(id)arg1 ;
+(id)assetFolderNames;
+(id)trialFactorName;
+(void)CcqrAerCbRServiceLogInitIfNeeded;
-(BOOL)isAssetRequired;
-(BOOL)isEnabled;
-(id)doInference:(id)arg0 status:(*id)arg1 ;
-(id)getPredictor:(id)arg0 FilesPath:(id)arg1 modelType:(id)arg2 status:(*id)arg3 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)match:(id)arg0 ;
-(id)setup:(id)arg0 ;
-(void)addOverride:(id)arg0 ;
-(void)cleanOverride;
-(void)configureUseMemoryForOverrideStore;
-(void)debugCcqrResponse:(id)arg0 ;


@end


#endif