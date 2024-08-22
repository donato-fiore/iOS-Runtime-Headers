// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLOVERLAYPLAYBUTTON_H
#define QLOVERLAYPLAYBUTTON_H

@class UIView, UIButton, _UIBackdropView;



@interface QLOverlayPlayButton : UIView {
    UIButton *_button;
    _UIBackdropView *_backdropView;
    id *_target;
    SEL _action;
}




-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_playButtonActivate:(id)arg0 ;
-(void)_playButtonDeactivate:(id)arg0 ;
-(void)_playButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif