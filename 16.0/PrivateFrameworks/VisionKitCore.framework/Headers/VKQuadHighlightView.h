// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKQUADHIGHLIGHTVIEW_H
#define VKQUADHIGHLIGHTVIEW_H

@class UIView, CAShapeLayer;


#import "VKPointAnimatableProperty.h"
#import "VKQuad.h"

@interface VKQuadHighlightView : UIView {
    VKPointAnimatableProperty *_topLeft;
    VKPointAnimatableProperty *_topRight;
    VKPointAnimatableProperty *_bottomRight;
    VKPointAnimatableProperty *_bottomLeft;
    CAShapeLayer *_shadowLayer;
    CAShapeLayer *_shadowLayerMaskLayer;
    CAShapeLayer *_highlightLayer;
}


@property (retain, nonatomic) VKQuad *quad; // ivar: _quad


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_drawHighlight;
-(void)animateToQuad:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif