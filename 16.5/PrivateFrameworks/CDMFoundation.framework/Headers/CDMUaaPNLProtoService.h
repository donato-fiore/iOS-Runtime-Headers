// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMUAAPNLPROTOSERVICE_H
#define CDMUAAPNLPROTOSERVICE_H

@class UPModelBundle, NSSet;


#import "CDMDAGBaseService.h"
#import "_TtC13CDMFoundation23CDMUaaPNLOverridesProxy.h"

@interface CDMUaaPNLProtoService : CDMDAGBaseService {
    UPModelBundle *__coreModelBundle;
    NSSet *__appModelBundles;
    _TtC13CDMFoundation23CDMUaaPNLOverridesProxy *__overridesProxy;
    BOOL __useMemoryForOverrideStore;
}




+(BOOL)isAssetRequired;
+(BOOL)isEnabled;
+(id)createErrorResponse:(id)arg0 ;
+(id)detectForegroundAppForLocale:(id)arg0 ;
+(id)getAssetFolderNamesByTrialFactorNames;
+(id)loadAppModelBundles:(id)arg0 ;
+(id)loadModelBundle:(id)arg0 error:(*id)arg1 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)match:(id)arg0 requestId:(id)arg1 ;
-(id)setup:(id)arg0 ;
-(int)getOverrideNamespace;
-(void)addOverride:(id)arg0 ;
-(void)cleanOverride;
-(void)loadOverrides:(id)arg0 ;


@end


#endif