// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSCHEDULINGENGINE_H
#define SCLSCHEDULINGENGINE_H

@class NSDate;
@protocol SCLSchedulingEngineDelegate;

#import <Foundation/Foundation.h>

#import "SCLSchedulingParameters.h"
#import "SCLState.h"

@interface SCLSchedulingEngine : NSObject {
    NSDate *_lastEvaluationDate;
    NSDate *_nextEvaluationDate;
}


@property (weak, nonatomic) NSObject<SCLSchedulingEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDate *lastEvaluationDate;
@property (readonly, nonatomic) NSDate *nextEvaluationDate;
@property (retain, nonatomic) SCLSchedulingParameters *schedulingParameters; // ivar: _schedulingParameters
@property (readonly, nonatomic) SCLState *state; // ivar: _state


-(BOOL)_evaluateChangeFromParameters:(id)arg0 toParameters:(id)arg1 ;
// -(id)initWithParametersBlock:(id)arg0 shouldStartManuallyActive:(unk)arg1  ;
-(void)reevaluateStateAtDate:(id)arg0 ;
-(void)updateParametersWithBlock:(id)arg0 ;


@end


#endif