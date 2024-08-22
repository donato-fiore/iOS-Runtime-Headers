// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REELEMENTRELEVANCEENGINE_H
#define REELEMENTRELEVANCEENGINE_H

@class NSMutableSet, NSMutableDictionary, NSMapTable, NSString, NSArray, NSDictionary;
@protocol RESectionDelegate, RERelevanceProviderEnvironmentDelegate, REMLModelManagerObserver, REPredictorObserver, REElementRelevanceEngineProperties, REFeatureTransformerInvalidationDelegate, REMLModelManagerDataStore, OS_dispatch_queue, REElementRelevanceEngineDelegate;


#import "RERelevanceEngineSubsystem.h"
#import "REKeyMultiValueMap.h"
#import "REFeatureSet.h"
#import "REPredictorManager.h"
#import "RERelevanceProviderEnvironment.h"
#import "REDataSourceManager.h"
#import "REFeatureTransmuter.h"
#import "REUpNextScheduler.h"

@interface REElementRelevanceEngine : RERelevanceEngineSubsystem <RESectionDelegate, RERelevanceProviderEnvironmentDelegate, REMLModelManagerObserver, REPredictorObserver, REElementRelevanceEngineProperties, REFeatureTransformerInvalidationDelegate, REMLModelManagerDataStore>

 {
    NSMutableSet *_elementsNeedingRelevanceUpdate;
    NSMutableDictionary *_sections;
    NSMutableDictionary *_predictedElements;
    NSMapTable *_relevanceProviderElementMap;
    REKeyMultiValueMap *_identifierElementIdentifierMap;
    REFeatureSet *_persistenceFeatures;
    REPredictorManager *_predictorManager;
    RERelevanceProviderEnvironment *_providerEnvironment;
    REDataSourceManager *_dataSourceManager;
    REFeatureTransmuter *_featureTransmuter;
    REUpNextScheduler *_scheduler;
    REUpNextScheduler *_predictorUpdatedScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _deviceIsLocked;
    BOOL _ignoreDeviceLockState;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<REElementRelevanceEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) REPredictorManager *predictorManager;
@property (readonly, nonatomic) RERelevanceProviderEnvironment *providerEnvironment;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSDictionary *sectionsMap;
@property (readonly) Class superclass;


-(BOOL)_elementIsFullyLoaded:(id)arg0 ;
-(BOOL)modelManager:(id)arg0 loadDataStoreFromURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)modelManager:(id)arg0 saveDataStoreToURL:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)numberOfElementsInSection:(id)arg0 ;
-(id)_allCurrentElements;
-(id)_elementIdentifierForIdentifier:(id)arg0 ;
-(id)_generateFeatureMapForElement:(id)arg0 ;
-(id)_identifierForElementIdentifier:(id)arg0 ;
-(id)_queue_featureMapForElement:(id)arg0 trainingContext:(id)arg1 ;
-(id)_queue_featureMapForElementWithId:(id)arg0 trainingContext:(id)arg1 ;
-(id)dataStoreKey;
-(id)elementAtPath:(id)arg0 ;
-(id)elementRankerForSection:(id)arg0 ;
-(id)featureMapForElement:(id)arg0 trainingContext:(id)arg1 ;
-(id)featureMapForPredictedElement:(id)arg0 trainingContext:(id)arg1 ;
-(id)featureProviderForElement:(id)arg0 ;
-(id)initWithRelevanceEngine:(id)arg0 ;
-(id)pathForElement:(id)arg0 ;
-(id)predictionForElement:(id)arg0 ;
-(id)relevanceProviderEnvironment;
-(id)section:(id)arg0 groupForIdentifier:(id)arg1 ;
-(id)sectionForElement:(id)arg0 ;
-(void)_checkPreferences;
-(void)_enumerateAndGenerateSectionComparators:(id)arg0 ;
-(void)_onqueue_async:(id)arg0 ;
-(void)_performUpdatesToDelegate:(id)arg0 ;
-(void)_queue_scheduleRelevanceUpdateForElement:(id)arg0 ;
-(void)_queue_updateElementRelevance;
-(void)_updateStateBasedOnPredictor;
-(void)addElement:(id)arg0 section:(id)arg1 ;
-(void)dealloc;
-(void)featureTransformerDidInvalidate:(id)arg0 ;
-(void)modelManagerDidUpdateModel:(id)arg0 ;
-(void)pause;
-(void)predictor:(id)arg0 didBeginActivity:(id)arg1 ;
-(void)predictor:(id)arg0 didFinishActivity:(id)arg1 ;
-(void)predictorDidUpdate:(id)arg0 ;
-(void)refreshContent;
-(void)relevanceEnvironment:(id)arg0 didUpdateRelevanceProvider:(id)arg1 ;
-(void)reloadElement:(id)arg0 withElement:(id)arg1 ;
-(void)removeElement:(id)arg0 ;
-(void)resume;
-(void)sectionDidUpdateContentOrder:(id)arg0 ;


@end


#endif