// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNTORUS_H
#define SCNTORUS_H



#import "SCNGeometry.h"

@interface SCNTorus : SCNGeometry {
    CGFloat _torusringRadius;
    CGFloat _toruspipeRadius;
    CGFloat _torusradialSpan;
    NSInteger _torusringSegmentCount;
    NSInteger _toruspipeSegmentCount;
    NSInteger _torusprimitiveType;
}


@property (nonatomic) CGFloat pipeRadius;
@property (nonatomic) NSInteger pipeSegmentCount;
@property (nonatomic) CGFloat ringRadius;
@property (nonatomic) NSInteger ringSegmentCount;


+(BOOL)supportsSecureCoding;
+(id)torusWithRingRadius:(CGFloat)arg0 pipeRadius:(CGFloat)arg1 ;
-(?)__createCFObject;
-(?)initPresentationParametricGeometryWithParametricGeometryRef;
-(?)initWithParametricGeometryRef;
-(BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1 ;
-(BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(*CGFloat)arg1 ;
-(CGFloat)radialSpan;
-(NSInteger)primitiveType;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationGeometry;
-(id)presentationTorus;
-(void)_setupObjCModelFrom:(id)arg0 ;
-(void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;
-(void)setRadialSpan:(CGFloat)arg0 ;


@end


#endif