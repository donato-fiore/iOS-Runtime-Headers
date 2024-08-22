// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNSPHERE_H
#define SCNSPHERE_H



#import "SCNGeometry.h"

@interface SCNSphere : SCNGeometry {
    CGFloat _sphereradius;
    CGFloat _sphereradialSpan;
    NSInteger _spheresegmentCount;
    NSInteger _sphereprimitiveType;
    BOOL _spheregeodesic;
    BOOL _spherehemispheric;
}


@property (nonatomic, getter=isGeodesic) BOOL geodesic;
@property (nonatomic) CGFloat radius;
@property (nonatomic) NSInteger segmentCount;


+(BOOL)supportsSecureCoding;
+(id)sphereWithRadius:(CGFloat)arg0 ;
-(?)__createCFObject;
-(?)initPresentationParametricGeometryWithParametricGeometryRef;
-(?)initWithParametricGeometryRef;
-(BOOL)geodesic;
-(BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1 ;
-(BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(*CGFloat)arg1 ;
-(BOOL)isHemispheric;
-(CGFloat)radialSpan;
-(NSInteger)primitiveType;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationGeometry;
-(id)presentationSphere;
-(void)_setupObjCModelFrom:(id)arg0 ;
-(void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setHemispheric:(BOOL)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;
-(void)setRadialSpan:(CGFloat)arg0 ;


@end


#endif