// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDFLOWCONTROLMANAGER_H
#define CKDFLOWCONTROLMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKDFlowControlManager : NSObject {
    NSUInteger _defaultBudget;
    CGFloat _defaultRegeneration;
}


@property (nonatomic) NSUInteger defaultBudget;
@property (nonatomic) CGFloat defaultRegeneration;
@property CGFloat maximumThrottleTime; // ivar: _maximumThrottleTime
@property (retain, nonatomic) NSMutableDictionary *operationFlowControls; // ivar: _operationFlowControls


-(BOOL)checkFlowControlIsLimited:(id)arg0 outReportableError:(*id)arg1 ;
-(BOOL)hasStatusToReport;
-(CGFloat)currentBudget:(id)arg0 ;
-(CGFloat)currentRegeneration:(id)arg0 ;
-(CGFloat)secondsUntilFlowControlNotLimited:(id)arg0 ;
-(NSUInteger)currentBudgetCap:(id)arg0 ;
-(id)CKPropertiesDescription;
-(id)CKStatusReportArray;
-(id)_flowControlForOperation:(id)arg0 ;
-(id)_flowControlForOperation:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)description;
-(id)initWithDefaultBudget:(NSUInteger)arg0 maximumThrottleTime:(CGFloat)arg1 andDefaultRegeneration:(CGFloat)arg2 ;
-(void)updateFlowControl:(id)arg0 withCost:(NSUInteger)arg1 reportableError:(id)arg2 ;
-(void)updateFlowControl:(id)arg0 withRetryAfter:(CGFloat)arg1 reportableError:(id)arg2 ;
-(void)updateFlowControlForOperation:(id)arg0 reportableError:(id)arg1 ;


@end


#endif