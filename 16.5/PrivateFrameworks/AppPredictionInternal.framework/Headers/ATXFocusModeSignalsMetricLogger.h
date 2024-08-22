// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFOCUSMODESIGNALSMETRICLOGGER_H
#define ATXFOCUSMODESIGNALSMETRICLOGGER_H

@class NSMutableDictionary, ATXDNDModeConfigurationClient, ATXModeEntityTrialClientWrapper, ATXTrainDenyListWithDenyListModels;

#import <Foundation/Foundation.h>

#import "ATXAppModeEntityModelWeights.h"
#import "ATXAppModeEntityDenyListModelWeights.h"
#import "ATXModeEntityStore.h"
#import "ATXGlobalAppModeAffinityModel.h"
#import "ATXGlobalInterruptingAppModel.h"
#import "ATXGlobalWidgetPopularityModel.h"

@interface ATXFocusModeSignalsMetricLogger : NSObject {
    NSMutableDictionary *_cachedAppScores;
    NSMutableDictionary *_cachedAppScoresForDenyList;
    NSMutableDictionary *_cachedWidgetScores;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXAppModeEntityModelWeights *_appModeEntityModelWeights;
    ATXAppModeEntityDenyListModelWeights *_appModeEntityDenyListModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
    ATXModeEntityStore *_modeEntityStore;
    ATXGlobalAppModeAffinityModel *_globalAppModeAffinityModel;
    ATXGlobalInterruptingAppModel *_globalInterruptingAppModel;
    ATXGlobalWidgetPopularityModel *_globalWidgetPopularityModel;
    ATXTrainDenyListWithDenyListModels *_trainedDenyListWithDenyListModels;
}




-(BOOL)trainedAppDenyListWithDenyListModel;
-(NSUInteger)logWidgetSignalsForMode:(NSUInteger)arg0 modeAffinitySignals:(id)arg1 entitiesLogged:(NSUInteger)arg2 ;
-(id)appScoresForDenyListForMode:(NSUInteger)arg0 ;
-(id)appScoresForMode:(NSUInteger)arg0 ;
-(id)fetchRelevantBundleIdsWithModeConfigurationUIFlowLoggingEvent:(id)arg0 suggestedEntities:(id)arg1 candidateEntities:(id)arg2 currentEntities:(id)arg3 ;
-(id)init;
-(id)metricFieldsToFeatureNames;
-(id)widgetScoresForMode:(NSUInteger)arg0 ;
-(void)addAppEntitySpecificFeatures:(id)arg0 toMetric:(id)arg1 ;
-(void)logFocusModeAppSignalsWithModeConfigurationUIFlowLoggingEvent:(id)arg0 xpcActivity:(id)arg1 ;
-(void)logFocusModeWidgetSignalsWithXPCActivity:(id)arg0 ;
-(void)populateAppModeAffinitySignalsForMode:(NSUInteger)arg0 bundleId:(id)arg1 metric:(id)arg2 ;
-(void)populateAppModeDenyListSignalsForMode:(NSUInteger)arg0 bundleId:(id)arg1 metric:(id)arg2 ;
-(void)populateWidgetModeAffinitySignalsForMode:(NSUInteger)arg0 metric:(id)arg1 modeEntity:(id)arg2 ;


@end


#endif