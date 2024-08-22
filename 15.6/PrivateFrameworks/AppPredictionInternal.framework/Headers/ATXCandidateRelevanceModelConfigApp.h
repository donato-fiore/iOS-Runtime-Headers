// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCANDIDATERELEVANCEMODELCONFIGAPP_H
#define ATXCANDIDATERELEVANCEMODELCONFIGAPP_H



#import "ATXCandidateRelevanceModelConfig.h"
#import "ATXAppPredictionBlacklist.h"
#import "ATXDigitalHealthBlacklist.h"
#import "_ATXRecentInstallCache.h"

@interface ATXCandidateRelevanceModelConfigApp : ATXCandidateRelevanceModelConfig

@property (retain, nonatomic) ATXAppPredictionBlacklist *appBlacklist; // ivar: _appBlacklist
@property (retain, nonatomic) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist; // ivar: _appDigitalHealthBlacklist
@property (retain, nonatomic) _ATXRecentInstallCache *recentInstallCache; // ivar: _recentInstallCache


-(BOOL)bundleIdIsEnabledForPrediction:(id)arg0 ;
-(BOOL)candidateIsStillValidToSuggest:(id)arg0 ;
-(id)appInstallAgesForAppsWithExcludedApps:(id)arg0 appInfoManager:(id)arg1 ;
-(id)candidatePublisherFromStartTime:(CGFloat)arg0 ;
-(id)datasetGenerator;
-(id)heuristicSuggestionsForContext:(id)arg0 currentSuggestionExecutableIds:(id)arg1 ;
-(id)heuristicSuggestionsForContext:(id)arg0 currentSuggestionExecutableIds:(id)arg1 appInfoManager:(id)arg2 ;
-(id)init;
-(id)proactiveSuggestionForBundleId:(id)arg0 prediction:(float)arg1 ;
-(id)proactiveSuggestionForCandidate:(id)arg0 prediction:(float)arg1 ;
-(id)recentlyInstalledAndNotLaunchedAppsFromAppInfoManager:(id)arg0 currentSuggestionExecutableIds:(id)arg1 launchedApps:(id)arg2 ;
-(id)recentlyLaunchedAppsFromAppLaunchAges:(id)arg0 ;


@end


#endif