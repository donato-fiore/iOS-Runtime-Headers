// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILABELLAYER_H
#define _UILABELLAYER_H

@class CALayer;


#import "_UILabelContentLayer.h"

@interface _UILabelLayer : CALayer {
    _UILabelContentLayer *_contentLayer;
    BOOL _contentInsetsValid;
    UIEdgeInsets _contentInsets;
}




-(id)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)_clearContents;
-(void)_setLabelMasksToBoundsForAnimation:(BOOL)arg0 ;
-(void)_updateContentLayer;
-(void)invalidateContentInsets;
-(void)layoutSublayers;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentsFormat:(id)arg0 ;
-(void)setContentsGravity:(id)arg0 ;
-(void)setContentsMultiplyColor:(struct CGColor *)arg0 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setMasksToBounds:(BOOL)arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg0 ;
-(void)updateContentInsets;


@end


#endif