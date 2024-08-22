// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMAGECUIVECTORGLYPHCONTENT_H
#define _UIIMAGECUIVECTORGLYPHCONTENT_H

@class UIImageContent, CUINamedVectorGlyph;


#import "_UIImageContent.h"

@interface _UIImageCUIVectorGlyphContent : UIImageContent {
    CUINamedVectorGlyph *_vectorGlyph;
    _UIImageContent *_vectorContent;
    CGFloat _vectorScale;
    CGSize _sizeInPixels;
    *CGImage _overrideImageRef;
    uint8_t _isMultiColor;
    uint8_t _numberOfHierarchyLayers;
}


@property (nonatomic) CGFloat glyphScaleFactor; // ivar: _glyphScaleFactor


-(BOOL)_canProvideCGImageDirectly;
-(BOOL)canDrawImage;
-(BOOL)canScaleImageToTargetResolution;
-(BOOL)containsNamedColorStyle:(id)arg0 ;
-(BOOL)containsNamedColorStyles;
-(BOOL)isCGImage;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isVectorGlyph;
-(CGFloat)vectorScale;
-(NSUInteger)hash;
-(NSUInteger)numberOfHierarchyLayers;
-(id)contentWithCGImage:(struct CGImage *)arg0 ;
-(id)description;
-(id)initWithCUIVectorGlyph:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(id)outlinePath;
-(id)vectorGlyph;
-(struct CGImage *)CGImage;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 hierarchicalColorResolver:(id)arg2 ;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 namedColorResolver:(id)arg2 ;
-(struct CGImage *)_provideCGImageWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 paletteColors:(id)arg2 ;
-(struct CGSize )sizeInPixels;
-(void)_drawWithoutEffectInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)_prepareforDrawingInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;


@end


#endif