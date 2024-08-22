// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PKINKCOLORBUTTON_H
#define _PKINKCOLORBUTTON_H

@class UIButton, UIColor;



@interface _PKInkColorButton : UIButton

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) BOOL isCompact; // ivar: _isCompact
@property (nonatomic) BOOL isUsedOnDarkBackground; // ivar: _isUsedOnDarkBackground


+(CGFloat)innerColorCircleInset:(BOOL)arg0 ;
+(CGFloat)swatchInsetForIsCompact:(BOOL)arg0 ;
+(CGFloat)transparentSelectionRingInset:(BOOL)arg0 ;
+(id)buttonWithColor:(id)arg0 isCompact:(BOOL)arg1 ;
+(id)embossOverlayImageForColor:(id)arg0 selected:(BOOL)arg1 isCompact:(BOOL)arg2 ;
+(id)pathForFillShapeLayerWithSwatchRect:(struct CGRect )arg0 selected:(BOOL)arg1 isCompact:(BOOL)arg2 ;
+(id)pathForSelectedColorShapeLayerWithSwatchRect:(struct CGRect )arg0 selected:(BOOL)arg1 embossed:(BOOL)arg2 isCompact:(BOOL)arg3 ;
+(id)pathForStrokeShapeLayerWithSwatchRect:(struct CGRect )arg0 selected:(BOOL)arg1 color:(id)arg2 isUsedOnDarkBackground:(BOOL)arg3 isCompact:(BOOL)arg4 ;
+(id)strokeColorForStrokeShapeLayerWithColor:(id)arg0 isUsedOnDarkBackground:(BOOL)arg1 ;
+(struct CGRect )swatchRectForBounds:(struct CGRect )arg0 isCompact:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_swatchInset;
-(id)initWithColor:(id)arg0 isCompact:(BOOL)arg1 ;
-(struct CGRect )_swatchRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif