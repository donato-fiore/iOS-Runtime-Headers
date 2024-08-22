// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC8VIDEOSUI16FLOWCASEVIEWCELL19FLOWCASEOVERLAYVIEW_H
#define _TTCC8VIDEOSUI16FLOWCASEVIEWCELL19FLOWCASEOVERLAYVIEW_H



#import "VUIBaseView.h"

@interface _TtCC8VideosUI16FlowcaseViewCell19FlowcaseOverlayView : VUIBaseView {
    ? transitionAnimationDuration;
    ? overlayLayout;
    ? gradientColor;
    ? disableGradient;
    ? titleView;
    ? badgeView;
    ? verticalStackView;
    ? logoImageView;
    ? channelLogoView;
    ? alphaImageView;
    ? isPlayingVideo;
    ? $__lazy_storage_$_logoGradientView;
    ? $__lazy_storage_$_visualEffectContainerView;
    ? $__lazy_storage_$_visualEffectView;
    ? nonPlaybackGradientView;
    ? $__lazy_storage_$_playbackGradientView;
    ? $__lazy_storage_$_opacityMaskLayer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif