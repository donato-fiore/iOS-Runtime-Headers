// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKINKTHUMBNAILRENDERER_H
#define DKINKTHUMBNAILRENDERER_H


#import <Foundation/Foundation.h>


@interface DKInkThumbnailRenderer : NSObject



+(BOOL)_drawDebugPatternInGLContext:(id)arg0 inSize:(struct CGSize )arg1 ;
+(CGFloat)scaleToFitDrawing:(id)arg0 inSize:(struct CGSize )arg1 ;
+(id)_imageForDrawingUsingCG:(id)arg0 fittingInSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 color:(id)arg3 ;
+(id)_imageForDrawingUsingGL:(id)arg0 fittingInSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 color:(id)arg3 ;
+(id)imageForDrawing:(id)arg0 fittingInSize:(struct CGSize )arg1 backingScale:(CGFloat)arg2 color:(id)arg3 highFidelity:(BOOL)arg4 ;
+(id)imageForDrawing:(id)arg0 fittingInSize:(struct CGSize )arg1 color:(id)arg2 highFidelity:(BOOL)arg3 ;
+(struct CGPath *)_newStrokedInterpolatedPathWithDrawing:(id)arg0 inSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 ;
+(struct CGSize )sizeForDrawing:(id)arg0 inSize:(struct CGSize )arg1 ;
+(void)_drawPath:(id)arg0 atScale:(CGFloat)arg1 inRect:(struct CGRect )arg2 inkColor:(id)arg3 backgroundColor:(id)arg4 inContext:(struct CGContext *)arg5 ;
+(void)_interpolateDrawing:(id)arg0 inSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 ellipseHandler:(id)arg3 ;


@end


#endif