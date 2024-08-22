// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUVIDEOFRAMESOURCENODE_H
#define NUVIDEOFRAMESOURCENODE_H



#import "NUSourceNode.h"

@interface NUVideoFrameSourceNode : NUSourceNode {
    NSInteger _orientation;
}




-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(NSInteger)sourceOrientation;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)applySourceOptions:(id)arg0 image:(id)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithSettings:(id)arg0 orientation:(NSInteger)arg1 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;


@end


#endif