// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI11OVERLAYVIEW_H
#define _TTC8VIDEOSUI11OVERLAYVIEW_H



#import "VUIBaseView.h"
#import "VUILabel.h"

@interface _TtC8VideosUI11OverlayView : VUIBaseView {
    ? hasPageControlDisplayedOnTop;
    ? padding;
    ? badgeViewWrappers;
    ? overlayType;
    ? gradientLayer;
    ? gradientView;
    ? titleLabel;
    ? textBadge;
    ? progressView;
}


@property (nonatomic, readonly) VUILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) BOOL vuiDebugUI;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;


@end


#endif