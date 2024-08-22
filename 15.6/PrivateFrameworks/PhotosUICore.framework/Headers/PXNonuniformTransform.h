// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNONUNIFORMTRANSFORM_H
#define PXNONUNIFORMTRANSFORM_H

@protocol NSCopying, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface PXNonuniformTransform : NSObject <NSCopying>

 {
    CGRect _sourceRect;
    CGRect _targetRect;
    NSObject<UICoordinateSpace> *_coordinateSpace;
    CGFloat _minimumScale;
    CGFloat _maximumScale;
}




+(id)horizontallyDominantTransformWithSourceRect:(struct CGRect )arg0 targetRect:(struct CGRect )arg1 coordinateSpace:(id)arg2 minimumScale:(CGFloat)arg3 maximumScale:(CGFloat)arg4 ;
+(id)identityTransform;
-(CGFloat)_adjustedZoomScale:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)inverseTransform;
-(struct CGAffineTransform )affineTransformForRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;


@end


#endif