// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNPYRAMID_H
#define SCNPYRAMID_H



#import "SCNGeometry.h"

@interface SCNPyramid : SCNGeometry {
    CGFloat _pyramidwidth;
    CGFloat _pyramidheight;
    CGFloat _pyramidlength;
    NSInteger _pyramidwidthSegmentCount;
    NSInteger _pyramidheightSegmentCount;
    NSInteger _pyramidlengthSegmentCount;
    NSInteger _pyramidprimitiveType;
}


@property (nonatomic) CGFloat height;
@property (nonatomic) NSInteger heightSegmentCount;
@property (nonatomic) CGFloat length;
@property (nonatomic) NSInteger lengthSegmentCount;
@property (nonatomic) CGFloat width;
@property (nonatomic) NSInteger widthSegmentCount;


+(BOOL)supportsSecureCoding;
+(id)pyramidWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 length:(CGFloat)arg2 ;
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
-(id)presentationPyramid;
-(void)_setupObjCModelFrom:(id)arg0 ;
-(void)_syncObjCModel:(struct __C3DParametricGeometry *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;


@end


#endif