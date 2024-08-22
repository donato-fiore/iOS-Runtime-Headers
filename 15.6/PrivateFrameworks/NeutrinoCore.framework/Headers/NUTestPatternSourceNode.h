// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUTESTPATTERNSOURCENODE_H
#define NUTESTPATTERNSOURCENODE_H



#import "NUSourceNode.h"

@interface NUTestPatternSourceNode : NUSourceNode {
    ? _size;
    NSInteger _orientation;
    ? _scale;
}




-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(BOOL)supportsPipelineState:(id)arg0 error:(*id)arg1 ;
-(NSInteger)sourceOrientation;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithSize:(struct ? )arg0 orientation:(NSInteger)arg1 ;
-(id)initWithSize:(struct ? )arg0 orientation:(NSInteger)arg1 scale:(struct ? )arg2 ;
-(id)preparedNodeWithSourceContainer:(id)arg0 pipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(*id)arg4 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;


@end


#endif