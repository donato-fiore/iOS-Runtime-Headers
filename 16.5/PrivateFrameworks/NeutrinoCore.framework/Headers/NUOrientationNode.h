// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUORIENTATIONNODE_H
#define NUORIENTATIONNODE_H



#import "NUTransformNode.h"
#import "NUImageTransform.h"

@interface NUOrientationNode : NUTransformNode

@property (readonly) NSInteger orientation; // ivar: _orientation
@property (retain) NUImageTransform *transform; // ivar: _transform


+(id)applyOrientation:(NSInteger)arg0 to:(id)arg1 ;
-(BOOL)canPropagateOriginalAuxiliaryData;
-(BOOL)isGeometryNode;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(NSInteger)outputImageOrientation:(NSInteger)arg0 ;
-(id)_evaluateAuxiliaryImageForType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)_transformWithError:(*id)arg0 ;
-(id)initWithOrientation:(NSInteger)arg0 input:(id)arg1 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif