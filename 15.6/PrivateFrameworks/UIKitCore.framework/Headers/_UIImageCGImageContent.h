// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIIMAGECGIMAGECONTENT_H
#define _UIIMAGECGIMAGECONTENT_H

@class UIImageContent;



@interface _UIImageCGImageContent : UIImageContent {
    ? _imageRef;
}




-(BOOL)hasCGImage;
-(BOOL)isCGImage;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)optimizeContentForImageSize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(BOOL)prepareContentForDisplayWithCompletionHandler:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentOptimizedForImageSize:(struct CGSize )arg0 ;
-(id)contentPreparedForDisplay;
-(id)contentWithCGImage:(struct CGImage *)arg0 ;
-(id)description;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
-(id)initWithCGImageSource:(struct CGImageSource *)arg0 scale:(CGFloat)arg1 ;
-(id)renditionApplyingEffect:(id)arg0 ;
-(struct CGImage *)CGImage;
-(struct CGSize )sizeInPixels;
-(void)_drawWithoutEffectInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)_prepareforDrawingInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)dealloc;


@end


#endif