// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIIMAGECGPDFPAGECONTENT_H
#define _UIIMAGECGPDFPAGECONTENT_H

@class UIImageContent;



@interface _UIImageCGPDFPageContent : UIImageContent {
    *CGPDFPage _pdfPageRef;
}




-(BOOL)canScaleImageToTargetResolution;
-(BOOL)isCGPDFPage;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCGPDFPage:(struct CGPDFPage *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(struct CGPDFPage *)CGPDFPage;
-(struct CGSize )sizeInPixels;
-(void)_drawWithoutEffectInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)dealloc;


@end


#endif