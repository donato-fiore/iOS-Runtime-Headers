// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONMANAGEMENTMACONSTANTS_H
#define ATXNOTIFICATIONMANAGEMENTMACONSTANTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXNotificationManagementMAConstants : NSObject {
    NSDictionary *_parameters;
}


@property (readonly, nonatomic) CGFloat backupStartTimeoutSeconds;
@property (readonly, nonatomic) CGFloat backupTimeoutScaleFactor;
@property (readonly, nonatomic) NSInteger digestOnboardingSuggestionHour;
@property (readonly, nonatomic) NSUInteger digestOnboardingSuggestionMinimumActiveNotifications;
@property (readonly, nonatomic) NSUInteger digestOnboardingSuggestionMinimumUniqueBundleIds;
@property (readonly, nonatomic) NSInteger digestOnboardingSuggestionMinute;
@property (readonly, nonatomic) CGFloat interruptionManagementStartTimeoutSeconds;
@property (readonly, nonatomic) CGFloat interruptionManagementTimeoutScaleFactor;
@property (readonly, nonatomic) NSInteger interruptionManagerMaxSuggestions;
@property (readonly, nonatomic) CGFloat interruptionManagerPromptAllowScoreThreshold;
@property (readonly, nonatomic) CGFloat interruptionManagerPromptBlockScoreThreshold;
@property (readonly, nonatomic) CGFloat interruptionManagerRecommendationThresholdForApps;
@property (readonly, nonatomic) CGFloat interruptionManagerRecommendationThresholdForContacts;
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


@end


#endif