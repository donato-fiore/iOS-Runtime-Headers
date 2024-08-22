// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERSTACKDEBUGPALETTEVIEW_H
#define PUPARALLAXLAYERSTACKDEBUGPALETTEVIEW_H

@class UIView, PIParallaxColorPalette;



@interface PUParallaxLayerStackDebugPaletteView : UIView

@property (readonly, nonatomic) PIParallaxColorPalette *palette; // ivar: _palette


-(id)initWithColorPalette:(id)arg0 ;
-(void)_layoutPalette:(id)arg0 origin:(struct CGPoint )arg1 cellsPerRow:(int)arg2 cellWidth:(CGFloat)arg3 callback:(id)arg4 ;
-(void)layoutSubviews;


@end


#endif