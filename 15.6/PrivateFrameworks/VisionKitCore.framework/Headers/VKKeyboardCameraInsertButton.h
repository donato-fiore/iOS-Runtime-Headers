// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKKEYBOARDCAMERAINSERTBUTTON_H
#define VKKEYBOARDCAMERAINSERTBUTTON_H

@class UIView, UIButton, UIVisualEffectView;



@interface VKKeyboardCameraInsertButton : UIView {
    UIButton *_button;
    UIVisualEffectView *_effectView;
}


@property (readonly, nonatomic) UIButton *uiButton;


-(BOOL)isEnabled;
-(id)initWithPrimaryAction:(id)arg0 ;
-(id)viewForFirstBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif