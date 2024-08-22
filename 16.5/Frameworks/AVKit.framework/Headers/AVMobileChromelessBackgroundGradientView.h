// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOBILECHROMELESSBACKGROUNDGRADIENTVIEW_H
#define AVMOBILECHROMELESSBACKGROUNDGRADIENTVIEW_H

@class UIView, CAGradientLayer;



@interface AVMobileChromelessBackgroundGradientView : UIView {
    CAGradientLayer *_backgroundGradientLayer;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)_setUpLayersIfNeeded;
-(void)_updateGradientLayerState;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif