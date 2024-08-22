// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPREDICTIONDATAHISTOGRAMS_H
#define ATXPREDICTIONDATAHISTOGRAMS_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "_ATXAppLaunchCategoricalHistogram.h"
#import "_ATXAppLaunchHistogram.h"
#import "ATXHistogramBundleIdTable.h"
#import "_ATXAppInfoManager.h"
#import "_ATXAppLaunchSequenceManager.h"

@interface ATXPredictionDataHistograms : NSObject

@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *actionConfirmsHistogram; // ivar: _actionConfirmsHistogram
@property (readonly, nonatomic) NSArray *actionKeyBasedHistograms;
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *actionRejectsHistogram; // ivar: _actionRejectsHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *activitySuggestionsFeedbackHistogram; // ivar: _activitySuggestionsFeedbackHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *airplaneModeLaunchHistogram; // ivar: _airplaneModeLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appClipsFeedbackHistogram; // ivar: _appClipsFeedbackHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appClipsFeedbackHistogramNoDecay; // ivar: _appClipsFeedbackHistogramNoDecay
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appCoarseGeoHashHistogram; // ivar: _appCoarseGeoHashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appCoarseTimePOWLocationConfirmsHistogram; // ivar: _appCoarseTimePOWLocationConfirmsHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appCoarseTimePOWLocationLaunchesHistogram; // ivar: _appCoarseTimePOWLocationLaunchesHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appCoarseTimePOWLocationRejectsHistogram; // ivar: _appCoarseTimePOWLocationRejectsHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appConfirmsCoarseGeoHash; // ivar: _appConfirmsCoarseGeoHash
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appConfirmsDayOfWeek; // ivar: _appConfirmsDayOfWeek
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appConfirmsSpecificGeoHash; // ivar: _appConfirmsSpecificGeoHash
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appConfirmsTwoHourTimeInterval; // ivar: _appConfirmsTwoHourTimeInterval
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsCoarseGeohashHistogram; // ivar: _appDirectoryConfirmsCoarseGeohashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsCoarseTimePOWLocationHistogram; // ivar: _appDirectoryConfirmsCoarseTimePOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsDayOfWeekHistogram; // ivar: _appDirectoryConfirmsDayOfWeekHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsSpecificGeohashHistogram; // ivar: _appDirectoryConfirmsSpecificGeohashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsSpecificTimeDOWLocationHistogram; // ivar: _appDirectoryConfirmsSpecificTimeDOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryConfirmsTwoHourTimeIntervalHistogram; // ivar: _appDirectoryConfirmsTwoHourTimeIntervalHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryExplicitRejectsCoarseTimePOWLocationHistogram; // ivar: _appDirectoryExplicitRejectsCoarseTimePOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appDirectoryLaunchHistogram; // ivar: _appDirectoryLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsCoarseGeohashHistogram; // ivar: _appDirectoryRejectsCoarseGeohashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsCoarseTimePOWLocationHistogram; // ivar: _appDirectoryRejectsCoarseTimePOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsDayOfWeekHistogram; // ivar: _appDirectoryRejectsDayOfWeekHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsSpecificGeohashHistogram; // ivar: _appDirectoryRejectsSpecificGeohashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsSpecificTimeDOWLocationHistogram; // ivar: _appDirectoryRejectsSpecificTimeDOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appDirectoryRejectsTwoHourTimeIntervalHistogram; // ivar: _appDirectoryRejectsTwoHourTimeIntervalHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appExplicitRejectsCoarseTimePOWLocationHistogram; // ivar: _appExplicitRejectsCoarseTimePOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appForAllIntentsAirplaneModeLaunchHistogram; // ivar: _appForAllIntentsAirplaneModeLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appForAllIntentsCoreMotionLaunchHistogram; // ivar: _appForAllIntentsCoreMotionLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appForAllIntentsDayOfWeekHistogram; // ivar: _appForAllIntentsDayOfWeekHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appForAllIntentsLaunchHistogram; // ivar: _appForAllIntentsLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appForAllIntentsTrendingLaunchHistogram; // ivar: _appForAllIntentsTrendingLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appForAllIntentsUnlockTimeHistogram; // ivar: _appForAllIntentsUnlockTimeHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appForAllIntentsWifiHistogram; // ivar: _appForAllIntentsWifiHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appIntentAirplaneModeLaunchHistogram; // ivar: _appIntentAirplaneModeLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appIntentCoreMotionLaunchHistogram; // ivar: _appIntentCoreMotionLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appIntentDayOfWeekHistogram; // ivar: _appIntentDayOfWeekHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appIntentLaunchHistogram; // ivar: _appIntentLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appIntentPartOfWeekHistogram; // ivar: _appIntentPartOfWeekHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appIntentTrendingLaunchHistogram; // ivar: _appIntentTrendingLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appIntentUnlockTimeHistogram; // ivar: _appIntentUnlockTimeHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appIntentWifiHistogram; // ivar: _appIntentWifiHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *appLaunchHistogram; // ivar: _appLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appLaunchesTwoHourTimeInterval; // ivar: _appLaunchesTwoHourTimeInterval
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appRejectsCoarseGeoHash; // ivar: _appRejectsCoarseGeoHash
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appRejectsDayOfWeek; // ivar: _appRejectsDayOfWeek
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appRejectsSpecificGeoHash; // ivar: _appRejectsSpecificGeoHash
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appRejectsTwoHourTimeInterval; // ivar: _appRejectsTwoHourTimeInterval
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appSpecificGeoHashHistogram; // ivar: _appSpecificGeoHashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appSpecificTimeDOWLocationConfirmsHistogram; // ivar: _appSpecificTimeDOWLocationConfirmsHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appSpecificTimeDOWLocationLaunchesHistogram; // ivar: _appSpecificTimeDOWLocationLaunchesHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appSpecificTimeDOWLocationRejectsHistogram; // ivar: _appSpecificTimeDOWLocationRejectsHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *appZoom7GeoHashHistogram; // ivar: _appZoom7GeoHashHistogram
@property (readonly, nonatomic) ATXHistogramBundleIdTable *bundleIdTable; // ivar: _bundleIdTable
@property (readonly, nonatomic) NSDictionary *categoricalHistogramTypes; // ivar: _categoricalHistogramTypes
@property (readonly, nonatomic) NSArray *categoricalHistograms; // ivar: _categoricalHistograms
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *coreMotionLaunchHistogram; // ivar: _coreMotionLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *dayOfWeekLaunchHistogram; // ivar: _dayOfWeekLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *heuristicConfirmsHistogram; // ivar: _heuristicConfirmsHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *heuristicRejectsHistogram; // ivar: _heuristicRejectsHistogram
@property (readonly, nonatomic) NSDictionary *histogramTypes; // ivar: _histogramTypes
@property (readonly, nonatomic) NSArray *histograms; // ivar: _histograms
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsCoarseGeohashHistogram; // ivar: _homeScreenAppConfirmsCoarseGeohashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsCoarseTimePOWLocationHistogram; // ivar: _homeScreenAppConfirmsCoarseTimePOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsDayOfWeekHistogram; // ivar: _homeScreenAppConfirmsDayOfWeekHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsSpecificGeohashHistogram; // ivar: _homeScreenAppConfirmsSpecificGeohashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsSpecificTimeDOWLocationHistogram; // ivar: _homeScreenAppConfirmsSpecificTimeDOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppConfirmsTwoHourTimeIntervalHistogram; // ivar: _homeScreenAppConfirmsTwoHourTimeIntervalHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppExplicitRejectsCoarseTimePOWLocationHistogram; // ivar: _homeScreenAppExplicitRejectsCoarseTimePOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsCoarseGeohashHistogram; // ivar: _homeScreenAppRejectsCoarseGeohashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsCoarseTimePOWLocationHistogram; // ivar: _homeScreenAppRejectsCoarseTimePOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsDayOfWeekHistogram; // ivar: _homeScreenAppRejectsDayOfWeekHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsSpecificGeohashHistogram; // ivar: _homeScreenAppRejectsSpecificGeohashHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsSpecificTimeDOWLocationHistogram; // ivar: _homeScreenAppRejectsSpecificTimeDOWLocationHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenAppRejectsTwoHourTimeIntervalHistogram; // ivar: _homeScreenAppRejectsTwoHourTimeIntervalHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *homeScreenWidgetInteractionHistogram; // ivar: _homeScreenWidgetInteractionHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *homescreenLaunchHistogram; // ivar: _homescreenLaunchHistogram
@property (readonly, nonatomic) _ATXAppInfoManager *infoManager; // ivar: _infoManager
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *notificationDigestAlltimeMarqueeAppearancesHistogram; // ivar: _notificationDigestAlltimeMarqueeAppearancesHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *notificationDigestAppEngagementHistogram; // ivar: _notificationDigestAppEngagementHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *notificationsHistoryHistogram; // ivar: _notificationsHistoryHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *poiCategoryHistogram; // ivar: _poiCategoryHistogram
@property (readonly, nonatomic) _ATXAppLaunchSequenceManager *seqManager; // ivar: _seqManager
@property (readonly, nonatomic) _ATXAppLaunchHistogram *spotlightLaunchHistogram; // ivar: _spotlightLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *timeAndDayHistogram; // ivar: _timeAndDayHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *trendingLaunchHistogram; // ivar: _trendingLaunchHistogram
@property (readonly, nonatomic) _ATXAppLaunchHistogram *unlockTimeHistogram; // ivar: _unlockTimeHistogram
@property (readonly, nonatomic) _ATXAppLaunchCategoricalHistogram *wifiLaunchHistogram; // ivar: _wifiLaunchHistogram


-(id)allHistograms;
-(id)init;
-(id)initPersistentHistogramsWithAppInfoManager:(id)arg0 bundleIdTable:(id)arg1 launchSequenceManager:(id)arg2 dataStore:(id)arg3 ;
-(id)initWithAppInfoManager:(id)arg0 bundleIdTable:(id)arg1 launchSequenceManager:(id)arg2 histogramManager:(id)arg3 ;
-(id)initWithAppInfoManager:(id)arg0 bundleIdTable:(id)arg1 launchSequenceManager:(id)arg2 histogramManager:(id)arg3 dataStore:(id)arg4 persistHistograms:(BOOL)arg5 ;
-(void)removeExpiredData;
-(void)verifyHistograms;


@end


#endif