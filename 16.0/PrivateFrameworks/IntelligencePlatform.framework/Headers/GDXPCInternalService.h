// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDXPCINTERNALSERVICE_H
#define GDXPCINTERNALSERVICE_H

@class NSXPCConnection, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface GDXPCInternalService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}




-(BOOL)behaviorUnderstandingClearAllDataWithShouldClearFeaturizer:(BOOL)arg0 shouldClearSampleGenerator:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)behaviorUnderstandingDigestWithShouldDigestFeaturizer:(BOOL)arg0 shouldDigestSampleGenerator:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)benchmarkWithError:(*id)arg0 ;
-(BOOL)clearPipelineStatusWithError:(*id)arg0 ;
-(BOOL)runDeltaUpdatePipelineWithError:(*id)arg0 ;
-(BOOL)runToMatchingPipelineWithError:(*id)arg0 ;
-(BOOL)stopPipelineWithError:(*id)arg0 ;
-(BOOL)viewClearAllDataWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)viewMarkNeedsUpdateWithSchedule:(id)arg0 error:(*id)arg1 ;
-(BOOL)viewRunUpdateWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)viewSetEnabledWithName:(id)arg0 enabled:(id)arg1 error:(*id)arg2 ;
-(BOOL)viewValidateWithError:(*id)arg0 ;
-(id)behaviorUnderstandingFeaturizeBehaviorOfType:(id)arg0 identifier:(id)arg1 usingContextAt:(id)arg2 error:(*id)arg3 ;
-(id)behaviorUnderstandingFeaturizedBehaviorsForFeatureName:(id)arg0 behaviorType:(id)arg1 error:(*id)arg2 ;
-(id)behaviorUnderstandingHistogramsOfKind:(id)arg0 behaviorType:(id)arg1 error:(*id)arg2 ;
-(id)behaviorUnderstandingRecentBehaviorsOfType:(id)arg0 error:(*id)arg1 ;
-(id)behaviorUnderstandingStatusWithError:(*id)arg0 ;
-(id)init;
-(id)resolveEntityWithRequest:(id)arg0 enableSessionLogging:(BOOL)arg1 configName:(id)arg2 encodedConfig:(id)arg3 withError:(*id)arg4 ;
-(id)statsWithError:(*id)arg0 ;
-(id)statusWithError:(*id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)triplesQueryWithQuery:(id)arg0 ;
-(id)validateGraph:(*id)arg0 ;
-(id)vectorSearchBenchmarkWithConfigFilePath:(id)arg0 error:(*id)arg1 ;
-(id)viewInfoWithError:(*id)arg0 ;
-(void)locked_establishConnection;


@end


#endif