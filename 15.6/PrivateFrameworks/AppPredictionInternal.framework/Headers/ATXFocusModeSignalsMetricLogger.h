// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXFOCUSMODESIGNALSMETRICLOGGER_H
#define ATXFOCUSMODESIGNALSMETRICLOGGER_H

@class NSMutableDictionary, ATXDNDModeConfigurationClient;

#import <Foundation/Foundation.h>

#import "ATXAppModeEntityModelWeights.h"

@interface ATXFocusModeSignalsMetricLogger : NSObject {
    NSMutableDictionary *_cachedAppScores;
    NSMutableDictionary *_cachedWidgetScores;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXAppModeEntityModelWeights *_appModeEntityModelWeights;
}




-(NSUInteger)logWidgetSignalsForMode:(NSUInteger)arg0 modeAffinitySignals:(id)arg1 entitiesLogged:(NSUInteger)arg2 ;
-(id)appCategoryScoreFromFeatureVector:(id)arg0 ;
-(id)appScoresForMode:(NSUInteger)arg0 ;
-(id)fetchRelevantBundleIdsWithModeConfigurationUIFlowLoggingEvent:(id)arg0 suggestedEntities:(id)arg1 currentEntities:(id)arg2 ;
-(id)init;
-(id)metricFieldsToFeatureNames;
-(id)widgetScoresForMode:(NSUInteger)arg0 ;
-(void)logFocusModeAppSignalsWithModeConfigurationUIFlowLoggingEvent:(id)arg0 xpcActivity:(id)arg1 ;
-(void)logFocusModeWidgetSignalsWithXPCActivity:(id)arg0 ;
-(void)populateAppModeAffinitySignalsForMode:(NSUInteger)arg0 bundleId:(id)arg1 metric:(id)arg2 ;
-(void)populateWidgetModeAffinitySignalsForMode:(NSUInteger)arg0 metric:(id)arg1 modeEntity:(id)arg2 ;


@end


#endif