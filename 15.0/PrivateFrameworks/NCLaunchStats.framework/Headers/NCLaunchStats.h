// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCLAUNCHSTATS_H
#define NCLAUNCHSTATS_H

@class NSMutableDictionary, NSSet, _DASActivity, _DKPredictionTimeline, _DKPredictor, _DKEventStream;
@protocol OS_os_log, _DASActivityScheduler, _DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NCLaunchStats : NSObject {
    NSMutableDictionary *prewarmTimeTracker;
    NSMutableDictionary *prewarmDurationTracker;
    NSMutableDictionary *launchTracker;
    NSInteger numRepeatedPrewarms;
    NSInteger numPrewarmedLaunches;
    int classCLockedToken;
    BOOL isClassCLocked;
    BOOL backgroundAppRefreshSwitchedOn;
    CGFloat kTimeGuardBand;
    int predictedWidgetsToken;
    int generatePredictionToken;
    int appSpecificTriggerToken;
}


@property (retain, nonatomic) NSMutableDictionary *appUpdateTimes; // ivar: _appUpdateTimes
@property (retain, nonatomic) NSMutableDictionary *appsRequestingRefresh; // ivar: _appsRequestingRefresh
@property (copy, nonatomic) id *asyncRecommendHandler; // ivar: _asyncRecommendHandler
@property (retain, nonatomic) NSSet *bootstrapWidgetIds; // ivar: _bootstrapWidgetIds
@property (retain, nonatomic) _DASActivity *bootstrapWidgetPrewarmActivity; // ivar: _bootstrapWidgetPrewarmActivity
@property (retain, nonatomic) _DKPredictionTimeline *bootstrapWidgetTimeline; // ivar: _bootstrapWidgetTimeline
@property (nonatomic) BOOL defaultRequiresNetwork; // ivar: _defaultRequiresNetwork
@property (nonatomic) NSUInteger defaultSchedulingPriority; // ivar: _defaultSchedulingPriority
@property (retain, nonatomic) _DASActivity *historyDeletionActivity; // ivar: _historyDeletionActivity
@property (retain, nonatomic) NSObject<OS_os_log> *ncLog; // ivar: _ncLog
@property (retain, nonatomic) _DKPredictionTimeline *predictionTimeline; // ivar: _predictionTimeline
@property (retain, nonatomic) _DASActivity *predictionUpdateActivity; // ivar: _predictionUpdateActivity
@property (retain, nonatomic) _DKPredictor *predictor; // ivar: _predictor
@property (retain, nonatomic) NSObject<_DASActivityScheduler> *scheduler; // ivar: _scheduler
@property (retain, nonatomic) NSObject<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *store; // ivar: _store
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) _DASActivity *widgetPrewarmActivity; // ivar: _widgetPrewarmActivity
@property (retain, nonatomic) _DKEventStream *widgetStream; // ivar: _widgetStream
@property (retain, nonatomic) NSMutableDictionary *widgetViewTime; // ivar: _widgetViewTime


+(CGFloat)minTimeBetweenRefreshes;
+(CGFloat)minTimeBootstrappingRandomizationSeed;
+(void)scheduleDeletionActivity:(id)arg0 store:(id)arg1 stream:(id)arg2 ;
-(BOOL)canUpdateWidgetsUnsafe;
-(BOOL)immediateUpdatesAllowedForWidgetUnsafe:(id)arg0 ;
-(id)bootstrapStartAfterDate:(id)arg0 ;
-(id)earliestRequestedRefresh:(id)arg0 atDate:(id)arg1 ;
-(id)init;
-(id)initWithKnowledgeStore:(id)arg0 ;
-(id)initWithKnowledgeStore:(id)arg0 defaultSchedulingPriority:(NSUInteger)arg1 defaultRequiresNetwork:(BOOL)arg2 ;
-(id)nextPredictedRefreshDate:(id)arg0 afterDate:(id)arg1 ;
-(id)predictedWidgetUsage;
-(id)predictedWidgetsForDate:(id)arg0 withTimeline:(id)arg1 ;
-(id)widgetsToRefreshAtDate:(id)arg0 withTimeline:(id)arg1 ;
-(void)cancelRequestedRefreshForWidget:(id)arg0 ;
-(void)dealloc;
-(void)endEvent:(id)arg0 ;
-(void)incrementOccurrencesForKey:(id)arg0 byCount:(NSInteger)arg1 ;
-(void)initAfterClassCUnlocked;
-(void)preWarmHasEnded:(id)arg0 withResult:(NSUInteger)arg1 withTriggerType:(int)arg2 withSequence:(NSUInteger)arg3 ;
-(void)preWarmHasStarted:(id)arg0 withResult:(NSUInteger)arg1 withTriggerType:(int)arg2 withSequence:(NSUInteger)arg3 ;
-(void)recordOccurrenceForKey:(id)arg0 ;
-(void)recordPrewarmStatisticsRaw:(id)arg0 ;
-(void)requestRefreshForWidget:(id)arg0 afterDate:(id)arg1 ;
-(void)scheduleBootstrapWidgetRefresh;
-(void)schedulePredictionUpdateBeforeDate:(id)arg0 ;
-(void)scheduleWidgetRefresh:(id)arg0 withRequestedRefreshes:(id)arg1 ;
-(void)scheduleWidgetRefresh:(id)arg0 withRequestedRefreshes:(id)arg1 cancelExisting:(BOOL)arg2 ;
-(void)setBootstrapWidgetIDs:(id)arg0 ;
-(void)setNCLaunchRecommendationHandler:(id)arg0 ;
-(void)setNCLaunchRecommendationHandlerWithCompletion:(id)arg0 ;
-(void)startEvent:(id)arg0 ;
-(void)unprotectedRemoveAllRequestsBeforeDate:(id)arg0 ;
-(void)unprotectedRemoveRequestsForWidget:(id)arg0 beforeDate:(id)arg1 ;
-(void)updateBARSwitch;
-(void)updateBootstrapWidgetsAtDate:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateWidgetsAtDate:(id)arg0 withTimeline:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif