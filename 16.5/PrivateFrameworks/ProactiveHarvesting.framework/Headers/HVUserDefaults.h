// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HVUSERDEFAULTS_H
#define HVUSERDEFAULTS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface HVUserDefaults : NSObject {
    NSUserDefaults *_defaults;
}




+(BOOL)harvestBudgetDisabled;
+(BOOL)harvestBudgetRefillDisabled;
+(BOOL)harvestBudgetThrottleBudgetDisabled;
+(CGFloat)harvestBudgetCPUTimeSeconds;
+(NSInteger)harvestBudgetNumberOfOperations;
+(id)defaults;
+(id)sharedInstance;
+(void)resetHarvestBudgetCPUTimeSeconds;
+(void)resetHarvestBudgetDisabled;
+(void)resetHarvestBudgetNumberOfOperations;
+(void)resetHarvestBudgetRefillDisabled;
+(void)resetHarvestBudgetThrottleBudgetDisabled;
+(void)setHarvestBudgetCPUTimeSeconds:(CGFloat)arg0 ;
+(void)setHarvestBudgetDisabled:(BOOL)arg0 ;
+(void)setHarvestBudgetNumberOfOperations:(NSInteger)arg0 ;
+(void)setHarvestBudgetRefillDisabled:(BOOL)arg0 ;
+(void)setHarvestBudgetThrottleBudgetDisabled:(BOOL)arg0 ;
-(id)defaults;
-(id)init;


@end


#endif