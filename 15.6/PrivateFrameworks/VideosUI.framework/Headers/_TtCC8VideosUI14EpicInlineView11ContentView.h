// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC8VIDEOSUI14EPICINLINEVIEW11CONTENTVIEW_H
#define _TTCC8VIDEOSUI14EPICINLINEVIEW11CONTENTVIEW_H



#import "VUIBaseView.h"

@interface _TtCC8VideosUI14EpicInlineView11ContentView : VUIBaseView {
    ? debugUIOverlay;
    ? shelfLockupStyle;
    ? decoratedShelfLayout;
    ? mainGradientColor;
    ? disableGradient;
    ? playbackDelayInterval;
    ? playbackLoadingDelayInterval;
    ? hostMediaController;
    ? didHostMediaController;
    ? backgroundMediaController;
    ? shelfView;
    ? shelfHeight;
    ? verticalStackView;
    ? logoImageView;
    ? channelLogoView;
    ? isVideoPlaying;
    ? backgroundViewModel;
    ? playbackDidStartObserver;
    ? playbackDidStopObserver;
    ? userInterfaceStyleToRestore;
    ? $__lazy_storage_$_logoGradientView;
    ? $__lazy_storage_$_gradientContainerView;
    ? visualEffectView;
    ? $__lazy_storage_$_gradientLayer;
    ? opacityMaskLayer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif