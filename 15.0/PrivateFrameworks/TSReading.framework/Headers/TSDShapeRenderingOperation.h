// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSHAPERENDERINGOPERATION_H
#define TSDSHAPERENDERINGOPERATION_H



#import "TSDSwatchRenderingOperation.h"

@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation {
    int mShapeType;
    CGFloat mAngle;
}




-(BOOL)needsPressedStateBackground;
-(id)initWithPreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 shapeType:(int)arg4 angle:(CGFloat)arg5 documentRoot:(id)arg6 ;
-(id)initWithPreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 shapeType:(int)arg4 documentRoot:(id)arg5 ;
-(struct UIEdgeInsets )swatchEdgeInsets;
-(void)doWorkWithReadLock;


@end


#endif