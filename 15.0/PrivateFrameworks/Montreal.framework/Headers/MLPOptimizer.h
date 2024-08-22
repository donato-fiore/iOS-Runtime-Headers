// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLPOPTIMIZER_H
#define MLPOPTIMIZER_H

@class MPSNNOptimizer;

#import <Foundation/Foundation.h>

#import "MLPNetwork.h"

@interface MLPOptimizer : NSObject

@property (readonly) MPSNNOptimizer *mpsOptimizer; // ivar: _mpsOptimizer
@property (readonly, weak) MLPNetwork *network; // ivar: _network


// +(id)optimizerWithNetwork:(id)arg0 momentum:(id)arg1 velocity:(unk)arg2  ;
-(id)initWithNetwork:(id)arg0 mpsOptimizer:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientMatrix:(id)arg1 inputValuesMatrix:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 inputGradientVector:(id)arg1 inputValuesVector:(id)arg2 ;
-(void)updateLearningRate:(float)arg0 ;


@end


#endif