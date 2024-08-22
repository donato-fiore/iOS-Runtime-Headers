// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRINAMESPACERESOLVER_H
#define TRINAMESPACERESOLVER_H

@class _PASLock, NSString, NSSet;
@protocol TRINamespaceResolving, TRIPaths;

#import <Foundation/Foundation.h>

#import "TRIExperimentDeployment.h"
#import "TRIRolloutDeployment.h"

@interface TRINamespaceResolver : NSObject <TRINamespaceResolving>

 {
    id<TRIPaths> *_paths;
    _PASLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeploymentForFactorsState; // ivar: _experimentDeploymentForFactorsState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *namespacesInFactorsState; // ivar: _namespacesInFactorsState
@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeploymentForFactorsState; // ivar: _rolloutDeploymentForFactorsState
@property (readonly) Class superclass;


+(id)_namespacePathComponentsFromEntitlements;
+(id)preferredPathForFactorDataWithCandidatePaths:(id)arg0 ;
+(id)promotionDirForNamespaceName:(id)arg0 withPaths:(id)arg1 ;
-(BOOL)_hasExperimentFactorsState;
-(BOOL)_hasRolloutFactorsState;
-(BOOL)_prepareFactorsState:(id)arg0 ;
-(id)_factorProviderForNamespaceName:(id)arg0 fromNamespaceDescriptorSetWithDir:(id)arg1 resolvedPath:(*id)arg2 ;
-(id)_factorProviderForNamespaceName:(id)arg0 parentId:(id)arg1 deploymentId:(int)arg2 fromFactorPackSetWithDir:(id)arg3 resolvedPath:(*id)arg4 ;
-(id)_getFactorPackPathForNamespaceName:(id)arg0 withCandidatePath:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 promotable:(*BOOL)arg4 ;
-(id)_resolvePropertyListFactorProviderChainForNamespaceName:(id)arg0 ;
-(id)_resolveTargetedFactorPackSetForRolloutDeployment:(id)arg0 ;
-(id)_resolveTargetedNamespaceDescriptorSetForExperimentDeployment:(id)arg0 ;
-(id)_resolverPropertyListWithResolvedPath:(*id)arg0 ;
-(id)init;
-(id)initWithPaths:(id)arg0 ;
-(id)initWithPaths:(id)arg0 factorsState:(id)arg1 ;
-(id)resolveFactorProviderChainForNamespaceName:(id)arg0 faultOnMissingInstalledFactors:(BOOL)arg1 installedFactorsAccessible:(*BOOL)arg2 ;
-(void)_faultOnceWithMessage:(id)arg0 ;
-(void)dealloc;
-(void)dispose;


@end


#endif