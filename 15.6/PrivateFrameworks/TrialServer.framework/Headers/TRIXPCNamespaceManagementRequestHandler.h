// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIXPCNAMESPACEMANAGEMENTREQUESTHANDLER_H
#define TRIXPCNAMESPACEMANAGEMENTREQUESTHANDLER_H

@protocol TRIXPCNamespaceManagementServiceProtocol;

#import <Foundation/Foundation.h>

#import "TRIXPCServerContextPromise.h"

@interface TRIXPCNamespaceManagementRequestHandler : NSObject <TRIXPCNamespaceManagementServiceProtocol>

 {
    TRIXPCServerContextPromise *_serverContextPromise;
    ? _auditToken;
}




+(id)_deploymentsWithUnexpectedExperimentDataInContainer:(id)arg0 dynamicNamespaceName:(id)arg1 serverContext:(id)arg2 ;
+(id)_notificationKeyWithNamespace:(id)arg0 assetIndexesByTreatment:(id)arg1 assetIdsByFactorPack:(id)arg2 ;
+(void)_immediateDownloadForNamespaceNames:(id)arg0 usingEntitlementWitness:(id)arg1 serverContext:(id)arg2 taskQueue:(id)arg3 allowExpensiveNetworking:(BOOL)arg4 taskAttribution:(id)arg5 completion:(id)arg6 ;
+(void)_promoteFactorPackId:(id)arg0 usingEntitlementWitness:(id)arg1 serverContext:(id)arg2 forNamespaceName:(id)arg3 rolloutDeployment:(id)arg4 completion:(id)arg5 ;
+(void)_purgeMismatchedDataForDynamicNamespaceName:(id)arg0 appContainer:(id)arg1 serverContext:(id)arg2 ;
+(void)_rejectFactorPackId:(id)arg0 usingEntitlementWitness:(id)arg1 serverContext:(id)arg2 forNamespaceName:(id)arg3 rolloutDeployment:(id)arg4 completion:(id)arg5 ;
+(void)_removeAssetFactors:(id)arg0 usingEntitlementWitness:(id)arg1 serverContext:(id)arg2 taskQueue:(id)arg3 namespace:(id)arg4 factorsState:(id)arg5 removeImmediately:(BOOL)arg6 completion:(id)arg7 ;
+(void)_reregisterOneShotXPCActivityWithDescriptor:(id)arg0 resumingTaskQueue:(id)arg1 ;
+(void)_resumeTaskQueueForDiscretionaryCellularWithQueue:(id)arg0 ;
+(void)_resumeTaskQueueForDiscretionaryWifiWithQueue:(id)arg0 ;
+(void)_setProvisionalFactorPackId:(id)arg0 usingEntitlementWitness:(id)arg1 serverContext:(id)arg2 forNamespaceName:(id)arg3 completion:(id)arg4 ;
+(void)_startDownloadAssetIndexesByTreatment:(id)arg0 usingEntitlementWitness:(id)arg1 serverContext:(id)arg2 taskQueue:(id)arg3 experimentIds:(id)arg4 assetIdsByFactorPack:(id)arg5 rolloutFactorNames:(id)arg6 rolloutDeployments:(id)arg7 namespace:(id)arg8 taskAttribution:(id)arg9 factorsState:(id)arg10 notificationKey:(id)arg11 ;
+(void)resumeTaskQueue:(id)arg0 forNetworkOptions:(id)arg1 ;
+(void)usingServerContext:(id)arg0 deregisterNamespaceWithName:(id)arg1 teamId:(id)arg2 taskQueue:(id)arg3 completion:(id)arg4 ;
+(void)usingServerContext:(id)arg0 registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(NSInteger)arg6 cloudKitContainerId:(int)arg7 bundleId:(id)arg8 completion:(id)arg9 ;
+(void)usingServerContext:(id)arg0 taskQueue:(id)arg1 startDownloadNamespaceWithName:(id)arg2 attribution:(id)arg3 completion:(id)arg4 ;
-(BOOL)_validateNamespaceName:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateSetPurgeabilityLevelRequestUsingFactorProviderChain:(id)arg0 paths:(id)arg1 purgeabilityLevelsForFactors:(id)arg2 error:(*id)arg3 ;
-(id)_factorProviderChainForNamespace:(id)arg0 paths:(id)arg1 ;
-(id)initWithServerContextPromise:(id)arg0 auditToken:(struct ? )arg1 ;
-(int)_namespacePurgeabilityLevelForNamespaceName:(id)arg0 paths:(id)arg1 ;
-(void)_loadNamespaceMetadataForNamespace:(id)arg0 usingEntitlementWitness:(id)arg1 withPaths:(id)arg2 completion:(id)arg3 ;
-(void)_setPurgeabilityLevelsForFactors:(id)arg0 usingEntitlementWitness:(id)arg1 namespace:(id)arg2 paths:(id)arg3 completion:(id)arg4 ;
-(void)deregisterNamespaceWithNamespaceName:(id)arg0 completion:(id)arg1 ;
-(void)immediateDownloadForNamespaceNames:(id)arg0 allowExpensiveNetworking:(BOOL)arg1 completion:(id)arg2 ;
-(void)loadNamespaceMetadataForNamespaceName:(id)arg0 completion:(id)arg1 ;
-(void)promoteFactorPackId:(id)arg0 forNamespaceName:(id)arg1 rolloutDeployment:(id)arg2 completion:(id)arg3 ;
-(void)registerNamespaceWithNamespaceName:(id)arg0 compatibilityVersion:(unsigned int)arg1 defaultsFileURL:(id)arg2 applicationGroup:(id)arg3 cloudKitContainerId:(int)arg4 completion:(id)arg5 ;
-(void)rejectFactorPackId:(id)arg0 forNamespaceName:(id)arg1 rolloutDeployment:(id)arg2 completion:(id)arg3 ;
-(void)removeLevelsForFactors:(id)arg0 withNamespace:(id)arg1 factorsState:(id)arg2 removeImmediately:(BOOL)arg3 completion:(id)arg4 ;
-(void)runBlockWhenServerAvailable:(id)arg0 ;
-(void)setProvisionalFactorPackId:(id)arg0 forNamespaceName:(id)arg1 completion:(id)arg2 ;
-(void)setPurgeabilityLevelsForFactors:(id)arg0 forNamespaceName:(id)arg1 completion:(id)arg2 ;
-(void)startDownloadLevelsForFactors:(id)arg0 withNamespace:(id)arg1 factorsState:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)startDownloadNamespaceWithName:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)statusOfDownloadForFactors:(id)arg0 withNamespace:(id)arg1 factorsState:(id)arg2 completion:(id)arg3 ;


@end


#endif