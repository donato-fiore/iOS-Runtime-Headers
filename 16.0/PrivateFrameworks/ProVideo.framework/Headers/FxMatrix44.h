// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXMATRIX44_H
#define FXMATRIX44_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FxMatrix44 : NSObject <NSSecureCoding>

 {
    CGFloat _mat;
}




+(BOOL)supportsSecureCoding;
-(*CGFloat)matrix;
-(BOOL)_planarInverseZ;
-(BOOL)invert;
-(BOOL)invertColorMatrixWithTolerance:(CGFloat)arg0 ;
-(id)copy;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorMatrix44Data:(CGFloat)arg0 ;
-(id)initWithFxMatrix:(id)arg0 ;
-(id)initWithMatrix44Data:(CGFloat)arg0 ;
-(struct CGPoint )transform2DPoint:(struct CGPoint )arg0 ;
-(struct FxPoint3D )transform3DPoint:(struct FxPoint3D )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMatrix:(CGFloat)arg0 ;
-(void)setToIdentity;
-(void)transpose;


@end


#endif