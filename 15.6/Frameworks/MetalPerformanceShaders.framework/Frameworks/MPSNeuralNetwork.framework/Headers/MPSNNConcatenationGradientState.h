// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNCONCATENATIONGRADIENTSTATE_H
#define MPSNNCONCATENATIONGRADIENTSTATE_H



#import "MPSNNGradientState.h"

@interface MPSNNConcatenationGradientState : MPSNNGradientState {
    unsigned int _sliceCount;
    *MPSSliceInfo _info;
}




+(id)temporaryStateWithCommandBuffer:(id)arg0 ;
-(id)debugDescription;
-(id)initWithResource:(id)arg0 ;
-(void)dealloc;


@end


#endif