// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTAGSHAPERENDERER_H
#define DOCTAGSHAPERENDERER_H


#import <Foundation/Foundation.h>


@interface DOCTagShapeRenderer : NSObject



+(id)shared;
-(CGFloat)baselineOffsetForRequest:(id)arg0 tagRectSize:(struct CGSize )arg1 ;
-(id)_shapeImageForColorType:(NSInteger)arg0 variant:(NSInteger)arg1 colored:(id)arg2 ;
-(struct CGRect )_imageRectForRenderingImage:(id)arg0 tagRect:(struct CGRect )arg1 displayScale:(CGFloat)arg2 ;
-(void)renderInContext:(struct CGContext *)arg0 contextSize:(struct CGSize )arg1 tagRect:(struct CGRect )arg2 tag:(id)arg3 outlineColor:(id)arg4 fillColor:(id)arg5 traitCollection:(id)arg6 ;


@end


#endif