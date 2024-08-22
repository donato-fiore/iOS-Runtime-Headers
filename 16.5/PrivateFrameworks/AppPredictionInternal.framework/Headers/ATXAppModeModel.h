// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPMODEMODEL_H
#define ATXAPPMODEMODEL_H

@protocol ATXModeEntityEventProviderProtocol;

#import <Foundation/Foundation.h>

#import "ATXModeEntityStore.h"
#import "ATXAppModeEntityModelWeights.h"
#import "ATXGlobalAppModeAffinityModel.h"
#import "ATXNotificationAndSuggestionDatastore.h"
#import "ATXDenyListEligibilityThresholds.h"
#import "ATXAppNotificationEngagementEventProvider.h"
#import "ATXAppInterruptionsEventProvider.h"

@interface ATXAppModeModel : NSObject {
    NSUInteger _mode;
    ATXModeEntityStore *_modeEntityStore;
    ATXAppModeEntityModelWeights *_appModeEntityModelWeights;
    ATXGlobalAppModeAffinityModel *_globalAppModeAffinityModel;
    ATXNotificationAndSuggestionDatastore *_notificationDatastore;
    ATXDenyListEligibilityThresholds *_denyListThresholds;
    ATXAppNotificationEngagementEventProvider *_appNotificationEngagementEventProvider;
    ATXAppInterruptionsEventProvider *_appInterruptionsEventProvider;
    id<ATXModeEntityEventProviderProtocol> *_modeEventProvider;
}




-(BOOL)shouldSuggestBundleIdForDenyList:(id)arg0 scoreInOtherMode:(CGFloat)arg1 scoreInCurrentMode:(CGFloat)arg2 ;
-(CGFloat)scoreFromCorrelationStatistics:(id)arg0 ;
-(id)initWithMode:(NSUInteger)arg0 modeEntityStore:(id)arg1 globalAppModeAffinityModel:(id)arg2 ;
-(id)scoredAppModeEntityWithAppFeatures:(id)arg0 bundleId:(id)arg1 ;
-(id)scoredEntities;
-(id)scoredEntitiesForDenyListWithScoresAcrossAllModes:(id)arg0 ;
-(void)addAppInterruptingSignalsForIdentifier:(id)arg0 toAppSpecificFeatures:(id)arg1 ;
-(void)addEntitySpecificFeaturesToAppFeatures:(id)arg0 ;
-(void)addGlobalModeAffinityPriorsForIdentifier:(id)arg0 toAppSpecificFeatures:(id)arg1 ;
-(void)addNotificationsSignalsForIdentifier:(id)arg0 toAppSpecificFeatures:(id)arg1 ;


@end


#endif