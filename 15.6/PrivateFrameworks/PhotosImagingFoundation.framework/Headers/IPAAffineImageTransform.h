// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAAFFINEIMAGETRANSFORM_H
#define IPAAFFINEIMAGETRANSFORM_H



#import "IPAImageTransform.h"

@interface IPAAffineImageTransform : IPAImageTransform {
    BOOL _canAlignToPixelsExactly;
    Matrix4d _matrix;
}




-(BOOL)canAlignToPixelsExactly;
-(id)description;
-(id)initWithInputGeometry:(id)arg0 intrinsicGeometry:(id)arg1 matrix:(struct Matrix4d *)arg2 canAlignToPixelsExactly:(BOOL)arg3 ;
-(id)inverseTransform;
-(struct Matrix4d )matrix;
-(struct Vector2d )mapVector:(struct Vector2d )arg0 ;


@end


#endif