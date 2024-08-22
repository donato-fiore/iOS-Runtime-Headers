// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIIMAGECUIVECTORIMAGECONTENT_H
#define _UIIMAGECUIVECTORIMAGECONTENT_H

@class UIImageCGImageContent, CUINamedVectorImage;



@interface _UIImageCUIVectorImageContent : UIImageCGImageContent {
    CUINamedVectorImage *_vectorImage;
}




-(BOOL)_canProvideCGImageDirectly;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)isCGPDFPage;
-(BOOL)isCGSVGDocument;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)vectorScale;
-(NSUInteger)hash;
-(id)contentWithCGImage:(struct CGImage *)arg0 ;
-(id)description;
-(id)initWithCGImage:(struct CGImage *)arg0 CUIVectorImage:(id)arg1 scale:(CGFloat)arg2 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGPDFPage *)CGPDFPage;
-(struct CGSVGDocument *)CGSVGDocument;
-(void)_drawWithoutEffectInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)_prepareforDrawingInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;


@end


#endif