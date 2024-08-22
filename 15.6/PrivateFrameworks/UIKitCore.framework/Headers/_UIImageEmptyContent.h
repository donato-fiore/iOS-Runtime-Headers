// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIIMAGEEMPTYCONTENT_H
#define _UIIMAGEEMPTYCONTENT_H

@class UIImageContent;



@interface _UIImageEmptyContent : UIImageContent



-(BOOL)_drawInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 effect:(id)arg2 ;
-(BOOL)canDrawImage;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)renditionWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 applyingEffect:(id)arg2 ;
-(struct CGSize )size;
-(struct CGSize )sizeInPixels;
-(void)_prepareforDrawingInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;


@end


#endif