// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI22MEDIASHOWCASINGTOOLBAR_H
#define _TTC8VIDEOSUI22MEDIASHOWCASINGTOOLBAR_H

@class UIView;



@interface _TtC8VideosUI22MediaShowcasingToolbar : UIView {
    ? onFullscreenPressed;
    ? onMutePressed;
    ? isMuted;
    ? shouldShowFullScreenButton;
    ? upNextButton;
    ? accountSettingButton;
    ? $__lazy_storage_$_accountSettingButtonLayout;
    ? $__lazy_storage_$_fullScreenButton;
    ? $__lazy_storage_$_muteButton;
    ? fullScreenImageName;
    ? audioOnImageName;
    ? audioOffImageName;
    ? $__lazy_storage_$_stackView;
    ? $__lazy_storage_$_layout;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif