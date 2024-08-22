// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNARITHMETICGRADIENTSTATE_H
#define MPSCNNARITHMETICGRADIENTSTATE_H



#import "MPSNNBinaryGradientState.h"

@interface MPSCNNArithmeticGradientState : MPSNNBinaryGradientState {
    NSUInteger _resourcePixelFormat;
    ? _resourceSize;
    NSUInteger _primaryFCStride;
    NSUInteger _secondaryFCStride;
}




-(id)init;
-(void)dealloc;


@end


#endif