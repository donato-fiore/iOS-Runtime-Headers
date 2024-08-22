// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRINAMESPACEFACTORPROVIDERCHAIN_H
#define TRINAMESPACEFACTORPROVIDERCHAIN_H

@class NSString, NSArray, NSDictionary;
@protocol TRINamespaceFactorProviding;

#import <Foundation/Foundation.h>


@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding>

 {
    NSString *_namespaceName;
    NSArray *_providerChain;
    id<TRINamespaceFactorProviding> *_installedProvider;
    id<TRINamespaceFactorProviding> *_rolloutProvider;
    id<TRINamespaceFactorProviding> *_experimentProvider;
    NSDictionary *_aliasMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)factorProviderWithPaths:(id)arg0 namespaceName:(id)arg1 ;
+(id)factorProviderWithPaths:(id)arg0 namespaceName:(id)arg1 excludingTreatmentLayers:(NSUInteger)arg2 ;
+(id)factorProviderWithPaths:(id)arg0 namespaceName:(id)arg1 resolver:(id)arg2 ;
-(BOOL)hasAnyTreatmentInLayers:(NSUInteger)arg0 ;
-(BOOL)isRegistered;
-(id)_dealiasedFactorLevelForFactorLevel:(id)arg0 unaliasedName:(id)arg1 ;
-(id)experimentId;
-(id)factorLevels;
-(id)factorNamesWithObfuscation:(id)arg0 ;
-(id)initWithNamespaceName:(id)arg0 typedProviderChain:(id)arg1 paths:(id)arg2 ;
-(id)initWithNamespaceName:(id)arg0 typedProviderChain:(id)arg1 paths:(id)arg2 excludingTreatmentLayers:(NSUInteger)arg3 ;
-(id)levelForFactor:(id)arg0 ;
-(id)levelForFactor:(id)arg0 outProvider:(*id)arg1 ;
-(id)namespaceName;
-(id)promotableFactorPackId;
-(id)providerForTreatmentLayer:(NSUInteger)arg0 ;
-(id)rolloutId;
-(id)treatmentId;
-(int)deploymentId;
-(unsigned int)namespaceCompatibilityVersion;
-(unsigned int)namespaceId;
-(void)computeTreatmentAssetIndexes:(*id)arg0 withAssociatedExperimentIds:(*id)arg1 andFactorPackAssetIds:(*id)arg2 withAssociatedRolloutDeployments:(*id)arg3 withExperimentFactorNames:(*id)arg4 andRolloutFactorNames:(*id)arg5 forFactors:(id)arg6 usingFilter:(id)arg7 ;
-(void)dispose;


@end


#endif