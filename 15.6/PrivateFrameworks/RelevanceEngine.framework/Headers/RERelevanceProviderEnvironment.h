// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RERELEVANCEPROVIDERENVIRONMENT_H
#define RERELEVANCEPROVIDERENVIRONMENT_H

@class NSMutableArray, NSMapTable, NSHashTable, NSLock, NSMutableSet, NSDictionary;
@protocol RERelevanceProviderEnvironmentProperties, REElementRelevanceProviderGenerator, RERelevanceProviderEnvironmentDelegate;


#import "RERelevanceEngineSubsystem.h"
#import "REUpNextDisjointSet.h"
#import "REDependencyGraph.h"
#import "REFeatureSet.h"
#import "REUpNextScheduler.h"

@interface RERelevanceProviderEnvironment : RERelevanceEngineSubsystem <RERelevanceProviderEnvironmentProperties, REElementRelevanceProviderGenerator>

 {
    NSMutableArray *_relevanceManagers;
    NSMapTable *_relevanceClassManagerMap;
    NSMapTable *_relevanceHistogramMap;
    REUpNextDisjointSet *_relevanceProviderSet;
    REDependencyGraph *_dependencyGraph;
    NSMapTable *_relevanceValues;
    NSHashTable *_customProviders;
    NSLock *_relevanceValuesLock;
    REFeatureSet *_supportedFeatures;
    REUpNextScheduler *_scheduler;
    NSHashTable *_providersToUpdate;
    NSMutableSet *_providerManagersToUpdate;
    NSMutableArray *_updateCompletionBlocks;
}


@property (readonly, nonatomic) NSDictionary *allProviderValues;
@property (nonatomic) BOOL allowsLocationUse; // ivar: _allowsLocationUse
@property (weak, nonatomic) NSObject<RERelevanceProviderEnvironmentDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger relevanceProviderCount;
@property (readonly, nonatomic) REFeatureSet *supportedFeatures;


-(BOOL)containsRelevanceProvider:(id)arg0 ;
-(BOOL)isRelevanceProviderHistoric:(id)arg0 ;
-(BOOL)isRelevanceProviderLoaded:(id)arg0 ;
-(BOOL)isSupportedRelevanceProvider:(id)arg0 ;
-(id)_histogramForFeature:(id)arg0 ;
-(id)_histogramForProvider:(id)arg0 ;
-(id)_providerManagerForProvider:(id)arg0 ;
-(id)_relevaneProviderWithType:(id)arg0 withOptions:(id)arg1 ;
-(id)createRelevaneProviderWithType:(id)arg0 withOptions:(id)arg1 ;
-(id)currentRelevanceProvidersState;
-(id)encodeRelevaneProvider:(id)arg0 ;
-(id)featuresForRelevanceProvider:(id)arg0 ;
-(id)initWithRelevanceEngine:(id)arg0 ;
-(id)relevancesForRelevanceProvider:(id)arg0 ;
-(id)relevancesForRelevanceProvider:(id)arg0 usingContext:(id)arg1 ;
-(void)_addRelevanceValue:(id)arg0 forProvider:(id)arg1 ;
-(void)_queue_performUpdate:(id)arg0 ;
-(void)_removeRelevanceValueForProvider:(id)arg0 ;
-(void)_scaleRelevanceProviderValues:(id)arg0 values:(id)arg1 ;
-(void)_setupRelevanceProviderManagers;
-(void)accessHistogramForFeature:(id)arg0 usingBlock:(id)arg1 ;
-(void)addRelevanceProvider:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)immediateUpdateForRelevanceProviderManager:(id)arg0 completion:(id)arg1 ;
-(void)pause;
-(void)relateRelevanceProvider:(id)arg0 toRelevanceProvider:(id)arg1 ;
-(void)removeRelevanceProvider:(id)arg0 completion:(id)arg1 ;
-(void)resume;
-(void)scheduleUpdateForRelevanceProvider:(id)arg0 completion:(id)arg1 ;
-(void)scheduleUpdateForRelevanceProviderManager:(id)arg0 completion:(id)arg1 ;


@end


#endif