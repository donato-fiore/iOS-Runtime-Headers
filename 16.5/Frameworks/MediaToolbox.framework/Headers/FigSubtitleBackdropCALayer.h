// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGSUBTITLEBACKDROPCALAYER_H
#define FIGSUBTITLEBACKDROPCALAYER_H



#import "FigBaseCALayer.h"

@interface FigSubtitleBackdropCALayer : FigBaseCALayer {
    *OpaqueFigSubtitleBackdropCALayerInternal bdLayerInternal;
}




-(BOOL)shouldEnableBackdropLayer;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(void)_addBoundsAnimationToLayer:(id)arg0 usingAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addPositionAnimationToLayer:(id)arg0 usingAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContents:(id)arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsLayout;
-(void)updateBackdropLayer;
-(void)updateHDRContentState:(BOOL)arg0 ;
-(void)updateWindowOpacity:(CGFloat)arg0 ;


@end


#endif