// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMAGEMULTIVECTORGLYPHCONTENT_H
#define _UIIMAGEMULTIVECTORGLYPHCONTENT_H

@class UIImageContent, NSArray;



@interface _UIImageMultiVectorGlyphContent : UIImageContent {
    NSArray *_glyphs;
    NSArray *_colors;
    NSArray *_offsets;
    NSArray *_scaleFactors;
    CGSize _sizeInPixels;
    CGPoint _anchorPoint;
}




-(BOOL)_drawInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 effect:(id)arg2 ;
-(BOOL)canDrawImage;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)isCGImage;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isVectorGlyph;
-(CGFloat)vectorScale;
-(id)description;
-(id)initWithScale:(CGFloat)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 glyphs:(id)arg1 colors:(id)arg2 offsets:(id)arg3 scaleFactors:(id)arg4 anchorPoint:(struct CGPoint )arg5 ;
-(struct CGSize )sizeInPixels;
-(void)_prepareforDrawingInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;


@end


#endif