// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNCYLINDER_H
#define SCNCYLINDER_H



#import "SCNGeometry.h"

@interface SCNCylinder : SCNGeometry {
    CGFloat _cylinderradius;
    CGFloat _cylinderheight;
    CGFloat _cylinderradialSpan;
    NSInteger _cylinderheightSegmentCount;
    NSInteger _cylinderradialSegmentCount;
    NSInteger _cylinderprimitiveType;
}


@property (nonatomic) CGFloat height;
@property (nonatomic) NSInteger heightSegmentCount;
@property (nonatomic) NSInteger radialSegmentCount;
@property (nonatomic) CGFloat radius;


+(BOOL)supportsSecureCoding;
+(id)cylinderWithRadius:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(?)__createCFObject;
-(?)_syncObjCModel;
-(BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1 ;
-(BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(*CGFloat)arg1 ;
-(CGFloat)radialSpan;
-(NSInteger)primitiveType;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg0 ;
-(id)presentationCylinder;
-(id)presentationGeometry;
-(void)_setupObjCModelFrom:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;
-(void)setRadialSpan:(CGFloat)arg0 ;


@end


#endif