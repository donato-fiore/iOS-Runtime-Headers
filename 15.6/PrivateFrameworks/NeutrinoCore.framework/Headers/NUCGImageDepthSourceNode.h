// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUCGIMAGEDEPTHSOURCENODE_H
#define NUCGIMAGEDEPTHSOURCENODE_H



#import "NUCGAuxiliaryImageSourceNode.h"

@interface NUCGImageDepthSourceNode : NUCGAuxiliaryImageSourceNode {
    BOOL _needsAspectRatioCorrection;
    CGAffineTransform _aspectTransform;
    ? _aspectMatchedPixelSize;
}




-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithSourceNode:(id)arg0 auxiliaryImageProperties:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif