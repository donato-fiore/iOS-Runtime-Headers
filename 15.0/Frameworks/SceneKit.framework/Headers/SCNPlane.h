// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNPLANE_H
#define SCNPLANE_H



#import "SCNGeometry.h"

@interface SCNPlane : SCNGeometry {
    CGFloat _width;
    CGFloat _height;
    CGFloat _cornerRadius;
    NSInteger _widthSegmentCount;
    NSInteger _heightSegmentCount;
    NSInteger _cornerSegmentCount;
    NSInteger _primitiveType;
}


@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) NSInteger cornerSegmentCount;
@property (nonatomic) CGFloat height;
@property (nonatomic) NSInteger heightSegmentCount;
@property (nonatomic) CGFloat width;
@property (nonatomic) NSInteger widthSegmentCount;


+(BOOL)supportsSecureCoding;
+(id)planeWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
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
-(id)presentationGeometry;
-(id)presentationPlane;
-(void)_setupObjCModelFrom:(id)arg0 ;
-(void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;


@end


#endif