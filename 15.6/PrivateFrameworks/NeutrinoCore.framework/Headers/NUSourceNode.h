// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUSOURCENODE_H
#define NUSOURCENODE_H

@protocol NUSourceDerivation;


#import "NURenderNode.h"

@interface NUSourceNode : NURenderNode

@property (weak) NURenderNode *originalNode; // ivar: _originalNode
@property (retain) NSObject<NUSourceDerivation> *sourceDerivation; // ivar: _sourceDerivation
@property (readonly) NSInteger sourceOrientation;


-(BOOL)isGeometryNode;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)load:(*id)arg0 ;
-(BOOL)supportsPipelineState:(id)arg0 error:(*id)arg1 ;
-(NSInteger)normalizeSubsampleFactor:(NSInteger)arg0 ;
-(id)_addOrientationNode:(id)arg0 sourceSettings:(id)arg1 error:(*id)arg2 ;
-(id)_addResampleNode:(id)arg0 subsampleNode:(id)arg1 ;
-(id)_addScaleNode:(id)arg0 pipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 ;
-(id)_evaluateGeometrySpaceMap:(*id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageProperties:(*id)arg0 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)_evaluateVideoCompositionWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)_evaluateVideoPropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(id)pipelineOptionsForPipelineState:(id)arg0 error:(*id)arg1 ;
-(id)preparedNodeWithSourceContainer:(id)arg0 pipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(*id)arg4 ;
-(id)preparedNodeWithSourceNode:(id)arg0 sourceSettings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)sourceOptionsForSettings:(id)arg0 error:(*id)arg1 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;


@end


#endif