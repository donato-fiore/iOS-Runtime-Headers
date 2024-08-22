// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIXPCNAMESPACEMANAGEMENTCLIENT_H
#define TRIXPCNAMESPACEMANAGEMENTCLIENT_H

@class _PASXPCClientHelper;
@protocol TRINamespaceManagementProtocol;

#import <Foundation/Foundation.h>


@interface TRIXPCNamespaceManagementClient : NSObject <TRINamespaceManagementProtocol>

 {
    _PASXPCClientHelper *_helper;
    _PASXPCClientHelper *_internalHelper;
}




-(BOOL)deregisterNamespaceWithNamespaceName:(id)arg0 error:(*id)arg1 ;
-(BOOL)immediateDownloadForNamespaceNames:(id)arg0 allowExpensiveNetworking:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)promoteFactorPackId:(id)arg0 forNamespaceName:(id)arg1 rolloutDeployment:(id)arg2 error:(*id)arg3 ;
-(BOOL)registerNamespaceWithNamespaceName:(id)arg0 compatibilityVersion:(unsigned int)arg1 defaultsFileURL:(id)arg2 applicationGroup:(id)arg3 cloudKitContainerId:(int)arg4 error:(*id)arg5 ;
-(BOOL)rejectFactorPackId:(id)arg0 forNamespaceName:(id)arg1 rolloutDeployment:(id)arg2 error:(*id)arg3 ;
-(BOOL)removeLevelsForFactors:(id)arg0 withNamespace:(id)arg1 error:(*id)arg2 ;
-(BOOL)setProvisionalFactorPackId:(id)arg0 forNamespaceName:(id)arg1 error:(*id)arg2 ;
-(BOOL)setPurgeabilityLevelsForFactors:(id)arg0 forNamespaceName:(id)arg1 error:(*id)arg2 ;
-(BOOL)startNamespaceDownloadWithName:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)statusOfDownloadForFactors:(id)arg0 withNamespace:(id)arg1 notificationKey:(*id)arg2 error:(*id)arg3 ;
-(id)activeRolloutInformation:(*id)arg0 ;
-(id)init;
-(id)loadNamespaceMetadataForNamespaceName:(id)arg0 error:(*id)arg1 ;
-(id)startDownloadLevelsForFactors:(id)arg0 withNamespace:(id)arg1 options:(id)arg2 error:(*id)arg3 ;


@end


#endif