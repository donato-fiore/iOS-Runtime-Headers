// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODESETUPPREDICTIONMETRICS_H
#define ATXMODESETUPPREDICTIONMETRICS_H

@class ATXCoreAnalyticsMetric, NSNumber, NSString;



@interface ATXModeSetupPredictionMetrics : ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSNumber *globalAllPagesFolderCountBucket; // ivar: _globalAllPagesFolderCountBucket
@property (copy, nonatomic) NSNumber *globalAllPagesWidgetCountBucket; // ivar: _globalAllPagesWidgetCountBucket
@property (copy, nonatomic) NSNumber *globalAppInterruptionsCount7Days; // ivar: _globalAppInterruptionsCount7Days
@property (copy, nonatomic) NSNumber *globalAppInterruptionsCountToday; // ivar: _globalAppInterruptionsCountToday
@property (copy, nonatomic) NSNumber *globalAppLaunchCount7Days; // ivar: _globalAppLaunchCount7Days
@property (copy, nonatomic) NSNumber *globalAppLaunchCountToday; // ivar: _globalAppLaunchCountToday
@property (copy, nonatomic) NSNumber *globalNotificationsClearedCount7Days; // ivar: _globalNotificationsClearedCount7Days
@property (copy, nonatomic) NSNumber *globalNotificationsClearedCountToday; // ivar: _globalNotificationsClearedCountToday
@property (copy, nonatomic) NSNumber *globalNotificationsCount7Days; // ivar: _globalNotificationsCount7Days
@property (copy, nonatomic) NSNumber *globalNotificationsCountToday; // ivar: _globalNotificationsCountToday
@property (copy, nonatomic) NSNumber *globalPosterConfigurationsCount; // ivar: _globalPosterConfigurationsCount
@property (nonatomic) BOOL hasSetupDigestThroughOnboardingSuggestion; // ivar: _hasSetupDigestThroughOnboardingSuggestion
@property (copy, nonatomic) NSNumber *homePageFolderCountBucket; // ivar: _homePageFolderCountBucket
@property (copy, nonatomic) NSNumber *homePageWidgetCountBucket; // ivar: _homePageWidgetCountBucket
@property (nonatomic) BOOL isDigestCurrentlyEnabled; // ivar: _isDigestCurrentlyEnabled
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountBasedOnAllowListOfInferredMode7Days; // ivar: _modeAppInterruptionsCountBasedOnAllowListOfInferredMode7Days
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountBasedOnAllowListOfInferredModeToday; // ivar: _modeAppInterruptionsCountBasedOnAllowListOfInferredModeToday
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountBasedOnDenyListOfInferredMode7Days; // ivar: _modeAppInterruptionsCountBasedOnDenyListOfInferredMode7Days
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountBasedOnDenyListOfInferredModeToday; // ivar: _modeAppInterruptionsCountBasedOnDenyListOfInferredModeToday
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountInModeInferred7Days; // ivar: _modeAppInterruptionsCountInModeInferred7Days
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountInModeInferredToday; // ivar: _modeAppInterruptionsCountInModeInferredToday
@property (copy, nonatomic) NSNumber *modeAppLaunchCountBasedOnGlobalPriors7Days; // ivar: _modeAppLaunchCountBasedOnGlobalPriors7Days
@property (copy, nonatomic) NSNumber *modeAppLaunchCountBasedOnGlobalPriorsToday; // ivar: _modeAppLaunchCountBasedOnGlobalPriorsToday
@property (nonatomic) BOOL modeHasActivatedToday; // ivar: _modeHasActivatedToday
@property (nonatomic) BOOL modeHasActivatedWithin7Days; // ivar: _modeHasActivatedWithin7Days
@property (nonatomic) BOOL modeHasLinkedPoster; // ivar: _modeHasLinkedPoster
@property (nonatomic) BOOL modeHasSmartActivationEnabled; // ivar: _modeHasSmartActivationEnabled
@property (copy, nonatomic) NSNumber *modeInferredCount7Days; // ivar: _modeInferredCount7Days
@property (copy, nonatomic) NSNumber *modeInferredCountToday; // ivar: _modeInferredCountToday
@property (copy, nonatomic) NSNumber *modeInferredDuration7Days; // ivar: _modeInferredDuration7Days
@property (copy, nonatomic) NSNumber *modeInferredDurationToday; // ivar: _modeInferredDurationToday
@property (nonatomic) BOOL modeIsCreated; // ivar: _modeIsCreated
@property (copy, nonatomic) NSString *modeName; // ivar: _modeName
@property (copy, nonatomic) NSNumber *modeNotificationsClearedCount7Days; // ivar: _modeNotificationsClearedCount7Days
@property (copy, nonatomic) NSNumber *modeNotificationsClearedCountToday; // ivar: _modeNotificationsClearedCountToday
@property (copy, nonatomic) NSNumber *modeNotificationsCount7Days; // ivar: _modeNotificationsCount7Days
@property (copy, nonatomic) NSNumber *modeNotificationsCountToday; // ivar: _modeNotificationsCountToday
@property (copy, nonatomic) NSNumber *modeTurnedOnCount7Days; // ivar: _modeTurnedOnCount7Days
@property (copy, nonatomic) NSNumber *modeTurnedOnCountToday; // ivar: _modeTurnedOnCountToday
@property (copy, nonatomic) NSNumber *modeTurnedOnDuration7Days; // ivar: _modeTurnedOnDuration7Days
@property (copy, nonatomic) NSNumber *modeTurnedOnDurationToday; // ivar: _modeTurnedOnDurationToday
@property (nonatomic) BOOL modeWasCreatedToday; // ivar: _modeWasCreatedToday
@property (nonatomic) BOOL modeWasCreatedWithin7Days; // ivar: _modeWasCreatedWithin7Days
@property (copy, nonatomic) NSNumber *modeWeightedAppLaunchCountBasedOnGlobalPriors7Days; // ivar: _modeWeightedAppLaunchCountBasedOnGlobalPriors7Days
@property (copy, nonatomic) NSNumber *modeWeightedAppLaunchCountBasedOnGlobalPriorsToday; // ivar: _modeWeightedAppLaunchCountBasedOnGlobalPriorsToday
@property (copy, nonatomic) NSNumber *trialDeploymentId; // ivar: _trialDeploymentId
@property (copy, nonatomic) NSString *trialExperimentId; // ivar: _trialExperimentId
@property (copy, nonatomic) NSString *trialTreatmentId; // ivar: _trialTreatmentId
@property (nonatomic) BOOL wasOfferedDigestOnboardingSuggestion; // ivar: _wasOfferedDigestOnboardingSuggestion


-(id)coreAnalyticsDictionary;
-(id)description;
-(id)metricName;


@end


#endif