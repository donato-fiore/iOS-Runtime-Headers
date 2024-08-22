// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMAGECIIMAGECONTENT_H
#define _UIIMAGECIIMAGECONTENT_H

@class UIImageContent, CIImage;



@interface _UIImageCIImageContent : UIImageContent {
    CIImage *_ciImage;
}




-(BOOL)canScaleImageToTargetResolution;
-(BOOL)isCIImage;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CIImage;
-(id)description;
-(id)initWithCIImage:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(struct CGSize )sizeInPixels;
-(void)_drawWithoutEffectInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)_prepareforDrawingInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;


@end


#endif