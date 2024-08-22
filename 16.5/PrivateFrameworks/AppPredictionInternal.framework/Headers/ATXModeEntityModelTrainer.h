// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEENTITYMODELTRAINER_H
#define ATXMODEENTITYMODELTRAINER_H

@class NSString, ATXTrainDenyListWithDenyListModels;

#import <Foundation/Foundation.h>

#import "ATXModeEntityStore.h"
#import "ATXGlobalAppModeAffinityModel.h"
#import "ATXGlobalInterruptingAppModel.h"
#import "ATXGlobalWidgetPopularityModel.h"

@interface ATXModeEntityModelTrainer : NSObject {
    NSString *_cacheBasePath;
    ATXModeEntityStore *_modeEntityStore;
    ATXGlobalAppModeAffinityModel *_globalAppModeAffinityModel;
    ATXGlobalInterruptingAppModel *_globalInterruptingAppModel;
    ATXTrainDenyListWithDenyListModels *_trainDenyListWithDenyListModels;
    ATXGlobalWidgetPopularityModel *_globalWidgetPopularityModel;
}




+(CGFloat)maxScoreWithThresholdGivenModeEntityScores:(id)arg0 ;
+(CGFloat)scoreThresholdGivenModeEntityScores:(id)arg0 modeEntityTypeIdentifier:(id)arg1 modeConfigurationType:(NSInteger)arg2 ;
+(id)eventProviderForMode:(NSUInteger)arg0 ;
+(id)eventProviderForScorableTime:(id)arg0 ;
+(id)thresholdedModeEntityScores:(id)arg0 modeEntityTypeIdentifier:(id)arg1 threshold:(CGFloat)arg2 ;
-(BOOL)persistModeEntityScores:(id)arg0 modeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2 modeConfigurationType:(NSInteger)arg3 ;
-(BOOL)shouldDeferTrainingDueToRestoredBackup;
-(BOOL)shouldDeferTrainingDueToUpgrade;
-(BOOL)shouldTrainWithAppModeEntityDenyListModel;
-(BOOL)shouldTrainWithContactModeEntityDenyListModel;
-(id)init;
-(id)initWithCacheBasePath:(id)arg0 modeEntityStore:(id)arg1 globalAppModeAffinityModel:(id)arg2 globalInterruptingAppModel:(id)arg3 globalWidgetPopularityModel:(id)arg4 ;
-(id)pathForModeEntityTypeIdentifier:(id)arg0 modeIdentifier:(id)arg1 modeConfigurationType:(NSInteger)arg2 ;
-(void)train;
-(void)trainModeAffinityModelsForDenyListWithModeAffinityScoresForApps:(id)arg0 scoresForContacts:(id)arg1 xpcActivity:(id)arg2 ;
-(void)trainModeEntityDenyListModels:(id)arg0 shouldTrainAppDenyListModel:(BOOL)arg1 shouldTrainContactDenyListModel:(BOOL)arg2 shouldSkipRetrainingIfTrainedRecently:(BOOL)arg3 ;
-(void)trainWithShouldDeferTrainingOnBackupRestoreOrUpgrade:(BOOL)arg0 ;
-(void)trainWithXPCActivity:(id)arg0 ;
-(void)trainWithXPCActivity:(id)arg0 shouldSkipRetrainingIfTrainedRecently:(BOOL)arg1 shouldDeferTrainingOnRestoreOrUpgrade:(BOOL)arg2 ;


@end


#endif