// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTFLOATINGBACKGROUNDVIEW_H
#define PKTEXTINPUTFLOATINGBACKGROUNDVIEW_H

@class UIView, UIVisualEffectView;



@interface PKTextInputFloatingBackgroundView : UIView

@property (readonly, nonatomic) UIVisualEffectView *_blurView; // ivar: __blurView
@property (readonly, nonatomic) UIView *_textureView; // ivar: __textureView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif