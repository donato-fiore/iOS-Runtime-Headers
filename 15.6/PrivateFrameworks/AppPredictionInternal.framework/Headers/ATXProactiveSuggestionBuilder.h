// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONBUILDER_H
#define ATXPROACTIVESUGGESTIONBUILDER_H


#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionBuilder : NSObject



+(BOOL)_isHeroAppForPredictionItem:(struct ATXPredictionItem )arg0 ;
+(BOOL)_isHeuristicActionForActionResult:(id)arg0 ;
+(BOOL)_isInstalledAppClipForPredictionItem:(struct ATXPredictionItem )arg0 ;
+(BOOL)_isMagicalMomentForPredictionItem:(struct ATXPredictionItem )arg0 ;
+(BOOL)isMMAnchorWhitelistedForHomeScreen:(NSInteger)arg0 ;
+(NSInteger)_confidenceCategoryForPredictionItem:(struct ATXPredictionItem )arg0 ;
+(NSInteger)_confidenceCategoryForScore:(CGFloat)arg0 highThreshold:(CGFloat)arg1 mediumThreshold:(CGFloat)arg2 ;
+(NSInteger)_confidenceCategoryGivenIsHighConfidence:(BOOL)arg0 ;
+(id)_actionPredictionReasonForActionResult:(id)arg0 reasons:(id)arg1 ;
+(id)_appPredictionReasonForPredictionItem:(struct ATXPredictionItem )arg0 reasons:(id)arg1 ;
+(id)_executableSpecForAppClipWithHeroAppPrediction:(id)arg0 ;
+(id)_executableSpecForAppWithBundleId:(id)arg0 ;
+(id)_executableSpecForScoredAction:(id)arg0 ;
+(id)_proactiveSuggestionFromAppPredictionItem:(struct ATXPredictionItem )arg0 clientModelSpec:(id)arg1 reasons:(id)arg2 ;
+(id)_proactiveSuggestionFromHeroAppPrediction:(id)arg0 clientModelSpec:(id)arg1 reasons:(id)arg2 ;
+(id)_proactiveSuggestionFromMagicalMomentsPredictionBundleId:(id)arg0 mmSignals:(id)arg1 clientModelSpec:(id)arg2 reasons:(id)arg3 ;
+(id)_proactiveSuggestionsFromActionResult:(id)arg0 clientModelSpec:(id)arg1 reasons:(id)arg2 ;
+(id)_proactiveSuggestionsFromHeuristicActionResult:(id)arg0 clientModelSpec:(id)arg1 reasons:(id)arg2 allowedOnLockscreen:(BOOL)arg3 ;
+(id)_scoreSpecForAppClipWithScore:(CGFloat)arg0 mediumThreshold:(CGFloat)arg1 highThreshold:(CGFloat)arg2 ;
+(id)_scoreSpecForAppWithScore:(CGFloat)arg0 isHighConfidence:(BOOL)arg1 ;
+(id)_scoreSpecForHeroAppPrediction:(id)arg0 ;
+(id)_scoreSpecForMagicalMomentsPredictionWithMmSignals:(id)arg0 ;
+(id)_scoreSpecForPredictionItem:(struct ATXPredictionItem )arg0 ;
+(id)_scoreSpecForScore:(CGFloat)arg0 highThreshold:(CGFloat)arg1 mediumThreshold:(CGFloat)arg2 ;
+(id)_uiSpecForAppClipWithBundleId:(id)arg0 title:(id)arg1 subtitle:(id)arg2 predictionReason:(id)arg3 ;
+(id)_uiSpecForAppWithBundleId:(id)arg0 scoreSpec:(id)arg1 predictionReason:(id)arg2 ;
+(id)_uiSpecForHeroAppPrediction:(id)arg0 scoreSpec:(id)arg1 predictionReason:(id)arg2 ;
+(id)_uiSpecForMMAppWithBundleId:(id)arg0 scoreSpec:(id)arg1 predictionReason:(id)arg2 anchor:(NSInteger)arg3 ;
+(id)_uiSpecForScoredAction:(id)arg0 scoreSpec:(id)arg1 clientModelSpec:(id)arg2 predictionReason:(id)arg3 ;
+(id)_uiSpecForScoredAction:(id)arg0 scoreSpec:(id)arg1 clientModelSpec:(id)arg2 predictionReason:(id)arg3 allowedOnLockscreen:(BOOL)arg4 ;
+(id)_uiSpecForScoredAction:(id)arg0 scoreSpec:(id)arg1 clientModelSpec:(id)arg2 predictionReason:(id)arg3 shouldClearOnEngagement:(BOOL)arg4 allowedOnLockscreen:(BOOL)arg5 ;
+(id)cachedTitleAndSubtitleForAction:(id)arg0 ;
+(id)predictionReasonForAnchorModelPrediction:(id)arg0 ;
+(id)proactiveSuggestionForAppClipFromHeroAppPrediction:(id)arg0 clientModelSpec:(id)arg1 mediumThreshold:(CGFloat)arg2 highThreshold:(CGFloat)arg3 reasons:(id)arg4 ;
+(id)proactiveSuggestionForAppClipsFromHeroAppPredictions:(id)arg0 clientModelSpec:(id)arg1 mediumThreshold:(CGFloat)arg2 highThreshold:(CGFloat)arg3 ;
+(id)proactiveSuggestionForAppWithAnchorModelPrediction:(id)arg0 clientModelSpec:(id)arg1 mediumThreshold:(CGFloat)arg2 highThreshold:(CGFloat)arg3 ;
+(id)proactiveSuggestionForAppWithBundleId:(id)arg0 score:(CGFloat)arg1 clientModelSpec:(id)arg2 mediumThreshold:(CGFloat)arg3 highThreshold:(CGFloat)arg4 predictionReason:(id)arg5 ;
+(id)proactiveSuggestionForLockscreenAction:(id)arg0 clientModelSpec:(id)arg1 ;
+(id)proactiveSuggestionsForAnchorModelFromScoredActionWithReason:(id)arg0 clientModelSpec:(id)arg1 mediumThreshold:(CGFloat)arg2 highThreshold:(CGFloat)arg3 ;
+(id)proactiveSuggestionsForAppsWithHeroAppPredictions:(id)arg0 clientModelSpec:(id)arg1 ;
+(id)proactiveSuggestionsForAppsWithMagicalMomentsMap:(id)arg0 clientModelSpec:(id)arg1 ;
+(id)proactiveSuggestionsForLockscreenActions:(id)arg0 clientModelSpec:(id)arg1 ;
+(id)proactiveSuggestionsFromActionResults:(id)arg0 clientModelSpec:(id)arg1 ;
+(id)proactiveSuggestionsFromAppPredictionItems:(*void)arg0 clientModelSpec:(id)arg1 maxSuggestionsToSendToBlendingLayer:(int)arg2 ;
+(id)proactiveSuggestionsFromHeuristicActionResults:(id)arg0 clientModelSpec:(id)arg1 ;
+(id)proactiveSuggestionsFromScoredAction:(id)arg0 clientModelSpec:(id)arg1 mediumThreshold:(CGFloat)arg2 highThreshold:(CGFloat)arg3 predictionReason:(id)arg4 ;


@end


#endif