// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSSUSERVICE_H
#define CDMSSUSERVICE_H

@class SNLPSSUMatcher;


#import "CDMDAGBaseService.h"
#import "SSUSystemState.h"

@interface CDMSSUService : CDMDAGBaseService {
    SSUSystemState *__systemState;
    SNLPSSUMatcher *__matcher;
}




+(BOOL)isAssetRequired;
+(BOOL)isEnabled;
+(id)acquireOrBuildMatcher:(id)arg0 systemState:(id)arg1 initializeModelsPreemptively:(BOOL)arg2 error:(*id)arg3 ;
+(id)assetDirectoryURLForServiceAssetBundle:(id)arg0 ;
+(id)buildSystemStateForLocale:(id)arg0 ;
+(id)getAssetFolderNamesByTrialFactorNames;
+(id)getAssetsDirectory:(id)arg0 factorName:(id)arg1 error:(*id)arg2 ;
+(id)getXPCEventStreamQueue;
+(void)handleXPCEventApplicationInner:(id)arg0 currentConfig:(id)arg1 block:(id)arg2 ;
+(void)handleXPCEventApplicationRegistered:(id)arg0 currentConfig:(id)arg1 ;
+(void)handleXPCEventApplicationUnregistered:(id)arg0 currentConfig:(id)arg1 ;
-(id)abortHandleWithErrorCode:(NSInteger)arg0 description:(id)arg1 ;
-(id)abortSetupWithErrorDescription:(id)arg0 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;
-(void)forceAppsRescanIfEnabled;
-(void)forceFullCacheUpdateIfEnabled;


@end


#endif