// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSLOWMOTIONNODE_H
#define NUSLOWMOTIONNODE_H



#import "NUTransformNode.h"
#import "NUGeometryTransform.h"

@interface NUSlowMotionNode : NUTransformNode

@property (readonly) NUGeometryTransform *geomTransform; // ivar: _geomTransform
@property (readonly) ? range; // ivar: _range
@property (readonly) float rate; // ivar: _rate


-(BOOL)requiresAudioMix;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateAudioMix:(*id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)_transformWithError:(*id)arg0 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)initWithTimeRange:(struct ? )arg0 rate:(float)arg1 input:(id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif