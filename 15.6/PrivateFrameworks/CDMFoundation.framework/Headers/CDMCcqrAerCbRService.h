// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMCCQRAERCBRSERVICE_H
#define CDMCCQRAERCBRSERVICE_H

@class QueryRewriter;


#import "CDMDAGBaseService.h"
#import "_TtC13CDMFoundation27CDMCcqrAerCbROverridesProxy.h"

@interface CDMCcqrAerCbRService : CDMDAGBaseService {
    _TtC13CDMFoundation27CDMCcqrAerCbROverridesProxy *_overrideProxy;
    BOOL _useMemoryForOverrideStore;
}


@property (retain, nonatomic) QueryRewriter *ccqrPredictor; // ivar: _ccqrPredictor
@property (readonly, nonatomic) int modelType; // ivar: _modelType


+(BOOL)suppressCcqrUsingCurContext:(id)arg0 ;
+(id)assetFolderNames;
+(id)trialFactorName;
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
-(void)debugCcqrResponse:(id)arg0 ;


@end


#endif