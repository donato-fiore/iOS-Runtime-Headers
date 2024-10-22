

#include "ATXAppModeEntity.h"
#include "ATXOnboardingStackWidgetCacheManager.h"
#include "ATXContextMenuFeedbackTracker.h"
#include "ATXPBActivitySuggestionFeedbackEvent.h"
#include "ATXApplicationRecord.h"
#include "ATXPBDigestOnboardingAppSelectionLoggingEvent.h"
#include "ATXDigestTimeline.h"
#include "ATXERMEvent.h"
#include "ATXActivitySuggestionFeedbackEvent.h"
#include "ATXFaceSuggestionClient.h"
#include "ATXAppDirectoryCategory.h"
#include "ATXScorableTimeATXActivityTypeWrapper.h"
#include "ATXNotificationSmartPauseSuggestion.h"
#include "ATXActionPredictionClient.h"
#include "ATXDigestOnboardingSuggestionClient.h"
#include "ATXModeConfigurationUIFlowLogging.h"
#include "ATXMPBFeedbackUserInteractionsTracker.h"
#include "ATXMagicalMomentsTypes.h"
#include "ATXDigestOnboardingLoggingEvent.h"
#include "ATXActivitySetUpSuggestion.h"
#include "ATXBiomeERMStream.h"
#include "ATXTrialAssetsGuardedData.h"
#include "ATXTrialAssets.h"
#include "ATXModeEntityTrialClientWrapperGuardedData.h"
#include "ATXModeEntityTrialClientWrapper.h"
#include "ATXDefaultHomeScreenItemTilerPodBuilder.h"
#include "ATXInterruptionManager.h"
#include "ATXLockScreenNotificationRankerClient.h"
#include "ATXPBNotificationSuggestionInteractionEvent.h"
#include "ATXPBTurnOffNotificationsForAppSuggestion.h"
#include "ATXFaceGalleryBiomeStream.h"
#include "ATXActionResponse.h"
#include "ATXActionPredictionTypes.h"
#include "ATXDefaultHomeScreenItemComparator.h"
#include "ATXWidgetEngagementRecord.h"
#include "ATXStackRotationRecord.h"
#include "ATXSuggestedPagesClient.h"
#include "ATXCoreDuetContextHelper.h"
#include "ATXDefaultWidgetStack.h"
#include "ATXMPBFeedbackRecordedTracker.h"
#include "ATXApplicationExtensionRecord.h"
#include "ATXDefaultHomeScreenItemTilerGridSize5.h"
#include "ATXPBLinkAction.h"
#include "ATXActionCacheClientReader.h"
#include "ATXUrgencyTuningSuggestion.h"
#include "ATXScorableTimeATXModeWrapper.h"
#include "ATXModeGlobals.h"
#include "ATXAppDirectoryClient.h"
#include "ATXAppDirectoryResponse.h"
#include "ATXSleepSuggestionClient.h"
#include "ATXMissedNotificationRanking.h"
#include "ATXMissedNotificationRankingBiomeStream.h"
#include "ATXAggregatedAppLaunchData.h"
#include "ATXOnboardingStackWidgetCache.h"
#include "ATXPBERMEvent.h"
#include "ATXAction.h"
#include "ATXSendMessagesToDigestSuggestion.h"
#include "ATXHomeScreenPrediction.h"
#include "ATXDefaultHomeScreenItemOnboardingStacksProducer.h"
#include "ATXNotificationGroupEvent.h"
#include "ATXHomeScreenPageIconRanker.h"
#include "ATXFaceSuggestionFocusMode.h"
#include "ATXUserNotificationLoggingEvent.h"
#include "ATXFeedbackStateBuilder.h"
#include "ATXFeedbackStateReader.h"
#include "ATXWatchFaceConfigurationCollector.h"
#include "ATXPBInfoEngineCachedSuggestions.h"
#include "ATXFamilyCircleCache.h"
#include "ATXFaceGalleryItem.h"
#include "ATXDefaultHomeScreenItemTilerWrapper.h"
#include "ATXDefaultHomeScreenItemTilerHelper.h"
#include "ATXPBHomeScreenEventMetadata.h"
#include "ATXHomeScreenPageAppRanker.h"
#include "ATXLinkActionContainer.h"
#include "ATXModeEntityScore.h"
#include "ATXNewsTodayWidgetPlacementPolicyProvider.h"
#include "ATXTurnOffNotificationsForAppSuggestion.h"
#include "ATXLazyIntent.h"
#include "ATXHomeScreenStackConfig.h"
#include "ATXPBModeConfigurationUIFlowLoggingEvent.h"
#include "ATXNotificationManagementUserDefaultsOrMAConstants.h"
#include "ATXPosterDescriptorGalleryOptions.h"
#include "ATXAppDirectoryEventMetadata.h"
#include "ATXComplicationSet.h"
#include "ATXActionCriteria.h"
#include "ATXActionCriteriaWorldState.h"
#include "ATXActionCriteriaPredicateChecker.h"
#include "ATXUserNotificationDerivedData.h"
#include "ATXPBDigestOnboardingSuggestionLoggingEvent.h"
#include "ATXNotificationSuggestionInteractionEvent.h"
#include "ATXPBUserNotificationDigestLoggingEvent.h"
#include "ATXPBDigestOnboardingLoggingEvent.h"
#include "ATXSpotlightAction.h"
#include "ATXBiomeSuggestedHomePageStream.h"
#include "ATXModeEntityScorerClient.h"
#include "ATXActivitySuggestionFeedbackStream.h"
#include "ATXPBSpotlightEventMetadata.h"
#include "ATXClientDuetHelper.h"
#include "ATXPBFaceGalleryConfiguration.h"
#include "ATXDigestOnboardingAppSelectionLoggingEvent.h"
#include "ATXPBMissedNotificationRankingLoggingEvent.h"
#include "ATXPosterEdit.h"
#include "ATXDigestOnboardingAppSelectionLoggingBiomeStream.h"
#include "ATXPBCGRectWrapper.h"
#include "ATXActionSearchResult.h"
#include "ATXMFeedbackConversionLogger.h"
#include "ATXUserEducationSuggestion.h"
#include "ATXUserEducationSuggestionSleepMigration.h"
#include "ATXUserEducationSuggestionExploreFaces.h"
#include "ATXUserEducationSuggestionCustomizeFocus.h"
#include "ATXUserNotificationDigest.h"
#include "ATXDeviceClass.h"
#include "ATXAVRouteInfo.h"
#include "ATXRecentActionEngagementCache.h"
#include "ATXAVRoutingSessionHelper.h"
#include "ATXWidgetModeEntity.h"
#include "ATXActivitySuggestion.h"
#include "ATXPBUserNotification.h"
#include "ATXTrainDenyListWithDenyListModels.h"
#include "ATXScorableTimeDigestTimeWrapper.h"
#include "ATXNowPlayingDataProvider.h"
#include "ATXDefaultHomeScreenItemProducer.h"
#include "ATXDefaultHomeScreenItemTilerGridSize2.h"
#include "ATXMPBContextMenuFeedbackTracker.h"
#include "ATXModeEntityScorer.h"
#include "ATXSleepSuggestionOccurrence.h"
#include "ATXInterruptionManagerTuningSuggestion.h"
#include "ATXSharedDigestEngagementTrackingMetrics.h"
#include "ATXBiomeUIStream.h"
#include "ATXHomeScreenWidgetIdentifiable.h"
#include "ATXHomeScreenWidgetDescriptor.h"
#include "ATXPBDigestOnboardingLoggingEventEnums.h"
#include "ATXEngagementRecordManager.h"
#include "ATXPBSendToDigestSuggestion.h"
#include "ATXUserNotificationAppDigest.h"
#include "ATXDigestOnboardingSuggestionLoggingEvent.h"
#include "ATXPBDigestOnboardingSuggestionLoggingEventEnums.h"
#include "ATXDigestOnboardingSuggestion.h"
#include "ATXNotificationSettingsReader.h"
#include "ATXPBNotificationGroupEvent.h"
#include "ATXUserNotificationDigestLoggingEvent.h"
#include "ATXSendToDigestSuggestion.h"
#include "ATXOnboardingStackResultCacheManager.h"
#include "ATXNotificationSuggestionInteractionBiomeStream.h"
#include "ATXClient.h"
#include "ATXInterruptionManagerContactSuggestions.h"
#include "ATXModeConfigurationColoringBookLoggingClient.h"
#include "ATXSuggestedPagesCache.h"
#include "ATXABHelper.h"
#include "ATXUserEducationSuggestionConnector.h"
#include "ATXUserEducationSuggestionConnectorListenerDelegate.h"
#include "ATXUserEducationSuggestionEvent.h"
#include "_ATXNotificationGroupStatelessRandomizingRanker.h"
#include "ATXHomeScreenSuggestionClientGuardedData.h"
#include "ATXHomeScreenSuggestionClient.h"
#include "ATXInstalledSuggestedPage.h"
#include "ATXInstalledSuggestedPagesTracker.h"
#include "ATXDemoStackAndWidgetProvider.h"
#include "ATXModeSetupExperienceMetrics.h"
#include "ATXPBAppDirectoryEvent.h"
#include "ATXDigestSetupResponse.h"
#include "ATXPBModeConfigurationLoggingEventEnums.h"
#include "ATXAppPredictorAssetMapping.h"
#include "ATXPBUserNotificationAppDigest.h"
#include "ATXUserNotification.h"
#include "ATXPBFaceGalleryEvent.h"
#include "ATXNotificationModeEntity.h"
#include "ATXHomeScreenConfigCache.h"
#include "ATXMPBHomeScreenAppPanelLaunchRatioTracker.h"
#include "ATXActivitySuggestionClient.h"
#include "ATXNotificationSuggestionBiomeStream.h"
#include "ATXPBUserNotificationDigestNotificationGroup.h"
#include "ATXWidgetSuggestionDismissManager.h"
#include "ATXPBActionCriteria.h"
#include "ATXFakeNotificationSettingsReader.h"
#include "ATXLockscreenEvent.h"
#include "ATXDefaultHomeScreenItemTilerGridSize4.h"
#include "ATXDigestOnboardingLogging.h"
#include "ATXHomeScreenEvent.h"
#include "ATXPBExecutableReferenceCache.h"
#include "ATXInfoEngineCachedSuggestionsEntry.h"
#include "ATXInfoEngineCachedSuggestions.h"
#include "ATXSuggestionSearchResult.h"
#include "ATXHomeScreenConfigurationDiffer.h"
#include "ATXSuggestedPagesHomeScreenModificationsMetrics.h"
#include "ATXDefaultHomeScreenItemTilerGridSize3.h"
#include "ATXActionSearchResultExecution.h"
#include "ATXModeServerRequestHandler.h"
#include "ATXPBUrgencyTuningSuggestion.h"
#include "ATXPBUserNotificationDerivedData.h"
#include "ATXPBHeuristicMetadata.h"
#include "ATXPBMissedNotificationRanking.h"
#include "ATXAppDirectoryEvent.h"
#include "ATXHomeScreenConfigurationComponents.h"
#include "ATXCGRectWrapper.h"
#include "ATXUserNotificationDigestBiomeStream.h"
#include "ATXPBFaceGallerySection.h"
#include "ATXNowPlayingEvent.h"
#include "ATXTimelineRelevanceAdoptionGlobalInfo.h"
#include "ATXUserEducationSuggestionFeedback.h"
#include "_ATXChronoServicesProviderRecord.h"
#include "_ATXChronoServicesProviderGuardedData.h"
#include "ATXChronoServicesProvider.h"
#include "ATXModeConfigurationUIFlowLoggingEvent.h"
#include "ATXNotificationManagementMAConstants.h"
#include "ATXSpotlightEventMetadata.h"
#include "ATXCacheReaderGuardedData.h"
#include "ATXCacheReader.h"
#include "ATXFallbackActions.h"
#include "ATXPBAVRouteInfo.h"
#include "ATXWatchFace.h"
#include "ATXHomeScreenConfigurationComponentsDiffer.h"
#include "ATXDefaultHomeScreenItemUpdater.h"
#include "ATXBatteryDrainBehavior.h"
#include "ATXFaceGalleryConfiguration.h"
#include "ATXDefaultHomeScreenItemUpdate.h"
#include "ATXInterruptionManagerAppSuggestions.h"
#include "ATXActivity.h"
#include "ATXPBSendMessagesToDigestSuggestion.h"
#include "ATXSearchResult.h"
#include "ATXInformationDismissRecord.h"
#include "ATXDefaultHomeScreenItemOnboardingStacks.h"
#include "ATXWidgetDwellTracker.h"
#include "ATXDNDModeConfigurationClientListener.h"
#include "ATXDNDModeConfigurationClient.h"
#include "ATXActivityTriggerSuggestion.h"
#include "ATXDigestOnboardingSuggestionLoggingBiomeStream.h"
#include "ATXDefaultWidgetSuggestion.h"
#include "ATXDefaultWidgetSuggesterClient.h"
#include "ATXSpotlightSessionMetadata.h"
#include "ATXHomeScreenSessionMetadata.h"
#include "ATXAppDirectorySessionMetadata.h"
#include "ATXFakeModeEntityScorer.h"
#include "ATXFaceGallerySection.h"
#include "ATXOnboardingStackResult.h"
#include "ATXOnboardingStackResultCache.h"
#include "ATXPBAction.h"
#include "ATXPBUserNotificationDigest.h"
#include "ATXHomeScreenEventLoggerCachedStackData.h"
#include "ATXHomeScreenEventLogger.h"
#include "ATXSpotlightClientResponse.h"
#include "ATXAppDigestSetupEntity.h"
#include "ATXEngagementRecordEntry.h"
#include "ATXComplicationsSuggestion.h"
#include "ATXPBExecutableReferenceKey.h"
#include "ATXModeFaceSuggestionsCache.h"
#include "ATXPBNotificationQuietingSuggestion.h"
#include "ATXPredictionSetBuilder.h"
#include "ATXPredictionSetReader.h"
#include "ATXAssetsAggregateLogger.h"
#include "ATXHomeScreenEventMetadata.h"
#include "ATXInformationStore.h"
#include "_ATXNotificationGroupBaseRanker.h"
#include "ATXExecutableIdentifier.h"
#include "ATXBlendingCaptureRateTracker.h"
#include "ATXDisplayIdentifiers.h"
#include "ATXDigestSetupFlowClient.h"
#include "ATXContactModeEntity.h"
#include "ATXPBSpotlightEvent.h"
#include "ATXPBDigestTimeline.h"
#include "ATXComplication.h"
#include "ATXUIEvent.h"
#include "ATXPBNotificationSmartPauseSuggestion.h"
#include "ATXNotificationDigestRankerClient.h"
#include "ATXBiomeSuggestedHomePageEvent.h"
#include "ATXPBUserNotificationLoggingEvent.h"
#include "ATXWidgetPersonality.h"
#include "ATXHomeScreenStackSuggestion.h"
#include "ATXExecutableReference.h"
#include "ATXAssetsPaths.h"
#include "ATXActivitySuggestionFeedbackLogUploader.h"
#include "ATXPosterConfiguration.h"
#include "ATXAssetsABHelper.h"
#include "ATXDefaultHomeScreenItemManager.h"
#include "ATXAggregateKeys.h"
#include "ATXDefaultHomeScreenItemRanker.h"
#include "ATXDemoAppLibraryProvider.h"
#include "ATXDigestOnboardingSuggestionLogging.h"
#include "ATXJSONHelper.h"
#include "ATXFaceGalleryEvent.h"
#include "ATXPBUserNotificationModelScore.h"
#include "ATXSuggestedPagesFilter.h"
#include "ATXWidgetDescriptorCache.h"
#include "ATXPBHomeScreenEvent.h"
#include "ATXPBUIEvent.h"
#include "ATXNotificationDeliverySuggestion.h"
#include "ATXDigestOnboardingLoggingBiomeStream.h"
#include "ATXModeConfigurationUIFlowLoggingBiomeStream.h"
#include "ATXPBExecutableReferenceEntry.h"
#include "ATXAVRoutingUtils.h"
#include "ATXPBHomeScreenWidgetIdentifiable.h"
#include "ATXDefaultHomeScreenItemAppLaunchScorer.h"
#include "ATXSleepSuggestion.h"
#include "ATXInfoToBlendingConfidenceMapper.h"
#include "ATXSearchFeedbackListener.h"
#include "ATXSearchFeedbackListenerTargetBiomeStream.h"
#include "ATXPBUserNotificationEnums.h"
#include "ATXMissedNotificationRankingLoggingEvent.h"
#include "ATXPBAppDirectoryEventMetadata.h"
#include "ATXNotificationDigestGeneratorClient.h"
#include "ATXProactiveSuggestionClient.h"
#include "ATXMetrics.h"
#include "ATXTrialClientWrapper.h"
#include "ATXSpotlightClient.h"
#include "ATXNotificationGroupEventBiomeStream.h"
#include "ATXPBSharedDigestEngagementTrackingMetrics.h"
#include "ATXSuggestionLayoutPreviewProducer.h"
#include "ATXMPBBlendingCaptureRateTracker.h"
#include "ATXAssets2.h"
#include "ATXShortcutsAction.h"
#include "ATXPBNotificationPromotingSuggestion.h"
#include "ATXUserEducationSuggestionClient.h"
#include "ATXUserEducationSuggestionClientRequestHandler.h"
#include "ATXPBActivity.h"
#include "ATXScoredPrediction.h"
#include "ATXContext.h"
#include "ATXNotificationScorer.h"
#include "ATXUserNotificationDigestNotificationGroup.h"
#include "ATXAppPanelLaunchRatioLogger.h"
#include "ATXSlotResolutionParameters.h"
#include "ATXUserNotificationModelScore.h"
#include "ATXResponse.h"
#include "ATXMPBAppLaunchOverallCaptureRateTracker.h"
#include "ATXHomeScreenApp.h"
#include "ATXHomeScreenFolderPage.h"
#include "ATXHomeScreenFolder.h"
#include "ATXHomeScreenWebClip.h"
#include "ATXHomeScreenShortcut.h"
#include "ATXHomeScreenPage.h"
#include "ATXSpotlightEvent.h"
#include "ATXPosterSwitch.h"
#include "ATXExecutableReferencePair.h"
#include "ATXExecutableReferenceManager.h"
#include "ATXScorableTimeDNDModeWrapper.h"
#include "ATXDefaultHomeScreenItemProducerUtilities.h"
#include "ATXPosterDescriptor.h"
#include "ATXPBLockscreenEvent.h"
#include "ATXPBNotificationDeliverySuggestion.h"
#include "ATXPBFaceGalleryItem.h"
#include "ATXSuggestedPagesLayoutOptions.h"
#include "ATXPBInterruptionManagerTuningSuggestion.h"
#include "ATXSlotSet.h"
