// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKZOOMSLIDERVIEW_H
#define _MKZOOMSLIDERVIEW_H

@class UIView, NSLayoutConstraint, UIImageView;



@interface _MKZoomSliderView : UIView {
    NSLayoutConstraint *_knobCenterYConstraint;
    UIView *_knob;
    UIImageView *_shadowImageView;
    CGFloat _lastTrackShadowImageScale;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) CGFloat zoomFraction; // ivar: _zoomFraction


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif