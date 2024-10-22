

#include "HDHRElectrocardiogramRecordingV1SettingsProvider.h"
#include "HKHRAFibBurdenSevenDayAnalysisScheduler.h"
#include "HKHRAFibBurdenAnalyzer.h"
#include "HDHRAFibBurdenAnalysisAnalyticsEvent.h"
#include "HDHRAFibBurdenProfileExtensionComponents.h"
#include "HDHRSampleClassificationEntity.h"
#include "HDHeartRateProfileExtension.h"
#include "HDHRIrregularRhythmNotificationsV1FeatureAvailabilityManager.h"
#include "HKHRDatabaseAnalysisSchedulerGatedActivityFactoryImpl.h"
#include "HKHRDatabaseAnalysisSchedulerDatabaseAssertionProviderImpl.h"
#include "HKHRDatabaseAnalysisSchedulerImpl.h"
#include "HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspector.h"
#include "HDHRIrregularRhythmNotificationsSettingMigrator.h"
#include "HDHRElectrocardiogramRecordingAutomaticUpgradeCriteria.h"
#include "HKHRJulianDayTimeZoneState.h"
#include "HKHRAFibBurdenJulianDayMajorityTimeZoneDeterminer.h"
#include "HDHeartPluginUnprotectedDatabaseSchema.h"
#include "HDHeartbeatSeriesFeatureStatusManagerServer.h"
#include "BerylliumBurdenDeterminer.h"
#include "HDHRNotificationAnalytics.h"
#include "HDHRElectrocardiogramRecordingV2PairedFeatureAttributesProvider.h"
#include "HDHRAFibBurdenHistogramQueryServer.h"
#include "HDHRNotificationMetric.h"
#include "HDHRAFibBurdenNotificationManager.h"
#include "HDHRDailyHeartRateManager.h"
#include "HDHRAFibBurdenRescindedNotificationManager.h"
#include "HDHRAFibBurdenDailyAnalyticsEvent.h"
#include "HDHRHealthLiteDataCollector.h"
#include "HRAtrialFibrillationConfirmationCycleMetric.h"
#include "HDHRCardioFitnessBackgroundFeatureDeliverySettingsProvider.h"
#include "HDHRAFibBurdenDemoDataGenerator.h"
#include "HKHRAFibBurdenTachogramClassificationsRetriever.h"
#include "HDHRIrregularRhythmNotificationsAutomaticUpgradeCriteria.h"
#include "HDHRIrregularRhythmNotificationsV1SettingsProvider.h"
#include "HDHeartbeatSeriesFeatureStatusManager.h"
#include "HDHeartDaemonExtension.h"
#include "HKHRAFibBurdenTachogramClassificationProvider.h"
#include "HDHRHeartRateNotificationsFeatureAvailabilityManager.h"
#include "HKHRCardioFitnessFeatureStatusManagerServer.h"
#include "HDHRPairedSyncStateProvider.h"
#include "HDHRElectrocardiogramRecordingV1RegionAvailabilityProvider.h"
#include "HDHRElectrocardiogramRecordingV1PairedFeatureAttributesProvider.h"
#include "HDHRCardioFitnessAnalyticsDailyEventDataSource.h"
#include "HDHRNotificationManager.h"
#include "HDHRElectrocardiogramRecordingCommonFeatureAvailabilityManager.h"
#include "HDHRCardioFitnessAnalyticsSignalSource.h"
#include "HKHRAFibBurdenTachogramClassificationsBuilder.h"
#include "HDHeartDaemonPlugin.h"
#include "HDHeartPluginProtectedDatabaseSchema.h"
#include "HDHRCardioFitnessFeatureAvailabilityManager.h"
#include "HKHRAFibBurdenSevenDayAnalysisSchedulerXPCAlarm.h"
#include "HDHRCardioFitnessAnalyticsDailyEventActivity.h"
#include "HKHRStubbedAFibBurdenSevenDayAnalysisModeDeterminer.h"
#include "HDHRAFibBurdenControlServer.h"
#include "HKHRAFibBurdenTachogramClassifierFactory.h"
#include "HKHRAFibBurdenSevenDayAnalysisModeDeterminer.h"
#include "HDHRAFibBurdenBiomeFocusModeDeterminer.h"
#include "HDHRAFibBurdenNotificationAnalyticsEvent.h"
#include "HDHRCardioFitnessStoreServer.h"
#include "HDHRIrregularRhythmNotificationsFeatureAvailabilityManager.h"
#include "HDHRHeartbeatSeriesFeatureExclusivityManager.h"
#include "HDHRAFibBurdenNotificationMode.h"
#include "HDHRAFibBurdenNotificationModeDeterminer.h"
#include "HKHRAFibBurdenSevenDayAnalysisManager.h"
#include "HDHRElectrocardiogramRecordingFeatureAvailabilityManager.h"
