// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGFCRCALAYEROUTPUTNODELAYER_H
#define FIGFCRCALAYEROUTPUTNODELAYER_H



#import "FigBaseCALayer.h"

@interface FigFCRCALayerOutputNodeLayer : FigBaseCALayer {
    *OpaqueFigCaptionRendererCALayerOutputNodeLayerInternal layerInternal;
}




-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(void)_addBoundsAnimationToLayer:(id)arg0 usingAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addPositionAnimationToLayer:(id)arg0 usingAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContents:(id)arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setNodeOptions:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setNodeSeparated:(BOOL)arg0 ;
-(void)setPosition:(struct CGPoint )arg0 ;
-(void)setWindowOpacity:(CGFloat)arg0 ;


@end


#endif