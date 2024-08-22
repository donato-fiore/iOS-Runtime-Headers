// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETCOLORGRADIENTVIEW_H
#define ETCOLORGRADIENTVIEW_H

@class UIView, UIImageView;



@interface ETColorGradientView : UIView {
    UIImageView *_imageView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)hideColorWheelWithRotation:(CGFloat)arg0 completion:(id)arg1 ;
-(void)prepareToAnimateColorWheelWithRotation:(CGFloat)arg0 ;
-(void)revealColorWheelWithCompletion:(id)arg0 ;


@end


#endif