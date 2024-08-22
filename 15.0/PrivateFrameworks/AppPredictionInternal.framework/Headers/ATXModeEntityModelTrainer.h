// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODEENTITYMODELTRAINER_H
#define ATXMODEENTITYMODELTRAINER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXModeEntityModelTrainingContext.h"

@interface ATXModeEntityModelTrainer : NSObject {
    NSString *_cacheBasePath;
    ATXModeEntityModelTrainingContext *_trainingContext;
}




+(CGFloat)maxScoreWithThresholdGivenModeEntityScores:(id)arg0 ;
+(CGFloat)scoreThresholdGivenModeEntityScores:(id)arg0 modeEntityTypeIdentifier:(id)arg1 ;
+(id)eventProviderForMode:(NSUInteger)arg0 ;
+(id)eventProviderForScorableTime:(id)arg0 ;
+(id)thresholdedModeEntityScores:(id)arg0 modeEntityTypeIdentifier:(id)arg1 threshold:(CGFloat)arg2 ;
-(BOOL)persistModeEntityScores:(id)arg0 modeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2 ;
-(BOOL)shouldDeferTrainingDueToRestoredBackup;
-(BOOL)shouldDeferTrainingDueToUpgrade;
-(id)init;
-(id)initWithCacheBasePath:(id)arg0 ;
-(id)pathForModeEntityTypeIdentifier:(id)arg0 modeIdentifier:(id)arg1 ;
-(void)train;
-(void)trainWithShouldDeferTrainingOnBackupRestoreOrUpgrade:(BOOL)arg0 ;
-(void)trainWithXPCActivity:(id)arg0 ;
-(void)trainWithXPCActivity:(id)arg0 shouldSkipRetrainingIfTrainedRecently:(BOOL)arg1 shouldDeferTrainingOnRestoreOrUpgrade:(BOOL)arg2 ;


@end


#endif