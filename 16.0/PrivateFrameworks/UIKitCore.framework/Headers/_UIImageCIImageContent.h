// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIMAGECIIMAGECONTENT_H
#define _UIIMAGECIIMAGECONTENT_H

@class UIImageContent, CIImage;



@interface _UIImageCIImageContent : UIImageContent {
    CIImage *_ciImage;
}




-(BOOL)canEmitDrawingCommands;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)isCIImage;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CIImage;
-(id)description;
-(id)initWithCIImage:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(struct CGSize )sizeInPixels;
-(void)_drawWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 effect:(id)arg3 ;
-(void)_prepareForDrawingWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;


@end


#endif