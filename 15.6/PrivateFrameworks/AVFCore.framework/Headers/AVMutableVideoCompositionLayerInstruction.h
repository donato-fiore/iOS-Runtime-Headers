// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMUTABLEVIDEOCOMPOSITIONLAYERINSTRUCTION_H
#define AVMUTABLEVIDEOCOMPOSITIONLAYERINSTRUCTION_H

@class AVMutableVideoCompositionLayerInstructionInternal;


#import "AVVideoCompositionLayerInstruction.h"

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction {
    AVMutableVideoCompositionLayerInstructionInternal *_mutableLayerInstruction;
}


@property (nonatomic) int trackID;


+(id)videoCompositionLayerInstruction;
+(id)videoCompositionLayerInstructionWithAssetTrack:(id)arg0 ;
-(void)setCropRectangle:(struct CGRect )arg0 atTime:(struct ? )arg1 ;
-(void)setCropRectangleRampFromStartCropRectangle:(struct CGRect )arg0 toEndCropRectangle:(struct CGRect )arg1 timeRange:(struct ? )arg2 ;
-(void)setOpacity:(float)arg0 atTime:(struct ? )arg1 ;
-(void)setOpacityRampFromStartOpacity:(float)arg0 toEndOpacity:(float)arg1 timeRange:(struct ? )arg2 ;
-(void)setTransform:(struct CGAffineTransform )arg0 atTime:(struct ? )arg1 ;
-(void)setTransformRampFromStartTransform:(struct CGAffineTransform )arg0 toEndTransform:(struct CGAffineTransform )arg1 timeRange:(struct ? )arg2 ;


@end


#endif