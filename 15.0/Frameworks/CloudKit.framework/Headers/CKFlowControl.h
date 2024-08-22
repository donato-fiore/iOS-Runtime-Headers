// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFLOWCONTROL_H
#define CKFLOWCONTROL_H

@class NSDate, NSError;

#import <Foundation/Foundation.h>


@interface CKFlowControl : NSObject {
    NSUInteger _totalSamples;
    CGFloat _totalCost;
}


@property CGFloat budget; // ivar: _budget
@property NSUInteger budgetCap; // ivar: _budgetCap
@property (retain) NSDate *lastRegeneration; // ivar: _lastRegeneration
@property (retain, nonatomic) NSError *lastReportableError; // ivar: _lastReportableError
@property (nonatomic) CGFloat maximumThrottleTime; // ivar: _maximumThrottleTime
@property CGFloat regenerationPerSecond; // ivar: _regenerationPerSecond


+(id)flowControlWithBudgetCap:(NSUInteger)arg0 withMaximumThrottleTime:(CGFloat)arg1 andRegenerationPerSecond:(CGFloat)arg2 ;
-(BOOL)attemptBudgetedExpenditureWithCost:(CGFloat)arg0 ;
-(BOOL)isLimited;
-(CGFloat)_secondsUntilBudgetLimitationRemovedNoRegen;
-(CGFloat)secondsUntilBudgetLimitationRemoved;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithBudgetCap:(NSUInteger)arg0 withMaximumThrottleTime:(CGFloat)arg1 andRegenerationPerSecond:(CGFloat)arg2 ;
-(void)expendWithCost:(CGFloat)arg0 reportableError:(id)arg1 ;
-(void)regenerate;


@end


#endif