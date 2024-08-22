// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HVPOWERBUDGET_H
#define HVPOWERBUDGET_H

@class NSDate, _DASScheduler;
@protocol NSObject, OS_os_log;

#import <Foundation/Foundation.h>

#import "HVPowerBudgetThrottlingState.h"

@interface HVPowerBudget : NSObject {
    HVPowerBudgetThrottlingState *_throttlingState;
    NSDate *_lastPlugInTime;
    id<NSObject> *_batteryObserver;
    _DASScheduler *_scheduler;
    BOOL _isScheduled;
    uint8_t _discretionaryWorkInProgress;
    NSObject<OS_os_log> *_log;
}




+(id)defaultBudget;
+(void)setCanDoWorkOverrideForTesting:(id)arg0 ;
-(BOOL)canDoDiscretionaryWork;
-(BOOL)canDoExtraDiscretionaryWork;
-(id)init;
-(id)initWithThrottleBudget:(id)arg0 ;
-(id)throttlingState;
-(void)dealloc;
-(void)didConsumeAnExtraBudgetedOperation;
// -(void)doDiscretionaryWork:(id)arg0 orElse:(unk)arg1  ;
-(void)refillThrottleBudget;


@end


#endif