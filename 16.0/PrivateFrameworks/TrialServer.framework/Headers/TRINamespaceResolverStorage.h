// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRINAMESPACERESOLVERSTORAGE_H
#define TRINAMESPACERESOLVERSTORAGE_H

@protocol TRIPaths;

#import <Foundation/Foundation.h>


@interface TRINamespaceResolverStorage : NSObject {
    id<TRIPaths> *_paths;
}




-(BOOL)_overwriteActiveFactorProvidersWithNamespaceMap:(id)arg0 rolloutDeploymentMap:(id)arg1 ;
-(BOOL)_removeUnreferencedDeploymentsWithRefStore:(id)arg0 parentDir:(id)arg1 removedCount:(*unsigned int)arg2 ;
-(BOOL)_removeUnreferencedDeploymentsWithRefStore:(id)arg0 topLevelDir:(id)arg1 removedCount:(*unsigned int)arg2 ;
-(BOOL)_setProvisionalFactorpackMetadata:(id)arg0 forNamespaceName:(id)arg1 error:(*id)arg2 ;
-(BOOL)_writeRampId:(id)arg0 parentDir:(id)arg1 ;
-(BOOL)overwriteActiveFactorProvidersUsingTransaction:(id)arg0 fromDatabase:(id)arg1 ;
-(BOOL)promoteFactorPackId:(id)arg0 forNamespaceName:(id)arg1 rolloutDeployment:(id)arg2 withServerContext:(id)arg3 error:(*id)arg4 ;
-(BOOL)rejectFactorPackId:(id)arg0 forNamespaceName:(id)arg1 rolloutDeployment:(id)arg2 withServerContext:(id)arg3 error:(*id)arg4 ;
-(BOOL)removeUnneededPromotionsWithRemovedCount:(*unsigned int)arg0 removeAll:(BOOL)arg1 ;
-(BOOL)removeUnreferencedExperimentDeploymentsWithServerContext:(id)arg0 removedCount:(*unsigned int)arg1 ;
-(BOOL)removeUnreferencedRolloutDeploymentsWithServerContext:(id)arg0 removedCount:(*unsigned int)arg1 ;
-(BOOL)rewriteExperimentDeployment:(id)arg0 targetedTreatmentId:(id)arg1 ;
-(BOOL)rewriteRolloutDeployment:(id)arg0 rampId:(id)arg1 targetedFactorPackSetId:(id)arg2 ;
-(BOOL)setProvisionalFactorPackId:(id)arg0 forNamespaceName:(id)arg1 error:(*id)arg2 ;
-(id)_getProvisionalFactorpackMetadataForNamespaceName:(id)arg0 mustExist:(BOOL)arg1 error:(*id)arg2 ;
-(id)_pathForExperimentDeployment:(id)arg0 ;
-(id)_pathForRolloutDeployment:(id)arg0 ;
-(id)init;
-(id)initWithPaths:(id)arg0 ;
-(id)parentDirForExperimentDeployments;
-(id)parentDirForRolloutDeployments;
-(id)pathForExperimentDeployment:(id)arg0 ;
-(id)pathForRolloutDeployment:(id)arg0 ;
-(id)pathForTargetedFactorPackSetWithDeployment:(id)arg0 ;
-(void)_logPromotionMetric:(id)arg0 forFactorPackId:(id)arg1 namespaceName:(id)arg2 rolloutDeployment:(id)arg3 withServerContext:(id)arg4 ;


@end


#endif