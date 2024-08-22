// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPFEATURIZER_H
#define ATXAPPFEATURIZER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "ATXBBNotificationManager.h"
#import "_ATXFeedback.h"
#import "_ATXAppLaunchHistogramManager.h"
#import "_ATXAppLaunchSequenceManager.h"
#import "_ATXAppLaunchLocation.h"
#import "_ATXAppInstallMonitor.h"
#import "ATXAppLaunchMicroLocation.h"
#import "ATXMediaApplications.h"
#import "_ATXAppDailyDose.h"
#import "ATXGlobalAppScorePredictor.h"
#import "ATXGlobalSmartSuppression.h"
#import "_ATXAppInfoManager.h"
#import "_ATXAppIconState.h"
#import "ATXMagicalMomentsUpdateMonitor.h"
#import "ATXHeroDataServer.h"
#import "ATXHeroPoiManager.h"

@interface ATXAppFeaturizer : NSObject {
    ATXBBNotificationManager *_notificationManager;
    _ATXFeedback *_feedback;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXAppLaunchSequenceManager *_appLaunchSequenceManager;
    _ATXAppLaunchLocation *_appLaunchLocation;
    _ATXAppInstallMonitor *_appInstallMonitor;
    ATXAppLaunchMicroLocation *_microLocation;
    ATXMediaApplications *_mediaApps;
    _ATXAppDailyDose *_appDailyDose;
    ATXGlobalAppScorePredictor *_globalAppScorePredictor;
    ATXGlobalSmartSuppression *_globalSmartSuppression;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppIconState *_appIconState;
    ATXMagicalMomentsUpdateMonitor *_mmPredictionMonitor;
    ATXHeroDataServer *_heroPredictionServer;
    ATXHeroPoiManager *_heroPoiManager;
    NSDictionary *_dayZeroParameters;
    NSDictionary *_dayZeroIntentParameters;
}




+(BOOL)_predictNextAppLaunchEmbedding:(id)arg0 into:(*float)arg1 launchSequence:(id)arg2 ;
+(CGFloat)time:(CGFloat)arg0 toAccuracyInSeconds:(CGFloat)arg1 ;
+(float)_computeL2DistanceFromBundleId:(id)arg0 to:(*float)arg1 app2vecMapping:(id)arg2 ;
-(?)evaluateFeaturesForApps:(?)arg0 clipBundleIdsToRank:(?)arg1 consumerSubType:(?)arg2 intent:(?)arg3 scoreLogger:(?)arg4 contextfeatureCache;
-(id)init;
-(id)initWithDayZeroParameters:(id)arg0 dayZeroIntentParameters:(id)arg1 feedback:(id)arg2 appLaunchHistogramManager:(id)arg3 appLaunchSequenceManager:(id)arg4 appLaunchLocation:(id)arg5 appInstallMontior:(id)arg6 mediaApplications:(id)arg7 appDailyDose:(id)arg8 globalAppScorePredictor:(id)arg9 globalSmartSuppression:(id)arg10 appInfoManager:(id)arg11 magicalMomentsUpdateMonitor:(id)arg12 heroAppPredictions:(id)arg13 appIconState:(id)arg14 appLaunchMicroLocation:(id)arg15 notificationManager:(id)arg16 ;
-(id)initWithDayZeroParameters:(id)arg0 dayZeroIntentParameters:(id)arg1 feedback:(id)arg2 appLaunchHistogramManager:(id)arg3 appLaunchSequenceManager:(id)arg4 appLaunchLocation:(id)arg5 appInstallMontior:(id)arg6 mediaApplications:(id)arg7 appDailyDose:(id)arg8 globalAppScorePredictor:(id)arg9 globalSmartSuppression:(id)arg10 appInfoManager:(id)arg11 magicalMomentsUpdateMonitor:(id)arg12 heroAppPredictions:(id)arg13 appIconState:(id)arg14 appLaunchMicroLocation:(id)arg15 notificationManager:(id)arg16 heroPoiManager:(id)arg17 ;
-(void)setDistributionBasedScoreInputsForItem:(struct ATXPredictionItem *)arg0 withGeoHashResolution:(NSUInteger)arg1 withGeoHashLaunchCounts:(id)arg2 ;
-(void)setDistributionBasedScoreInputsForTimeAndDay:(struct ATXPredictionItem *)arg0 forBundleId:(id)arg1 withTimeOfDayHistogram:(id)arg2 withDayOfWeekHistogram:(id)arg3 ;
-(void)setModeAffinityScores:(struct ATXPredictionItem *)arg0 appModeEntityScores:(id)arg1 ;
-(void)setZeroValuesForModeEntityFeatures:(struct ATXPredictionItem *)arg0 ;


@end


#endif