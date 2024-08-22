// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODESUGGESTIONSCORER_H
#define ATXMODESUGGESTIONSCORER_H

@class NSString, NSArray, ATXConfiguredModeService, ATXActivitySuggestionFeedbackStream, BMAppLaunchStream, BMUserFocusComputedModeStream, NSNumber, DNDModeConfiguration;

#import <Foundation/Foundation.h>

#import "ATXActivitySuggestionsFeedbackHistogramHelper.h"

@interface ATXModeSuggestionScorer : NSObject {
    NSString *_modeUUID;
    NSUInteger _modeType;
    NSInteger _origin;
    NSString *_originAnchorType;
    NSString *_originBundleId;
    CGFloat _confidenceScore;
    CGFloat _secondsSinceSuggested;
    NSArray *_triggers;
    ATXConfiguredModeService *_configuredModeService;
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    ATXActivitySuggestionsFeedbackHistogramHelper *_feedbackHistogramHelper;
    BMAppLaunchStream *_appLaunchStream;
    BMUserFocusComputedModeStream *_groundTruthModeStream;
    NSNumber *_feedbackScore;
    NSNumber *_rejectionsInPastWeek;
    NSNumber *_totalRejections;
    NSNumber *_totalIgnores;
    NSNumber *_timesShownInLastDay;
    NSNumber *_cachedIsUserCurrentlyInMode;
    NSNumber *_cachedIsUserCurrentlyInADifferentMode;
    NSNumber *_cachedIsModeConfigured;
    DNDModeConfiguration *_cachedDNDMode;
}


@property (readonly, nonatomic) BOOL isModeConfigured;
@property (readonly, nonatomic) BOOL isUserCurrentlyInADifferentMode;
@property (readonly, nonatomic) BOOL isUserCurrentlyInMode;
@property (readonly, nonatomic) CGFloat score;
@property (readonly, nonatomic) BOOL shouldAllowSmartEntry;
@property (readonly, nonatomic) BOOL shouldSuggestOnLockScreen;
@property (readonly, nonatomic) BOOL shouldSuggestTriggers;


+(BOOL)_areConfiguredTriggers:(id)arg0 conflictingWithSuggestedTriggers:(id)arg1 ;
-(BOOL)_hasHadEarlyExitTodayForModeWithUUID:(id)arg0 ;
-(BOOL)_hasLaunchedAppOnAtLeastTwoSeparateDays;
-(BOOL)_hasUserSetUpModeBefore;
-(BOOL)_inValidLocaleForDrivingSuggestions;
-(BOOL)_isSameActivityAndSource:(id)arg0 ;
-(BOOL)_isUserCurrentlyInDifferentModeFromSuggestedMode:(id)arg0 ;
-(BOOL)_isUserCurrentlyInSuggestedMode:(id)arg0 ;
-(id)_lockScreenSuggestionThresholds;
-(id)_scoringWeights;
-(id)initWithModeUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 confidenceScore:(CGFloat)arg5 secondsSinceSuggested:(CGFloat)arg6 serializedTriggers:(id)arg7 ;
-(id)initWithModeUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originBundleId:(id)arg3 originAnchorType:(id)arg4 confidenceScore:(CGFloat)arg5 secondsSinceSuggested:(CGFloat)arg6 serializedTriggers:(id)arg7 configuredModeService:(id)arg8 feedbackStream:(id)arg9 feedbackHistogramHelper:(id)arg10 appLaunchStream:(id)arg11 groundTruthModeStream:(id)arg12 ;
-(void)_populateCachedDataAboutUsersCurrentMode;
-(void)_populateFeedbackScores;
-(void)_populateFeedbackScoresIfNeeded;


@end


#endif