// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTOOLPREVIEWVIEW_H
#define PKTOOLPREVIEWVIEW_H

@class UIView, CABackdropLayer, CAShapeLayer, CALayer;



@interface PKToolPreviewView : UIView {
    CABackdropLayer *_backdropLayer;
    CAShapeLayer *_shapeLayer;
    CALayer *_symbolLayer;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif