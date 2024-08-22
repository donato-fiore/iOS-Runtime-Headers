// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMESHTRANSFORM_H
#define CAMESHTRANSFORM_H

@class NSString;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CAMeshTransform : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

 {
    *void _impl;
    NSUInteger _normalization;
    NSInteger _subdivisionSteps;
    BOOL _replicatesEdges;
}


@property (readonly, copy) NSString *depthNormalization;
@property (readonly) NSUInteger faceCount;
@property (readonly) BOOL replicatesEdges;
@property (readonly) int subdivisionSteps;
@property (readonly) NSUInteger vertexCount;


+(BOOL)supportsSecureCoding;
+(id)meshTransformWithVertexCount:(NSUInteger)arg0 vertices:(struct CAMeshVertex *)arg1 faceCount:(NSUInteger)arg2 faces:(struct CAMeshFace *)arg3 depthNormalization:(id)arg4 ;
+(void)CAMLParserEndElement:(id)arg0 content:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg0 ;
-(BOOL)_constructWithData:(id)arg0 ;
-(CGFloat)CA_distanceToValue:(id)arg0 ;
-(id)CA_interpolateValue:(id)arg0 byFraction:(float)arg1 ;
-(id)CA_interpolateValues:(id)arg0 interpolator:(struct ValueInterpolator *)arg3 ;
-(id)_data;
-(id)_init;
-(id)_initWithMeshTransform:(id)arg0 ;
-(id)_subdivideToDepth:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVertexCount:(NSUInteger)arg0 vertices:(struct CAMeshVertex *)arg1 faceCount:(NSUInteger)arg2 faces:(struct CAMeshFace *)arg3 depthNormalization:(id)arg4 ;
-(id)inverseMesh;
-(id)meshTransformForLayer:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)subdividedMesh:(int)arg0 ;
-(struct CAMeshFace )faceAtIndex:(NSUInteger)arg0 ;
-(struct CAMeshVertex )vertexAtIndex:(NSUInteger)arg0 ;
-(struct Object *)CA_copyRenderValue;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif