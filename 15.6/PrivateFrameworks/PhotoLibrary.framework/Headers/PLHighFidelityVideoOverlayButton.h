// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLHIGHFIDELITYVIDEOOVERLAYBUTTON_H
#define PLHIGHFIDELITYVIDEOOVERLAYBUTTON_H

@class UIView, UIButton, _UIBackdropView, UIImageView;
@protocol PLVideoOverlayButton;



@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton>

 {
    NSInteger _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    id *_target;
    SEL _action;
}




-(NSInteger)style;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_playButtonActivate:(id)arg0 ;
-(void)_playButtonDeactivate:(id)arg0 ;
-(void)_playButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif