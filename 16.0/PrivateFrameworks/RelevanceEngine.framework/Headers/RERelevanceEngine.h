// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RERELEVANCEENGINE_H
#define RERELEVANCEENGINE_H

@class NSMutableArray, NSString, NSMutableDictionary, NSArray, NSDictionary;
@protocol RERelevanceEngineProperties, REActivityTrackerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "REFeatureSet.h"
#import "RELiveElementCoordinator.h"
#import "REDataSourceManager.h"
#import "REMLModelManager.h"
#import "REFeatureMapGenerator.h"
#import "REFeatureTransmuter.h"
#import "RETrainingManager.h"
#import "REDataSourceCatalog.h"
#import "RERelevanceEnginePreferencesController.h"
#import "REEngineLocationManager.h"
#import "RERelevanceEngineLogger.h"
#import "REActivityTracker.h"
#import "_REEngineDefaults.h"
#import "REUpNextScheduler.h"
#import "RERelevanceEngineConfiguration.h"
#import "RERelevanceEnginePreferences.h"

@interface RERelevanceEngine : NSObject <RERelevanceEngineProperties, REActivityTrackerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableArray *_subsystems;
    REFeatureSet *_rootFeatures;
    REFeatureSet *_mlFeatures;
    NSString *_name;
    RELiveElementCoordinator *_coordinator;
    REDataSourceManager *_dataSourceManager;
    REMLModelManager *_modelManager;
    REFeatureMapGenerator *_inputFeatureMapGenerator;
    REFeatureMapGenerator *_outputFeatureMapGenerator;
    REFeatureTransmuter *_featureTransmuter;
    RETrainingManager *_trainingManager;
    REDataSourceCatalog *_dataSourceCatalog;
    RERelevanceEnginePreferencesController *_preferenceController;
    REEngineLocationManager *_locationManager;
    RERelevanceEngineLogger *_logger;
    REActivityTracker *_activityTracker;
    _REEngineDefaults *_defaults;
    NSMutableDictionary *_addedElementsByIdentifier;
    NSArray *_configurationSectionDescriptors;
    NSArray *_sectionDescriptors;
    NSArray *_historicSectionDescriptors;
    NSDictionary *_inflectionFeatureValues;
    BOOL _running;
    BOOL _updatedLoading;
    BOOL _loading;
    REUpNextScheduler *_loadingScheduler;
    os_unfair_lock_s _activityTrackerLock;
    id *_resumeCompletionBlock;
}


@property (nonatomic) BOOL automaticallyResumeEngine; // ivar: _automaticallyResumeEngine
@property (readonly, nonatomic) RERelevanceEngineConfiguration *configuration;
@property (readonly, nonatomic) RERelevanceEngineConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) RELiveElementCoordinator *coordinator;
@property (readonly, nonatomic) REDataSourceCatalog *dataSourceCatalog;
@property (readonly, nonatomic) REDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _REEngineDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RERelevanceEnginePreferences *effectivePreferences;
@property (readonly, nonatomic) REFeatureTransmuter *featureTransmuter;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *historicSectionDescriptors;
@property (readonly, nonatomic) NSDictionary *inflectionFeatureValues;
@property (readonly, nonatomic) REEngineLocationManager *locationManager;
@property (readonly, nonatomic) RERelevanceEngineLogger *logger;
@property (readonly, nonatomic) REFeatureSet *mlFeatures;
@property (readonly, nonatomic) REMLModelManager *modelManager;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REFeatureSet *rootFeatures;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSArray *sectionDescriptors;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subsystemQueue;
@property (readonly, nonatomic) NSArray *subsystems;
@property (readonly) Class superclass;
@property (readonly, nonatomic) RETrainingManager *trainingManager;
@property (readonly, nonatomic) BOOL wantsImmutableContent;


+(void)prewarmWithConfiguration:(id)arg0 ;
-(BOOL)isSectionWithNameHistoric:(id)arg0 ;
-(NSUInteger)numberOfElementsInSection:(id)arg0 ;
-(id)dictionaryFromElement:(id)arg0 ;
-(id)elementAtPath:(id)arg0 ;
-(id)elementFromDictionary:(id)arg0 ;
-(id)elementRankerForSection:(id)arg0 ;
-(id)featureProviderForElement:(id)arg0 ;
-(id)featureProviderForElementAtPath:(id)arg0 ;
-(id)historicSectionForSection:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithName:(id)arg0 configuration:(id)arg1 ;
-(id)newInputFeatureMap;
-(id)newOutputFeatureMap;
-(id)pathForElement:(id)arg0 ;
-(id)predictionForElement:(id)arg0 ;
-(id)predictionForElementAtPath:(id)arg0 ;
-(id)sectionForHistoricSection:(id)arg0 ;
-(void)_addSubsystem:(id)arg0 ;
-(void)_callbackQueue_notifyLoadingState;
-(void)_captureAndStoreDiagnosticLogs:(id)arg0 ;
-(void)_notifyResumeCompleted;
-(void)_queue_pauseSubsystem:(id)arg0 ;
-(void)_queue_resumeSubsystem:(id)arg0 ;
-(void)_queue_resumeWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_removeSubsystem:(id)arg0 ;
-(void)activityTracker:(id)arg0 didBeginActivity:(id)arg1 ;
-(void)activityTracker:(id)arg0 didEndActivity:(id)arg1 ;
-(void)addElement:(id)arg0 section:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)addTrainingContext:(id)arg0 ;
-(void)beginActivity:(id)arg0 forObject:(id)arg1 ;
-(void)dealloc;
-(void)endActivity:(id)arg0 forObject:(id)arg1 ;
-(void)enumerateRankedContent:(id)arg0 ;
-(void)enumerateRankedContentInSection:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateSectionDescriptorsWithOptions:(NSUInteger)arg0 includeHistoric:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)gatherMetrics;
-(void)pause;
-(void)pauseForSimulation;
-(void)removeElement:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePreferencesForObject:(id)arg0 ;
-(void)removeTrainingContext:(id)arg0 ;
-(void)resetModelWithCompletion:(id)arg0 ;
-(void)resume;
-(void)resumeFromSimulation;
-(void)resumeWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)saveModelFile;
-(void)setPreferences:(id)arg0 forObject:(id)arg1 ;
-(void)storeDiagnosticLogs:(id)arg0 ;
-(void)storeDiagnosticLogsToFile:(id)arg0 ;
-(void)trainPendingEventsWithCompletion:(id)arg0 ;
-(void)trainWithPendingEvents;
-(void)updateSectionsWithIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif