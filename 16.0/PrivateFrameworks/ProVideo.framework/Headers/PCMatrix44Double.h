// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCMATRIX44DOUBLE_H
#define PCMATRIX44DOUBLE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PCMatrix44Double : NSObject <NSSecureCoding, NSCopying>

 {
    CGFloat _m;
    *void _pcMatrix;
}


@property (nonatomic) ? SIMDDouble4x4;
@property (nonatomic) ? SIMDFloat4x4;


+(BOOL)supportsSecureCoding;
+(id)matrixWithSIMDDouble4x4:(struct ? )arg0 ;
+(id)matrixWithSIMDFloat4x4:(struct ? )arg0 ;
-(*void)pcMatrix;
-(BOOL)invert;
-(BOOL)invert2D;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPCMatrix44Double:(id)arg0 ;
-(BOOL)isIdentity;
-(CGFloat)doubleValueAtRow:(unsigned int)arg0 col:(unsigned int)arg1 ;
-(NSUInteger)hash;
-(id)array;
-(id)compactDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)extendedDescription;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDoubles:(CGFloat)arg0 ;
-(id)initWithDoubles:(CGFloat)arg0 external:(BOOL)arg1 ;
-(id)initWithPCMatrix:(*void)arg0 ;
-(id)initWithSIMDDouble4x4:(struct ? )arg0 ;
-(id)initWithSIMDFloat4x4:(struct ? )arg0 ;
-(id)newPlanarTransformTo:(id)arg0 ;
-(id)newTransformTo:(id)arg0 ;
-(struct ? )transformInfo;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getDoubles:(CGFloat)arg0 ;
-(void)leftFlipAboutY:(CGFloat)arg0 ;
-(void)leftMult:(id)arg0 ;
-(void)leftRotate:(CGFloat)arg0 axis:(int)arg1 ;
-(void)leftScaleX:(CGFloat)arg0 scaleY:(CGFloat)arg1 scaleZ:(CGFloat)arg2 ;
-(void)leftShearX:(CGFloat)arg0 shearY:(CGFloat)arg1 ;
-(void)leftTranslateX:(CGFloat)arg0 translateY:(CGFloat)arg1 translateZ:(CGFloat)arg2 ;
-(void)makeIdentity;
-(void)rightMult:(id)arg0 ;
-(void)rightRotate:(CGFloat)arg0 axis:(int)arg1 ;
-(void)rightScaleX:(CGFloat)arg0 scaleY:(CGFloat)arg1 scaleZ:(CGFloat)arg2 ;
-(void)rightShearX:(CGFloat)arg0 shearY:(CGFloat)arg1 ;
-(void)rightTranslateX:(CGFloat)arg0 translateY:(CGFloat)arg1 translateZ:(CGFloat)arg2 ;
-(void)scaleSizeX:(CGFloat)arg0 sizeY:(CGFloat)arg1 sizeZ:(CGFloat)arg2 scaledSizeX:(*CGFloat)arg3 scaledSizeY:(*CGFloat)arg4 scaledSizeZ:(*CGFloat)arg5 ;
-(void)setDoubleValue:(CGFloat)arg0 atRow:(unsigned int)arg1 col:(unsigned int)arg2 ;
-(void)setDoubles:(CGFloat)arg0 ;
-(void)transpose;


@end


#endif