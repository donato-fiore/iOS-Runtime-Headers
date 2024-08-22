// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUAFFINETRANSFORMNODE_H
#define NUAFFINETRANSFORMNODE_H



#import "NUTransformNode.h"
#import "NUImageTransformAffine.h"

@interface NUAffineTransformNode : NUTransformNode {
    NUImageTransformAffine *_transform;
}




-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_transformWithError:(*id)arg0 ;
-(id)debugQuickLookObject;
-(id)initWithAffineTransform:(id)arg0 input:(id)arg1 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif