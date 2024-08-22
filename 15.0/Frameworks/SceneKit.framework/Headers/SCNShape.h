// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNSHAPE_H
#define SCNSHAPE_H

@class UIBezierPath;


#import "SCNGeometry.h"

@interface SCNShape : SCNGeometry {
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    UIBezierPath *_chamferProfile;
    NSInteger _primitiveType;
    NSInteger _chamferMode;
    UIBezierPath *_path;
}


@property (nonatomic) NSInteger chamferMode;
@property (copy, nonatomic) UIBezierPath *chamferProfile;
@property (nonatomic) CGFloat chamferRadius;
@property (nonatomic) CGFloat extrusionDepth;
@property (copy, nonatomic) UIBezierPath *path;


+(BOOL)supportsSecureCoding;
+(id)shapeWithPath:(id)arg0 extrusionDepth:(CGFloat)arg1 ;
-(?)__createCFObject;
-(?)_syncObjCModel;
-(?)initPresentationShapeGeometryWithShapeGeometryRef;
-(?)initWithShapeGeometryRef;
-(BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1 ;
-(BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(*CGFloat)arg1 ;
-(CGFloat)discretizedStraightLineMaxLength;
-(NSInteger)primitiveType;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)presentationGeometry;
-(struct ? )params;
-(void)_customDecodingOfSCNShape:(id)arg0 ;
-(void)_customEncodingOfSCNShape:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDiscretizedStraightLineMaxLength:(CGFloat)arg0 ;
-(void)setPrimitiveType:(NSInteger)arg0 ;


@end


#endif