// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPPMODEDENYLISTMODEL_H
#define ATXAPPMODEDENYLISTMODEL_H


#import <Foundation/Foundation.h>

#import "ATXModeEntityStore.h"
#import "ATXAppModeEntityDenyListModelWeights.h"
#import "ATXGlobalInterruptingAppModel.h"
#import "ATXNotificationAndSuggestionDatastore.h"

@interface ATXAppModeDenyListModel : NSObject {
    NSUInteger _mode;
    ATXModeEntityStore *_modeEntityStore;
    ATXAppModeEntityDenyListModelWeights *_appModeEntityDenyListModelWeights;
    ATXGlobalInterruptingAppModel *_globalInterruptingAppModel;
    ATXNotificationAndSuggestionDatastore *_notificationDatastore;
}




-(CGFloat)scoreFromCorrelationStatistics:(id)arg0 ;
-(id)initWithMode:(NSUInteger)arg0 modeEntityStore:(id)arg1 globalInterruptingAppModel:(id)arg2 ;
-(id)scoredAppModeEntityWithAppFeatures:(id)arg0 bundleId:(id)arg1 ;
-(id)scoredEntities;
-(void)addEntitySpecificFeaturesToAppFeatures:(id)arg0 ;
-(void)addGlobalModeInterruptingPriorsForIdentifier:(id)arg0 toAppSpecificFeatures:(id)arg1 ;


@end


#endif