// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUTRANSFORM3DNODE_H
#define NUTRANSFORM3DNODE_H



#import "NUTransformNode.h"
#import "NUImageTransform3D.h"

@interface NUTransform3DNode : NUTransformNode {
    NUImageTransform3D *_transform;
}




-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_transformWithError:(*id)arg0 ;
-(id)debugQuickLookObject;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)initWithTransform3D:(id)arg0 input:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif