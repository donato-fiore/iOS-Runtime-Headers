// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUIMAGETRANSFORM_H
#define NUIMAGETRANSFORM_H



#import "NUGeometryTransform.h"

@interface NUImageTransform : NUGeometryTransform



-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIdentityImageTransform;
-(NSUInteger)hash;
-(id)description;
-(id)inverseTransform;
-(id)transformByRotateX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 ;
-(id)transformByRotateZ:(CGFloat)arg0 ;
-(id)transformByScaleX:(CGFloat)arg0 scaleY:(CGFloat)arg1 ;
-(id)transformByTranslateX:(CGFloat)arg0 translateY:(CGFloat)arg1 ;
-(struct CGPoint )transformPoint:(struct CGPoint )arg0 ;


@end


#endif