// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
    *CGImage _imageRef;
}




-(BOOL)canDrawImage;
-(BOOL)canEmitDrawingCommands;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)containsNamedColorStyles;
-(BOOL)isCGImage;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isVectorGlyph;
-(CGFloat)vectorScale;
-(id)description;
-(id)initWithScale:(CGFloat)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 glyphs:(id)arg1 colors:(id)arg2 offsets:(id)arg3 scaleFactors:(id)arg4 anchorPoint:(struct CGPoint )arg5 ;
-(struct CGImage *)CGImage;
-(struct CGSize )sizeInPixels;
-(void)_drawWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 effect:(id)arg3 ;
-(void)_prepareForDrawingWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)dealloc;


@end


#endif