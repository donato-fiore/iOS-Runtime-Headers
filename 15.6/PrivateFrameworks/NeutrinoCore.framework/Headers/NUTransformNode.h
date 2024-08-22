// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUTRANSFORMNODE_H
#define NUTRANSFORMNODE_H



#import "NURenderNode.h"

@interface NUTransformNode : NURenderNode



+(id)transformNodeWithInput:(id)arg0 transform:(id)arg1 error:(*id)arg2 ;
-(BOOL)canPropagateOriginalLivePhotoMetadataTrack;
-(BOOL)isGeometryNode;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateGeometrySpaceMap:(*id)arg0 ;
-(id)_transformWithError:(*id)arg0 ;
-(id)descriptionSubClassHook;


@end


#endif