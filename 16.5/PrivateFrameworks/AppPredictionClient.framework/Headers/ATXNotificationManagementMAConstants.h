// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONMANAGEMENTMACONSTANTS_H
#define ATXNOTIFICATIONMANAGEMENTMACONSTANTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXNotificationManagementMAConstants : NSObject {
    NSDictionary *_parameters;
}


@property (readonly, nonatomic) NSInteger ATXNotificationAndSuggestionDatabase_maxNumberOfNotifications;
@property (readonly, nonatomic) NSInteger ATXNotificationAndSuggestionDatabase_maxNumberOfNotificationsPerApp;
@property (readonly, nonatomic) NSInteger ATXNotificationAndSuggestionDatabase_maxNumberOfSuggestions;
@property (readonly, nonatomic) NSInteger ATXNotificationAndSuggestionDatabase_pruningBatchSize;
@property (readonly, nonatomic) NSInteger ATXUserEducationSuggestionExploreFacesServer_gracePeriod;
@property (readonly, nonatomic) NSInteger ATXUserEducationSuggestionExploreFacesServer_maxHour;
@property (readonly, nonatomic) NSInteger ATXUserEducationSuggestionExploreFacesServer_minHour;
@property (readonly, nonatomic) NSInteger ATXUserEducationSuggestionExploreFacesServer_numBacklightOffEventsBeforeDismissSuggestion;
@property (readonly, nonatomic) NSInteger ATXUserEducationSuggestionExploreFacesServer_tryAgainIntervalSeconds;
@property (readonly, nonatomic) CGFloat backupStartTimeoutSeconds;
@property (readonly, nonatomic) CGFloat backupTimeoutScaleFactor;
@property (readonly, nonatomic) NSInteger chinSuggestionsAreDisabled;
@property (readonly, nonatomic) NSInteger digestOnboardingSuggestionHour;
@property (readonly, nonatomic) NSUInteger digestOnboardingSuggestionMinimumActiveNotifications;
@property (readonly, nonatomic) NSUInteger digestOnboardingSuggestionMinimumUniqueBundleIds;
@property (readonly, nonatomic) NSInteger digestOnboardingSuggestionMinute;
@property (readonly, nonatomic) CGFloat interruptionManagementStartTimeoutSeconds;
@property (readonly, nonatomic) CGFloat interruptionManagementTimeoutScaleFactor;
@property (readonly, nonatomic) NSInteger interruptionManagerMaxAppSuggestionsForDenyList;
@property (readonly, nonatomic) NSInteger interruptionManagerMaxContactSuggestionsForDenyList;
@property (readonly, nonatomic) NSInteger interruptionManagerMaxRecommendedAndCandidateAppSuggestionsForAllowList;
@property (readonly, nonatomic) NSInteger interruptionManagerMaxRecommendedAndCandidateAppSuggestionsForDenyList;
@property (readonly, nonatomic) NSInteger interruptionManagerMaxRecommendedAndCandidateContactSuggestionsForAllowList;
@property (readonly, nonatomic) NSInteger interruptionManagerMaxRecommendedAndCandidateContactSuggestionsForDenyList;
@property (readonly, nonatomic) NSInteger interruptionManagerMaxSuggestions;
@property (readonly, nonatomic) CGFloat interruptionManagerPromptAllowScoreThreshold;
@property (readonly, nonatomic) CGFloat interruptionManagerPromptBlockScoreThreshold;
@property (readonly, nonatomic) CGFloat interruptionManagerRecommendationDenyListThresholdForApps;
@property (readonly, nonatomic) CGFloat interruptionManagerRecommendationDenyListThresholdForContacts;
@property (readonly, nonatomic) CGFloat interruptionManagerRecommendationThresholdForApps;
@property (readonly, nonatomic) CGFloat interruptionManagerRecommendationThresholdForContacts;
@property (readonly, nonatomic) CGFloat interruptionManagerThresholdForCandidateAppSuggestionForAllowList;
@property (readonly, nonatomic) CGFloat interruptionManagerThresholdForCandidateAppSuggestionForDenyList;
@property (readonly, nonatomic) CGFloat interruptionManagerThresholdForCandidateContactSuggestionForAllowList;
@property (readonly, nonatomic) CGFloat interruptionManagerThresholdForCandidateContactSuggestionForDenyList;
@property (readonly, nonatomic) CGFloat interruptionManagerThresholdForRecommendedAppSuggestionForAllowList;
@property (readonly, nonatomic) CGFloat interruptionManagerThresholdForRecommendedAppSuggestionForDenyList;
@property (readonly, nonatomic) CGFloat interruptionManagerThresholdForRecommendedContactSuggestionForAllowList;
@property (readonly, nonatomic) CGFloat interruptionManagerThresholdForRecommendedContactSuggestionForDenyList;
@property (readonly, nonatomic) NSInteger numIgnoresToReject;
@property (readonly, nonatomic) NSInteger numPreviousDaysToCheckForNotificationProblemForDigestOnboardingSuggestion;
@property (readonly, nonatomic) NSInteger sendMessagesToDigestManagerMaxNumNonEngagementsAllowedForMessageNotifications;
@property (readonly, nonatomic) CGFloat sendToDigestEngagementRateThreshold;
@property (readonly, nonatomic) CGFloat sendToDigestStartTimeoutSeconds;
@property (readonly, nonatomic) NSInteger sendToDigestThresholdForNumNonEngagements;
@property (readonly, nonatomic) CGFloat sendToDigestTimeoutScaleFactor;
@property (readonly, nonatomic) CGFloat smartPauseManagerEngagementRateThresholdForApp;
@property (readonly, nonatomic) CGFloat smartPauseManagerEngagementRateThresholdForThread;
@property (readonly, nonatomic) CGFloat smartPauseManagerExpirationSeconds;
@property (readonly, nonatomic) CGFloat smartPauseManagerPauseDurationSeconds;
@property (readonly, nonatomic) CGFloat smartPauseManagerRefreshIntervalSeconds;
@property (readonly, nonatomic) NSInteger smartPauseManagerThresholdForNumNotificationsReceivedInLastFiveMinutesForApp;
@property (readonly, nonatomic) NSInteger smartPauseManagerThresholdForNumNotificationsReceivedInLastFiveMinutesForThread;
@property (readonly, nonatomic) CGFloat smartPauseStartTimeoutSeconds;
@property (readonly, nonatomic) CGFloat smartPauseTimeoutScaleFactor;
@property (readonly, nonatomic) CGFloat thresholdForShowingDigestOnboardingSuggestion;
@property (readonly, nonatomic) CGFloat thresholdForShowingDigestOnboardingSuggestionToSeedUsers;
@property (readonly, nonatomic) NSInteger urgencyTuningManagerMaxNumNonEngagementsAllowedForUrgentNotifications;
@property (readonly, nonatomic) CGFloat urgencyTuningStartTimeoutSeconds;
@property (readonly, nonatomic) CGFloat urgencyTuningTimeoutScaleFactor;


+(id)sharedInstance;
-(id)init;
-(id)numberForKey:(id)arg0 ;


@end


#endif