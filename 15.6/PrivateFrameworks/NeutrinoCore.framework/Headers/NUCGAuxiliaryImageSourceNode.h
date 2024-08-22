// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUCGAUXILIARYIMAGESOURCENODE_H
#define NUCGAUXILIARYIMAGESOURCENODE_H



#import "NUSourceNode.h"
#import "NUCGAuxiliaryImageProperties.h"
#import "NUCGImageSourceNode.h"

@interface NUCGAuxiliaryImageSourceNode : NUSourceNode {
    NUCGAuxiliaryImageProperties *_auxiliaryImageProperties;
}


@property (readonly) NSInteger auxiliaryImageType;
@property (retain) NUCGImageSourceNode *sourceNode; // ivar: _sourceNode


-(BOOL)canPropagateOriginalAuxiliaryData;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(BOOL)supportsPipelineState:(id)arg0 error:(*id)arg1 ;
-(NSInteger)sourceOrientation;
-(id)_evaluateAuxiliaryImageForType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithSettings:(id)arg0 ;
-(id)initWithSourceNode:(id)arg0 auxiliaryImageProperties:(id)arg1 ;
-(id)pipelineOptionsForPipelineState:(id)arg0 error:(*id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;


@end


#endif