// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIANIMATEDIMAGE_H
#define _UIANIMATEDIMAGE_H

@class NSArray;


#import "UIImage.h"

@interface _UIAnimatedImage : UIImage {
    NSArray *_images;
    CGFloat _duration;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_isPDFVector;
-(BOOL)_isResizable;
-(BOOL)_isSVGVector;
-(BOOL)_isTiledWhenStretchedToSize:(struct CGSize )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)duration;
-(NSInteger)resizingMode;
-(NSUInteger)hash;
-(id)_bezeledImageWithShadowRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 fillRed:(CGFloat)arg4 green:(CGFloat)arg5 blue:(CGFloat)arg6 alpha:(CGFloat)arg7 drawShadow:(BOOL)arg8 ;
-(id)_doubleBezeledImageWithExteriorShadowRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 interiorShadowRed:(CGFloat)arg4 green:(CGFloat)arg5 blue:(CGFloat)arg6 alpha:(CGFloat)arg7 fillRed:(CGFloat)arg8 green:(CGFloat)arg9 blue:(CGFloat)arg10 alpha:(CGFloat)arg11 ;
-(id)_imageScaledToProportion:(CGFloat)arg0 interpolationQuality:(int)arg1 ;
-(id)_imageWithStylePresets:(id)arg0 tintColor:(id)arg1 traitCollection:(id)arg2 ;
-(id)_initWithOtherImage:(id)arg0 ;
-(id)images;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImages:(id)arg0 duration:(CGFloat)arg1 ;
-(id)resizableImageWithCapInsets:(struct UIEdgeInsets )arg0 ;
-(id)resizableImageWithCapInsets:(struct UIEdgeInsets )arg0 resizingMode:(NSInteger)arg1 ;
-(struct CGRect )_contentRectInPixels;
-(struct CGRect )_contentStretchInPixels;
-(struct CGSize )_sizeWithHairlineThickening:(BOOL)arg0 renderingEffects:(NSUInteger)arg1 forTraitCollection:(id)arg2 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(struct UIEdgeInsets )capInsets;
-(void)_horizontallyFlipImageOrientation;
-(void)_mirrorImageOrientation;
-(void)_setAlignmentRectInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setAlwaysStretches:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif