// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIMAGEEMPTYCONTENT_H
#define _UIIMAGEEMPTYCONTENT_H

@class UIImageContent;



@interface _UIImageEmptyContent : UIImageContent



-(BOOL)canDrawImage;
-(BOOL)canEmitDrawingCommands;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)renditionWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 applyingEffect:(id)arg2 ;
-(struct CGSize )size;
-(struct CGSize )sizeInPixels;
-(void)_drawWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 effect:(id)arg3 ;
-(void)_prepareForDrawingWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;


@end


#endif