// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFOCUSMODECONTACTSMETRICLOGGER_H
#define ATXFOCUSMODECONTACTSMETRICLOGGER_H

@class NSMutableDictionary, ATXDNDModeConfigurationClient, ATXModeEntityTrialClientWrapper, ATXTrainDenyListWithDenyListModels;

#import <Foundation/Foundation.h>

#import "ATXContactModeEntityModelWeights.h"
#import "ATXContactModeEntityDenyListModelWeights.h"
#import "ATXStableContactRepresentationDatastore.h"

@interface ATXFocusModeContactsMetricLogger : NSObject {
    NSMutableDictionary *_cachedContactScores;
    NSMutableDictionary *_cachedContactScoresForDenyList;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
    ATXContactModeEntityModelWeights *_contactModeEntityModelWeights;
    ATXContactModeEntityDenyListModelWeights *_contactModeEntityDenyListModelWeights;
    ATXTrainDenyListWithDenyListModels *_trainedDenyListWithDenyListModels;
    ATXStableContactRepresentationDatastore *_stableContactRepresentationDatastore;
}




-(BOOL)trainedContactDenyListWithDenyListModel;
-(id)contactScoresForDenyListForMode:(NSUInteger)arg0 ;
-(id)contactScoresForMode:(NSUInteger)arg0 ;
-(id)fetchRelevantContactIdsWithModeConfigurationUIFlowLoggingEvent:(id)arg0 suggestedEntities:(id)arg1 candidateEntities:(id)arg2 currentEntities:(id)arg3 ;
-(id)init;
-(id)metricFieldsToFeatureNames;
-(void)addContactEntitySpecificFeatures:(id)arg0 toMetric:(id)arg1 ;
-(void)logFocusModeContactSignalsWithModeConfigurationUIFlowLoggingEvent:(id)arg0 xpcActivity:(id)arg1 ;
-(void)populateContactModeAffinitySignalsForMode:(NSUInteger)arg0 contactId:(id)arg1 metric:(id)arg2 ;
-(void)populateContactModeDenyListSignalsForMode:(NSUInteger)arg0 contactId:(id)arg1 metric:(id)arg2 ;


@end


#endif