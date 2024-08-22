// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUSCALENODE_H
#define NUSCALENODE_H



#import "NUAbstractScaleNode.h"

@interface NUScaleNode : NUAbstractScaleNode {
    NSInteger _sampleMode;
}


@property (readonly) ? effectiveScale; // ivar: _effectiveScale
@property (readonly) ? targetScale; // ivar: _targetScale


-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_settingsWithTargetScale:(struct ? )arg0 effectiveScale:(struct ? )arg1 sampleMode:(NSInteger)arg2 ;
-(id)initWithInput:(id)arg0 settings:(id)arg1 ;
-(id)initWithPipelineState:(id)arg0 input:(id)arg1 ;
-(id)initWithScale:(struct ? )arg0 sampleMode:(NSInteger)arg1 input:(id)arg2 ;
-(id)initWithTargetScale:(struct ? )arg0 effectiveScale:(struct ? )arg1 sampleMode:(NSInteger)arg2 input:(id)arg3 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif