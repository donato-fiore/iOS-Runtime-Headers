// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNLOSSLABELS_H
#define MPSCNNLOSSLABELS_H

@class MPSState, NSData, MPSImage;



@interface MPSCNNLossLabels : MPSState {
    ? _lossImageSize;
    BOOL _isScalarLoss;
    NSData *_userData;
    NSUInteger _userDataLayout;
    NSUInteger _numFeatureChannels_labels;
    NSUInteger _numFeatureChannels_loss;
    MPSImage *_userLabelsImage;
    MPSImage *_userWeightsImage;
    BOOL _hasStateWeights;
    BOOL _computeNonZeroWeights;
}




-(id)init;
-(id)initWithDevice:(id)arg0 labelsDescriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 lossImageSize:(struct ? )arg1 labelsDescriptor:(id)arg2 weightsDescriptor:(id)arg3 ;
-(id)initWithDevice:(id)arg0 lossImageSize:(struct ? )arg1 labelsImage:(id)arg2 weightsImage:(id)arg3 ;
-(id)labelsImage;
-(id)lossImage;
-(id)weightsImage;
-(void)dealloc;


@end


#endif