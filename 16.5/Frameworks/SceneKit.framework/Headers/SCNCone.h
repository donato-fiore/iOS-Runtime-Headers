// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNCONE_H
#define SCNCONE_H



#import "SCNGeometry.h"

@interface SCNCone : SCNGeometry {
    CGFloat _conetopRadius;
    CGFloat _conebottomRadius;
    CGFloat _coneheight;
    NSInteger _coneheightSegmentCount;
    NSInteger _coneradialSegmentCount;
    NSInteger _coneprimitiveType;
}


@property (nonatomic) CGFloat bottomRadius;
@property (nonatomic) CGFloat height;
@property (nonatomic) NSInteger heightSegmentCount;
@property (nonatomic) NSInteger radialSegmentCount;
@property (nonatomic) CGFloat topRadius;


+(BOOL)supportsSecureCoding;
+(id)coneWithTopRadius:(CGFloat)arg0 bottomRadius:(CGFloat)arg1 height:(CGFloat)arg2 ;
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
-(id)presentationCone;
-(id)presentationGeometry;
-(void)_setupObjCModelFrom:(id)arg0 ;
-(void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;


@end


#endif