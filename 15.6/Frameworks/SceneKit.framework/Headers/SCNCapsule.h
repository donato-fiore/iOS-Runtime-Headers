// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNCAPSULE_H
#define SCNCAPSULE_H



#import "SCNGeometry.h"

@interface SCNCapsule : SCNGeometry {
    CGFloat _capsulecapRadius;
    CGFloat _capsuleheight;
    NSInteger _capsuleheightSegmentCount;
    NSInteger _capsuleradialSegmentCount;
    NSInteger _capsulecapSegmentCount;
    NSInteger _capsuleprimitiveType;
}


@property (nonatomic) CGFloat capRadius;
@property (nonatomic) NSInteger capSegmentCount;
@property (nonatomic) CGFloat height;
@property (nonatomic) NSInteger heightSegmentCount;
@property (nonatomic) NSInteger radialSegmentCount;


+(BOOL)supportsSecureCoding;
+(id)capsuleWithCapRadius:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(?)__createCFObject;
-(?)initPresentationParametricGeometryWithParametricGeometryRef;
-(?)initWithParametricGeometryRef;
-(BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1 ;
-(BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(*CGFloat)arg1 ;
-(NSInteger)primitiveType;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationCapsule;
-(id)presentationGeometry;
-(void)_setupObjCModelFrom:(id)arg0 ;
-(void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;


@end


#endif