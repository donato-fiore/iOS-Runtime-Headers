// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIVIDEOREFRAMENODE_H
#define PIVIDEOREFRAMENODE_H

@class NURenderNode;
@protocol NUVideoProperties;


#import "PIReframeKeyframeSequence.h"

@interface PIVideoReframeNode : NURenderNode

@property (nonatomic) ? frameDuration; // ivar: _frameDuration
@property (retain, nonatomic) NSObject<NUVideoProperties> *inputVideoProperties; // ivar: _inputVideoProperties
@property (retain, nonatomic) PIReframeKeyframeSequence *keyframeSequence; // ivar: _keyframeSequence
@property (nonatomic) BOOL shouldApplyWatermark; // ivar: _shouldApplyWatermark
@property (nonatomic) ? stabCropRect; // ivar: _stabCropRect


-(BOOL)canPropagateOriginalLivePhotoMetadataTrack;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)_stabilizeImage:(id)arg0 cleanRect:(struct CGRect )arg1 cropRect:(struct CGRect )arg2 transform:(struct ? )arg3 geometry:(id)arg4 ;
-(id)initWithKeyframes:(id)arg0 stabCropRect:(struct ? )arg1 input:(id)arg2 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif