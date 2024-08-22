// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI21STYLEDPROGRESSBARVIEW_H
#define _TTC8VIDEOSUI21STYLEDPROGRESSBARVIEW_H



#import "VUIBaseView.h"

@interface _TtC8VideosUI21StyledProgressBarView : VUIBaseView {
    ? progressBarView;
    ? shadowImageView;
    ? style;
    ? cornerRadius;
    ? height;
    ? progress;
    ? progressTintColor;
    ? gradientStartColor;
    ? gradientEndColor;
    ? completeTintColor;
    ? shouldProgressBarUseRoundCorner;
    ? padding;
}


@property (nonatomic, readonly) CGFloat accessibilityProgress;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)vui_setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;


@end


#endif