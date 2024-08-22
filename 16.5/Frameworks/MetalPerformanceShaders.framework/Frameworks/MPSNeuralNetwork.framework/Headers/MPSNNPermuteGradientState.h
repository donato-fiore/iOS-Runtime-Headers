// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNPERMUTEGRADIENTSTATE_H
#define MPSNNPERMUTEGRADIENTSTATE_H



#import "MPSNNGradientState.h"

@interface MPSNNPermuteGradientState : MPSNNGradientState {
    MPSNNDimensionOrder _fwdPermuteOrder;
    MPSNNDimensionOrder _revPermuteOrder;
}




+(id)temporaryStateWithCommandBuffer:(id)arg0 ;
-(id)initWithResource:(id)arg0 ;


@end


#endif