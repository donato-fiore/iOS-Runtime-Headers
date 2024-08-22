// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNPADGRADIENTSTATE_H
#define MPSNNPADGRADIENTSTATE_H



#import "MPSNNGradientState.h"

@interface MPSNNPadGradientState : MPSNNGradientState {
    MPSImageCoordinate _fwdPadBefore;
    MPSImageCoordinate _fwdPadAfter;
    NSUInteger _srcImgFcCount;
}




+(id)temporaryStateWithCommandBuffer:(id)arg0 ;
-(id)debugDescription;
-(id)initWithResource:(id)arg0 ;
-(void)dealloc;


@end


#endif