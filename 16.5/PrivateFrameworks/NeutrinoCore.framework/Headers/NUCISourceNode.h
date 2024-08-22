// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUCISOURCENODE_H
#define NUCISOURCENODE_H

@class CIImage;


#import "NUSourceNode.h"

@interface NUCISourceNode : NUSourceNode {
    CIImage *_image;
    NSInteger _orientation;
}




-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(BOOL)supportsPipelineState:(id)arg0 error:(*id)arg1 ;
-(NSInteger)sourceOrientation;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithImage:(id)arg0 identifier:(id)arg1 orientation:(NSInteger)arg2 ;
-(id)initWithImage:(id)arg0 settings:(id)arg1 orientation:(NSInteger)arg2 ;
-(id)initWithSettings:(id)arg0 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;


@end


#endif