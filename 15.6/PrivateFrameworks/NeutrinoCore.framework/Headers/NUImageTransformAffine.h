// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUIMAGETRANSFORMAFFINE_H
#define NUIMAGETRANSFORMAFFINE_H



#import "NUImageTransform.h"

@interface NUImageTransformAffine : NUImageTransform {
    CGAffineTransform _transformInv;
}


@property (readonly) CGAffineTransform transform; // ivar: _transform


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGeometryTransformAffine:(id)arg0 ;
-(BOOL)isIdentityImageTransform;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithAffineTransform:(struct CGAffineTransform )arg0 ;
-(id)inverseTransform;
-(id)transformByRotateZ:(CGFloat)arg0 ;
-(id)transformByScaleX:(CGFloat)arg0 scaleY:(CGFloat)arg1 ;
-(id)transformByTranslateX:(CGFloat)arg0 translateY:(CGFloat)arg1 ;
-(struct ? )transformMatrix:(struct ? )arg0 ;
-(struct CGPoint )transformPoint:(struct CGPoint )arg0 ;
-(void)nu_updateDigest:(id)arg0 ;


@end


#endif