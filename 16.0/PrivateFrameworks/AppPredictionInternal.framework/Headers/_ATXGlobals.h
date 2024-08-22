// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXGLOBALS_H
#define _ATXGLOBALS_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _ATXGlobals : NSObject {
    NSDictionary *_parameters;
    NSString *_abGroupIdentifier;
}




+(id)abHelperWithMobileAssetsGivenAssetClass:(Class)arg0 ;
+(id)abHelperWithTrialAssetsGivenAssetClass:(Class)arg0 ;
+(id)sharedInstance;
-(BOOL)allowBehavioralPredictionsOnLockscreen;
-(BOOL)cdnDownloaderIsEnabled;
-(BOOL)disableLocationQualityChecksForHeroApp;
-(BOOL)notificationsQuietingUseLogisticRegression;
-(BOOL)onlyAcceptBecomeCurrentNSUAs;
-(BOOL)onlyUseEligibleForPrediction;
-(BOOL)sessionLoggingCurrentLOITypeEnable;
-(BOOL)sessionLoggingGymDistanceEnable;
-(BOOL)sessionLoggingHomeDistanceEnable;
-(BOOL)sessionLoggingSchoolDistanceEnable;
-(BOOL)sessionLoggingWorkDistanceEnable;
-(BOOL)useOriginalScreenLockStateStream;
-(CGFloat)actionCoarseGeoHashDecayHalflife;
-(CGFloat)actionExperienceHighConfidenceThreshold;
-(CGFloat)actionExperienceMediumConfidenceThreshold;
-(CGFloat)actionPredictionInternalBuildSessionLogSamplingRate;
-(CGFloat)actionPredictionInternalBuildShadowLogSamplingRate;
-(CGFloat)actionPredictionSessionLogSamplingRate;
-(CGFloat)actionPredictionSessionLoggingDurationResolutionSec;
-(CGFloat)actionPredictionShadowLogSamplingRate;
-(CGFloat)actionSpecificGeoHashDecayHalflife;
-(CGFloat)airplaneModeLaunchDecayHalflife;
-(CGFloat)appActionAirplaneModeLaunchDecayHalflife;
-(CGFloat)appActionCoreMotionLaunchDecayHalflife;
-(CGFloat)appActionDayOfWeekLaunchDecayHalflife;
-(CGFloat)appActionLaunchDecayHalflife;
-(CGFloat)appActionLaunchSequenceDecayHalflife;
-(CGFloat)appActionTrendingLaunchDecayHalflife;
-(CGFloat)appActionUnlockTimeDecayHalflife;
-(CGFloat)appActionWifiSSIDLaunchDecayHalflife;
-(CGFloat)appAndActionCoarseTimePowLocationDecayHalflife;
-(CGFloat)appAndActionSpecificTimePowLocationDecayHalflife;
-(CGFloat)appCoarseGeoHashDecayHalflife;
-(CGFloat)appConfirmsCoarseGeoHashDecayHalflife;
-(CGFloat)appConfirmsDayOfWeekDecayHalflife;
-(CGFloat)appConfirmsSpecificGeoHashDecayHalflife;
-(CGFloat)appConfirmsTwoHourTimeIntervalDecayHalflife;
-(CGFloat)appDirectoryConfirmsCoarseGeohashDecayHalflife;
-(CGFloat)appDirectoryConfirmsCoarseTimePOWLocationDecayHalflife;
-(CGFloat)appDirectoryConfirmsDayOfWeekDecayHalflife;
-(CGFloat)appDirectoryConfirmsSpecificGeohashDecayHalflife;
-(CGFloat)appDirectoryConfirmsSpecificTimeDOWLocationDecayHalflife;
-(CGFloat)appDirectoryConfirmsTwoHourTimeIntervalDecayHalflife;
-(CGFloat)appDirectoryExplicitRejectsCoarseTimePOWLocationDecayHalflife;
-(CGFloat)appDirectoryLaunchDecayHalflife;
-(CGFloat)appDirectoryRejectsCoarseGeohashDecayHalflife;
-(CGFloat)appDirectoryRejectsCoarseTimePOWLocationDecayHalflife;
-(CGFloat)appDirectoryRejectsDayOfWeekDecayHalflife;
-(CGFloat)appDirectoryRejectsSpecificGeohashDecayHalflife;
-(CGFloat)appDirectoryRejectsSpecificTimeDOWLocationDecayHalflife;
-(CGFloat)appDirectoryRejectsTwoHourTimeIntervalDecayHalflife;
-(CGFloat)appExplicitRejectsCoarseTimePOWLocationDecayHalflife;
-(CGFloat)appLaunchDecayHalflife;
-(CGFloat)appLaunchesTwoHourTimeIntervalDecayHalflife;
-(CGFloat)appPredictionBlendedScoreNormalizationConstant;
-(CGFloat)appPredictionGlobalScoreMultiplierPerApp;
-(CGFloat)appRejectsCoarseGeoHashDecayHalflife;
-(CGFloat)appRejectsDayOfWeekDecayHalflife;
-(CGFloat)appRejectsSpecificGeoHashDecayHalflife;
-(CGFloat)appRejectsTwoHourTimeIntervalDecayHalflife;
-(CGFloat)appSpecificGeoHashDecayHalflife;
-(CGFloat)appZoom7GeoHashDecayHalflife;
-(CGFloat)behavioralHomeScreenActionMinimumConfidenceThreshold;
-(CGFloat)behavioralModeRelevanceDelay;
-(CGFloat)behavioralModeRelevanceDuration;
-(CGFloat)cacheRefreshIntervalForDisabledActionConsumerSubType;
-(CGFloat)cacheRefreshIntervalForDisabledAppConsumerSubType;
-(CGFloat)clippingThresholdForGaussianDist;
-(CGFloat)coreMotionLaunchDecayHalflife;
-(CGFloat)dayOfWeekLaunchDecayHalflife;
-(CGFloat)defaultPeriodicLoggerEnrollmentPeriodSeconds;
-(CGFloat)defaultPeriodicLoggerEnrollmentRate;
-(CGFloat)defaultPeriodicLoggerUploadIntervalSeconds;
-(CGFloat)defaultPredictionRefreshRate;
-(CGFloat)donationWeighingStrength;
-(CGFloat)heuristicActionExperienceHighConfidenceThreshold;
-(CGFloat)heuristicActionExperienceMediumConfidenceThreshold;
-(CGFloat)heuristicsBaseScore;
-(CGFloat)homeScreenAppConfirmsCoarseGeohashDecayHalflife;
-(CGFloat)homeScreenAppConfirmsCoarseTimePOWLocationDecayHalflife;
-(CGFloat)homeScreenAppConfirmsDayOfWeekDecayHalflife;
-(CGFloat)homeScreenAppConfirmsSpecificGeohashDecayHalflife;
-(CGFloat)homeScreenAppConfirmsSpecificTimeDOWLocationDecayHalflife;
-(CGFloat)homeScreenAppConfirmsTwoHourTimeIntervalDecayHalflife;
-(CGFloat)homeScreenAppExplicitRejectsCoarseTimePOWLocationDecayHalflife;
-(CGFloat)homeScreenAppRejectsCoarseGeohashDecayHalflife;
-(CGFloat)homeScreenAppRejectsCoarseTimePOWLocationDecayHalflife;
-(CGFloat)homeScreenAppRejectsDayOfWeekDecayHalflife;
-(CGFloat)homeScreenAppRejectsSpecificGeohashDecayHalflife;
-(CGFloat)homeScreenAppRejectsSpecificTimeDOWLocationDecayHalflife;
-(CGFloat)homeScreenAppRejectsTwoHourTimeIntervalDecayHalflife;
-(CGFloat)homescreenLaunchDecayHalflife;
-(CGFloat)launchAndLocationHarvesterSamplingRate;
-(CGFloat)launchSequenceDecayHalflife;
-(CGFloat)maximumActionFeedbackMeanCalculationEntryAge;
-(CGFloat)maximumSlotFeedbackDatabaseEntryAge;
-(CGFloat)maximumSlotResolutionDatabaseEntryAge;
-(CGFloat)notificationsAppSamplingRate;
-(CGFloat)notificationsCustomerSamplingRate;
-(CGFloat)notificationsHistoryDecayHalflife;
-(CGFloat)notificationsInternalSamplingRate;
-(CGFloat)notificationsPromotingEngageRateStd;
-(CGFloat)notificationsPromotingEngageRateThreshold;
-(CGFloat)notificationsQuietingEngageRateStd;
-(CGFloat)notificationsQuietingEngageRateThreshold;
-(CGFloat)notificationsQuietingProbabilityThreshold;
-(CGFloat)notificationsSeedSamplingRate;
-(CGFloat)notificationsUserSamplingRate;
-(CGFloat)nsuaDonationWeight;
-(CGFloat)penaltyForMultipleActionsPerApp;
-(CGFloat)poiCategoryDecayHalfLife;
-(CGFloat)predictedRouteAcceptThreshold;
-(CGFloat)predictionsForMultiStageLoggingLimit;
-(CGFloat)predictionsPerAppActionLimit;
-(CGFloat)scoreThresholdForBehavioralModeRelevance;
-(CGFloat)scoreThresholdForSavingAppsToModeFiles;
-(CGFloat)scoreThresholdForSavingContactsToModeFiles;
-(CGFloat)scoreThresholdForSavingDenyListSuggestionsToModeFiles;
-(CGFloat)sessionLoggingDistanceAccuracy;
-(CGFloat)sessionObjectLogSamplingRate;
-(CGFloat)shadowLogSamplingRate;
-(CGFloat)shouldIgnoreUpcomingMediaExpirationDateForTV;
-(CGFloat)slotResolutionDayOfWeekLaunchDecayHalflife;
-(CGFloat)slotResolutionLaunchDecayHalflife;
-(CGFloat)slotResolutionLocationLaunchDecayHalflife;
-(CGFloat)slotResolutionMotionTypeLaunchDecayHalflife;
-(CGFloat)slotResolutionPartOfWeekLaunchDecayHalflife;
-(CGFloat)slotResolutionPreviousLocationLaunchDecayHalflife;
-(CGFloat)slotResolutionRatioSmoothingThreshold;
-(CGFloat)slotResolutionTimeOfDayLaunchDecayHalflife;
-(CGFloat)smoothedBudgetForTimeOfDayStd;
-(CGFloat)smoothedCountForCoarseTimeOfDayStd;
-(CGFloat)smoothedCountForTimeOfDayStd;
-(CGFloat)spotlightLaunchDecayHalflife;
-(CGFloat)timeAndDayAppLaunchesDecayHalflife;
-(CGFloat)trendingLaunchDecayHalflife;
-(CGFloat)unlockTimeDecayHalflife;
-(CGFloat)wifiSSIDLaunchDecayHalflife;
-(NSUInteger)maxElementsToPerisistPerEntityForModeBackup;
-(NSUInteger)personalizationRequiredActionHistorySeconds;
-(NSUInteger)personalizationRequiredCountForRelevance;
-(NSUInteger)transitionLookaheadMaxSeconds;
-(NSUInteger)transitionLookaheadMinSeconds;
-(id)abGroupIdentifier;
-(id)actionFallbacksBlendingModelVersion;
-(id)actionPredictionBlendingModelVersion;
-(id)appPredictionBlendingModelVersion;
-(id)approvedSiriKitIntents;
-(id)blacklistedAppActions;
-(id)blacklistedAppActionsForPredictions;
-(id)blacklistedAppActionsForPrimaryShortcuts;
-(id)blacklistedAppActionsForShortcuts;
-(id)blacklistedAppActionsHelper:(id)arg0 ;
-(id)blacklistedAppsForAppPredictions;
-(id)blacklistedAppsForLockscreenPredictions;
-(id)enabledFallbackActions;
-(id)heuristicPredictionBlendingModelVersion;
-(id)init;
-(id)initForTestingWithMobileAssetAssetsOnly;
-(id)initForTestingWithTrialAssetsOnly;
-(id)initWithAssetClass:(Class)arg0 ;
-(id)launchAndLocationHarvesterAppBlacklist;
-(id)launchAndLocationHarvesterGenreIdBlacklist;
-(id)magicalMomentsEnabledPredictionExperts;
-(id)messageContentBlacklist;
-(id)penalizedFallbackActions;
-(id)personalizationBlacklistedBundleIds;
-(id)triggerPresetMinutes;
-(id)whitelistedActionKeysForHomeScreen;
-(id)whitelistedActionTypesForAnchorModelLogging;
-(id)whitelistedActionTypesForHomeScreen;
-(id)whitelistedAnchorsForMagicalMomentsOnHomeScreen;
-(id)whitelistedBundlesForAnchorModelLogging;
-(id)whitelistedDonationDaemonBundleIds;
-(int)actionExperienceHighConfidenceAppActionCountThreshold;
-(int)actionExperienceMediumConfidenceAppActionCountThreshold;
-(int)actionPredictionFirstStageBeamWidth;
-(int)actionPredictionSessionLoggingBottomBlockMaxItemsToLog;
-(int)actionSpotlightCaptureRateActionAppLaunchThresholdSeconds;
-(int)actionSpotlightCaptureRateForwardQueryThresholdSeconds;
-(int)actionSpotlightCaptureRateSecondsAfterSessionEnd;
-(int)appConnectionMinAverageLaunches;
-(int)appConnectionMinTotalLaunches;
-(int)donationWeighingScheme;
-(int)extraAppsToLog;
-(int)extraIntentsToLog;
-(int)extraSASAppsToLog;
-(int)fallbackActionsEngagementPriorAlpha;
-(int)fallbackActionsEngagementPriorBeta;
-(int)heuristicsEngagementPriorAlpha;
-(int)heuristicsEngagementPriorBeta;
-(int)homeScreenMaxValidCacheAge;
-(int)locationOfInterestSearchRadius;
-(int)lockscreenMaxValidCacheAge;
-(int)maxDistanceToDropOffLocationInMetersForRequestRideIntent;
-(int)maxHeuristicAppActionCount;
-(int)maxMagicalMomentsPredictions;
-(int)maxNumberOfActionDataMetricsToLogViaAWD;
-(int)maxNumberOfActionTypesPerApp;
-(int)maxValidATXActionResponseCacheAgeSec;
-(int)maximumParameterCombinations;
-(int)maximumSpotlightPredictions;
-(int)messageContentTimeElapsed;
-(int)minDistanceToDropOffLocationInMetersForRequestRideIntent;
-(int)minimumTimespanForOnceOffActions;
-(int)numberOfActionsToKeepForLogging;
-(int)numberOfRandomAppActionTypesToKeepForLogging;
-(int)numberOfRandomSlotsToKeepForLogging;
-(int)numberOfTopSASAppsToLog;
-(int)previousAppActionCompareCount;
-(int)sessionLoggingAppSequenceLength;
-(int)sessionLoggingUniqueAppActionSequenceLength;
-(int)spotlightMaxValidCacheAge;


@end


#endif