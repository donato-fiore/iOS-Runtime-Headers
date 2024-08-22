// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXACTIONFEEDBACK_H
#define ATXACTIONFEEDBACK_H

@class ATXRecentActionEngagementCache, NSArray, PETDistributionEventTracker, PETScalarEventTracker, NSString;
@protocol ATXProactiveSuggestionFeedbackListenerProtocol, ATXPredictionContextBuilderProtocol, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXActionFeedbackWeights.h"
#import "_ATXAppLaunchHistogramManager.h"
#import "ATXActionNotificationServer.h"
#import "ATXAppIntentMonitor.h"
#import "_ATXDataStore.h"
#import "ATXBlendingLayerHyperParameters.h"
#import "ATXUserMetricsLogger.h"

@interface ATXActionFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol>

 {
    id<ATXPredictionContextBuilderProtocol> *_predictionContextBuilder;
    ATXActionFeedbackWeights *_actionFeedbackWeights;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    ATXActionNotificationServer *_notificationServer;
    ATXRecentActionEngagementCache *_recentEngagementCache;
    ATXAppIntentMonitor *_appIntentMonitor;
    _ATXDataStore *_dataStore;
    NSArray *_abGroupIdentifiers;
    ATXBlendingLayerHyperParameters *_blendingHyperParameters;
    PETDistributionEventTracker *_predictionsTracker;
    PETScalarEventTracker *_predictionItemsTracker;
    PETScalarEventTracker *_engagedInitTracker;
    PETScalarEventTracker *_engagementTracker;
    PETScalarEventTracker *_tvEngagementTracker;
    PETScalarEventTracker *_tvShownTracker;
    PETDistributionEventTracker *_predictedSlotTracker;
    PETDistributionEventTracker *_engagedSlotTracker;
    PETScalarEventTracker *_captureRateTracker;
    PETDistributionEventTracker *_durationTracker;
    ATXUserMetricsLogger *_userMetricsLogger;
    id<ATXPETEventTracker2Protocol> *_petTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSUInteger)_feedbackStageForUIFeedbackResult:(id)arg0 engagedSuggestion:(id)arg1 ;
-(id)_actionResponseFromUIFeedbackResult:(id)arg0 shownActions:(id)arg1 rejectedActions:(id)arg2 engagedAction:(id)arg3 engagedSuggestion:(id)arg4 ;
-(id)_scoredActionsFromProactiveSuggestions:(id)arg0 ;
-(id)abGroupFromActionResponse:(id)arg0 ;
-(id)clientModelIds;
-(id)init;
-(id)initWithPredictionContextBuilder:(id)arg0 actionFeedbackWeights:(id)arg1 appLaunchHistogramManager:(id)arg2 actionNotificationServer:(id)arg3 recentEngagmentCache:(id)arg4 appIntentMonitor:(id)arg5 dataStore:(id)arg6 abGroupIdentifiers:(id)arg7 blendingHyperParameters:(id)arg8 userMetricsLogger:(id)arg9 predictionsTracker:(id)arg10 predictionItemsTracker:(id)arg11 engagedInitTracker:(id)arg12 engagementTracker:(id)arg13 predictedSlotTracker:(id)arg14 engagedSlotTracker:(id)arg15 captureRateTracker:(id)arg16 tvEngagementTracker:(id)arg17 tvShownTracker:(id)arg18 durationTracker:(id)arg19 petTracker:(id)arg20 ;
-(void)_assertHistogram:(id)arg0 weight:(float)arg1 ;
-(void)_updateAppLaunchCategoricalHistogram:(NSInteger)arg0 bundleId:(id)arg1 category:(id)arg2 context:(id)arg3 weight:(float)arg4 ;
-(void)_updateAppLaunchHistogram:(NSInteger)arg0 bundleId:(id)arg1 context:(id)arg2 weight:(float)arg3 ;
-(void)applyFinalFeedbackForActionResponse:(id)arg0 engagementType:(NSUInteger)arg1 context:(id)arg2 ;
-(void)decayCounts;
-(void)logHeuristicFeedback:(id)arg0 ;
-(void)logHeuristicFeedbackToPortraitForAction:(id)arg0 withActionType:(unsigned short)arg1 ;
-(void)logHeuristicFeedbackToSuggestionsForAction:(id)arg0 withActionType:(unsigned short)arg1 ;
-(void)receiveFeedbackWithActionResponse:(id)arg0 context:(id)arg1 ;
-(void)receiveLockscreenFeedbackWithAction:(id)arg0 actionResponse:(id)arg1 engagement:(BOOL)arg2 triggeredByUserInteraction:(BOOL)arg3 ;
-(void)receiveLockscreenFeedbackWithAction:(id)arg0 actionResponse:(id)arg1 engagement:(BOOL)arg2 triggeredByUserInteraction:(BOOL)arg3 currentDate:(id)arg4 ;
-(void)receiveUIFeedbackResult:(id)arg0 ;
-(void)resetData;
-(void)sessionLogWithActionResponse:(id)arg0 engagementType:(NSUInteger)arg1 context:(id)arg2 ;


@end


#endif