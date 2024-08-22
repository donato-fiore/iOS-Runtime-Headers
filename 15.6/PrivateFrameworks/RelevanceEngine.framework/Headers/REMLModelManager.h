// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLMODELMANAGER_H
#define REMLMODELMANAGER_H

@class NSString, NSArray, NSDate;
@protocol REMLModelManagerProperties, OS_dispatch_queue, RERelevanceEngineMetricsRecorder;


#import "RERelevanceEngineSubsystem.h"
#import "REMLLinearModel.h"
#import "REContentRanker.h"
#import "REMLMetricsSet.h"
#import "REObserverStore.h"
#import "REMLModel.h"

@interface REMLModelManager : RERelevanceEngineSubsystem <REMLModelManagerProperties>

 {
    REMLLinearModel *_model;
    REContentRanker *_contentRanker;
    REMLMetricsSet *_metrics;
    NSObject<OS_dispatch_queue> *_trainingQueue;
    REObserverStore *_observers;
    NSString *_modelFileLocation;
    BOOL _supportsContentRanking;
    NSArray *_orderedFeatures;
    NSUInteger _modelStorageBehavior;
    REObserverStore *_dataStores;
    id<RERelevanceEngineMetricsRecorder> *_metricsRecoder;
    NSDate *_lastCacheResetDate;
    NSUInteger _modelVersionNumber;
    BOOL _validModel;
}


@property (readonly, nonatomic) REContentRanker *contentRanker;
@property (readonly, nonatomic) REMLModel *model;
@property (readonly, nonatomic) NSUInteger modelVersionNumber;
@property (readonly, nonatomic) NSArray *orderedFeatures;
@property (readonly, nonatomic) BOOL supportsContentRanking;


-(BOOL)_loadModelAtPath:(id)arg0 mlFeatures:(id)arg1 checkModelVersion:(BOOL)arg2 ;
-(BOOL)_saveModelToDisk:(*id)arg0 ;
-(id)_createOrderFeatureListFromModelFileURL:(id)arg0 mlFeatures:(id)arg1 ;
-(id)_orderedModelFeatures;
-(id)comparatorWithRules:(id)arg0 ;
-(id)createOutputFeatureFromDouble:(CGFloat)arg0 error:(*id)arg1 ;
-(id)initWithRelevanceEngine:(id)arg0 ;
-(id)predicitionForLogicalElement:(id)arg0 ;
-(id)sentimentAnalyzer;
-(void)_logMetrics;
-(void)_notifyObserversThatModelUpdated;
-(void)_saveDataStoresToURL:(id)arg0 ;
-(void)addDataStore:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)flushTraining;
-(void)manuallySaveModel;
-(void)performModelClearWithCompletion:(id)arg0 ;
-(void)performTrainingWithFeatureMaps:(id)arg0 content:(id)arg1 events:(id)arg2 interactions:(id)arg3 purgeCaches:(BOOL)arg4 completion:(id)arg5 ;
-(void)removeDataStore:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif