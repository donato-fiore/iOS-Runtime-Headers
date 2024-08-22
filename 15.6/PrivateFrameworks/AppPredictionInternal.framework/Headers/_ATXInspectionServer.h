// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXINSPECTIONSERVER_H
#define _ATXINSPECTIONSERVER_H

@class NSXPCListener, NSString;
@protocol _ATXInspectionInterface, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _ATXInspectionServer : NSObject <_ATXInspectionInterface, NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)addToDigestFeedbackHistogramForBundleId:(id)arg0 location:(id)arg1 feedback:(id)arg2 withReply:(id)arg3 ;
-(void)appAndActionHistoryClear:(id)arg0 ;
-(void)appHistoryActionWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)appHistoryAddAppIntentLaunch:(id)arg0 intent:(id)arg1 source:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reply:(id)arg5 ;
-(void)appHistoryAddLaunch:(id)arg0 launchReason:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reply:(id)arg4 ;
-(void)appHistoryAddNSUALaunch:(id)arg0 requiredString:(id)arg1 itemIdentifier:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reply:(id)arg5 ;
-(void)appHistoryClearAppIntent:(id)arg0 ;
-(void)appHistoryStartDeltaRecording:(id)arg0 ;
-(void)appHistoryStopDeltaRecording:(id)arg0 ;
-(void)appHistoryUpdateActionPredictionPipelineWithAction:(id)arg0 date:(id)arg1 timeZone:(id)arg2 reply:(id)arg3 ;
-(void)appInstallHistoryClear:(id)arg0 ;
-(void)appInstallHistorySet:(id)arg0 date:(id)arg1 reply:(id)arg2 ;
-(void)appInstallHistoryStartDeltaRecording:(id)arg0 ;
-(void)appInstallHistoryStopDeltaRecording:(id)arg0 ;
-(void)appIntentHistoryDonateINIntent:(id)arg0 intentType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 reply:(id)arg5 ;
-(void)appIntentHistoryMockIntentLaunch:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 reply:(id)arg5 ;
-(void)appLaunchDatesWithReply:(id)arg0 ;
-(void)appLaunchInformationWithReply:(id)arg0 ;
-(void)benchmarkAppPrediction:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)benchmarkAppPredictionForConsumerSubType:(unsigned char)arg0 ntimes:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)blendedSuggestionsForConsumerSubType:(unsigned char)arg0 reply:(id)arg1 ;
-(void)buildAnchorModelTrainingDataset:(id)arg0 ;
-(void)categoriesWithShouldUseDefault:(BOOL)arg0 reply:(id)arg1 ;
-(void)categoryLaunchInformationWithReply:(id)arg0 ;
-(void)clearAllDataForStressTestWithReply:(id)arg0 ;
-(void)clearBlendingSuggestionsForClientModel:(NSInteger)arg0 withReply:(id)arg1 ;
-(void)clearDigestFeedbackHistogramWithShouldResetBookmarks:(BOOL)arg0 reply:(id)arg1 ;
-(void)clearNotificationsWithReply:(id)arg0 ;
-(void)createAppPredictionLogs:(id)arg0 ;
-(void)donateSuggestion:(id)arg0 forClientModel:(NSInteger)arg1 withReply:(id)arg2 ;
-(void)dumpNotificationJSONFromSource:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 inferMessages:(BOOL)arg3 reply:(id)arg4 ;
-(void)dumpPredictionTableForMMExpert:(id)arg0 reply:(id)arg1 ;
-(void)evaluateInfoSuggestionsWithCompletionHandler:(id)arg0 ;
-(void)feedbackClear:(id)arg0 ;
-(void)feedbackLaunched:(id)arg0 rejected:(id)arg1 reply:(id)arg2 ;
-(void)feedbackLaunchedWithConsumerSubType:(unsigned char)arg0 forBundleId:(id)arg1 rejected:(id)arg2 reply:(id)arg3 ;
-(void)fetchSuggestionsForSourceId:(id)arg0 reply:(id)arg1 ;
-(void)forceMagicalMomentsAppPredictionForBundleId:(id)arg0 expert:(id)arg1 reply:(id)arg2 ;
-(void)forceNotificationAndSuggestionDbUpdate:(id)arg0 ;
-(void)generateDataForStressTestWithReply:(id)arg0 ;
-(void)generateSerializedMissedNotificationBundleFromFileData:(id)arg0 modeString:(id)arg1 rankerString:(id)arg2 reply:(id)arg3 ;
-(void)generateSerializedMissedNotificationBundleFromSource:(id)arg0 modeString:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 inferMessages:(BOOL)arg4 rankerString:(id)arg5 reply:(id)arg6 ;
-(void)generateSerializedNotificationDigestFromFileData:(id)arg0 digestTimeString:(id)arg1 rankerString:(id)arg2 reply:(id)arg3 ;
-(void)generateSerializedNotificationDigestFromSource:(id)arg0 digestTimeString:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 inferMessages:(BOOL)arg4 rankerString:(id)arg5 reply:(id)arg6 ;
-(void)getActionLogs:(id)arg0 ;
-(void)getAppFeedbackData:(id)arg0 ;
-(void)getAppUsageDataFromStartDate:(id)arg0 reply:(id)arg1 ;
-(void)getCurrentLocationWithReply:(id)arg0 ;
-(void)getInfoPredictionsInString:(id)arg0 ;
-(void)getInfoSuggestionsInString:(id)arg0 ;
-(void)getNotificationLogs:(id)arg0 ;
-(void)getNotificationSettings:(id)arg0 ;
-(void)getNotificationsSuggestionResponses:(id)arg0 ;
-(void)getParseTreeForConsumerSubType:(unsigned char)arg0 reply:(id)arg1 ;
-(void)getPredictionModelDetailsForConsumerSubType:(unsigned char)arg0 reply:(id)arg1 ;
-(void)inspectInferredActivitySessionStream:(id)arg0 fromTimestamp:(CGFloat)arg1 reply:(id)arg2 ;
-(void)inspectInferredActivityTransitionStream:(id)arg0 fromTimestamp:(CGFloat)arg1 reply:(id)arg2 ;
-(void)nPlusOneStudyDryRunResultFilterByExtensionBundleId:(id)arg0 reply:(id)arg1 ;
-(void)performHomeScreenCoreAnalyticsDryRunWithCustomStartDate:(id)arg0 reply:(id)arg1 ;
-(void)predictAppsAndReturnInputsAndSubscores:(id)arg0 ;
-(void)predictItemsAndReturnInputsAndSubscoresForConsumerSubType:(unsigned char)arg0 intent:(id)arg1 candidateBundleIds:(id)arg2 candidateActiontypes:(id)arg3 reply:(id)arg4 ;
-(void)predictItemsAndReturnMetaDataAndInputsAndSubScoresWithCandidateBundleIdentifiers:(id)arg0 candidateActiontypes:(id)arg1 consumerSubType:(unsigned char)arg2 reply:(id)arg3 ;
-(void)predictItemsAndReturnStageScoresWithCandidateBundleIdentifiers:(id)arg0 candidateActiontypes:(id)arg1 consumerSubType:(unsigned char)arg2 reply:(id)arg3 ;
-(void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)processAppDirectoryFeedbackWithReply:(id)arg0 ;
-(void)processHomeScreenFeedbackWithReply:(id)arg0 ;
-(void)processLockscreenFeedbackWithReply:(id)arg0 ;
-(void)processSpotlightActionFeedbackWithReply:(id)arg0 ;
-(void)processSpotlightAppFeedbackWithReply:(id)arg0 ;
-(void)promoteSuggestionsFromClientModel:(id)arg0 reply:(id)arg1 ;
-(void)rankAndReturnInfoPredictionsInString:(id)arg0 ;
-(void)refreshBlendingLayer:(id)arg0 ;
-(void)resetActionPredictions:(id)arg0 ;
-(void)resetNotificationsHistory:(id)arg0 ;
-(void)resetNotificationsSuggestionResponses:(id)arg0 ;
-(void)retrainActionHistograms:(id)arg0 ;
-(void)retrainActionSlotDatabase:(id)arg0 ;
-(void)schedulePredictionsForAnchorModel:(id)arg0 anchorType:(id)arg1 reply:(id)arg2 ;
-(void)scheduledPredictionsForAnchorModelWithReply:(id)arg0 ;
-(void)setDigestFeedbackHistogramValueForBundleId:(id)arg0 location:(id)arg1 feedback:(id)arg2 value:(id)arg3 withReply:(id)arg4 ;
-(void)showDigestFeedbackHistogramForBundleId:(id)arg0 withReply:(id)arg1 ;
-(void)trainAnchorModel:(id)arg0 ;
-(void)trainMagicalMomentsAppPredictor:(id)arg0 ;
-(void)trainModeEntityModelsWithDeferTrainingWhenApplicable:(BOOL)arg0 reply:(id)arg1 ;
-(void)updateAppDirectoryCache:(id)arg0 ;
-(void)validPredictionsRightNowForAnchorModelWithReply:(id)arg0 ;
-(void)widgetBundleIdentifiersForAllInfoSuggestionsInString:(id)arg0 ;


@end


#endif