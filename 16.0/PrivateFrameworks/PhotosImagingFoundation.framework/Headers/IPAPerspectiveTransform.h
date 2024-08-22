// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAPERSPECTIVETRANSFORM_H
#define IPAPERSPECTIVETRANSFORM_H

@protocol IPAQuadGeometry;


#import "IPAImageTransform.h"

@interface IPAPerspectiveTransform : IPAImageTransform {
    Matrix4d _projectionTransform;
    Matrix4d _viewingTransform;
    id<IPAQuadGeometry> *_intrinsicGeometry;
    BOOL _isInverse;
}




-(BOOL)canAlignToPixelsExactly;
-(id)initWithInputGeometry:(id)arg0 intrinsicGeometry:(id)arg1 projectionTransform:(struct Matrix4d *)arg2 viewingTransform:(struct Matrix4d *)arg3 ;
-(id)intrinsicGeometry;
-(id)inverseTransform;
-(struct Vector2d )mapVector:(struct Vector2d )arg0 ;


@end


#endif