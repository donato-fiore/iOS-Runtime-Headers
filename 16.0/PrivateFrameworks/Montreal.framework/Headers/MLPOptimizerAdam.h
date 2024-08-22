// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPOPTIMIZERADAM_H
#define MLPOPTIMIZERADAM_H

@class MPSVector;


#import "MLPOptimizer.h"

@interface MLPOptimizerAdam : MLPOptimizer

@property (retain) MPSVector *momentum; // ivar: _momentum
@property (retain) MPSVector *velocity; // ivar: _velocity


// -(id)initWithNetwork:(id)arg0 momentum:(id)arg1 velocity:(unk)arg2  ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientVector:(id)arg1 inputValuesVector:(id)arg2 ;


@end


#endif