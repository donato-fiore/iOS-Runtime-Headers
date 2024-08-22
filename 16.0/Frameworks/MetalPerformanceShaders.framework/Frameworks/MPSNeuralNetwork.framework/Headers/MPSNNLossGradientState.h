// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNLOSSGRADIENTSTATE_H
#define MPSNNLOSSGRADIENTSTATE_H



#import "MPSNNGradientState.h"
#import "MPSCNNLossLabels.h"

@interface MPSNNLossGradientState : MPSNNGradientState {
    float _weight;
    float _labelSmoothing;
    float _epsilon;
    float _delta;
    MPSCNNLossLabels *_lossLabels;
}




+(id)temporaryStateWithCommandBuffer:(id)arg0 ;
-(id)debugDescription;
-(id)initWithResource:(id)arg0 ;
-(void)dealloc;


@end


#endif