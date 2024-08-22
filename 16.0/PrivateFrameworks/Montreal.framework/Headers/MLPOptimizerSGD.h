// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPOPTIMIZERSGD_H
#define MLPOPTIMIZERSGD_H

@class MPSVector;


#import "MLPOptimizer.h"

@interface MLPOptimizerSGD : MLPOptimizer

@property (retain) MPSVector *momentum; // ivar: _momentum


-(id)initWithNetwork:(id)arg0 momentum:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientVector:(id)arg1 inputValuesVector:(id)arg2 ;
-(void)updateLearningRate:(float)arg0 ;


@end


#endif