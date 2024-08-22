// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNDROPOUTGRADIENTSTATE_H
#define MPSCNNDROPOUTGRADIENTSTATE_H

@protocol MTLBuffer;


#import "MPSNNGradientState.h"

@interface MPSCNNDropoutGradientState : MPSNNGradientState {
    ? _maskStrideInPixels;
    float _keepProbability;
    NSUInteger _resourcePixelFormat;
    ? _resourceSize;
    NSUInteger _commonBufferOffsetBytes;
    id<MTLBuffer> *_commonMaskBuffer;
}




-(id)init;
-(id)maskData;
-(void)dealloc;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;


@end


#endif