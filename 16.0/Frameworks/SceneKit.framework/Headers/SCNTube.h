// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNTUBE_H
#define SCNTUBE_H



#import "SCNGeometry.h"

@interface SCNTube : SCNGeometry {
    CGFloat _tubeinnerRadius;
    CGFloat _tubeouterRadius;
    CGFloat _tubeheight;
    CGFloat _tuberadialSpan;
    NSInteger _tubeheightSegmentCount;
    NSInteger _tuberadialSegmentCount;
    NSInteger _tubeprimitiveType;
}


@property (nonatomic) CGFloat height;
@property (nonatomic) NSInteger heightSegmentCount;
@property (nonatomic) CGFloat innerRadius;
@property (nonatomic) CGFloat outerRadius;
@property (nonatomic) NSInteger radialSegmentCount;


+(BOOL)supportsSecureCoding;
+(id)tubeWithInnerRadius:(CGFloat)arg0 outerRadius:(CGFloat)arg1 height:(CGFloat)arg2 ;
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
-(id)presentationGeometry;
-(id)presentationTube;
-(void)_setupObjCModelFrom:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;
-(void)setRadialSpan:(CGFloat)arg0 ;


@end


#endif