// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMUTABLEMESHTRANSFORM_H
#define CAMUTABLEMESHTRANSFORM_H

@class NSString;


#import "CAMeshTransform.h"

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString *depthNormalization;
@property BOOL replicatesEdges;
@property int subdivisionSteps;


+(id)meshTransform;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addFace:(struct CAMeshFace )arg0 ;
-(void)addVertex:(struct CAMeshVertex )arg0 ;
-(void)removeFaceAtIndex:(NSUInteger)arg0 ;
-(void)removeVertexAtIndex:(NSUInteger)arg0 ;
-(void)replaceFaceAtIndex:(NSUInteger)arg0 withFace:(struct CAMeshFace )arg1 ;
-(void)replaceVertexAtIndex:(NSUInteger)arg0 withVertex:(struct CAMeshVertex )arg1 ;


@end


#endif