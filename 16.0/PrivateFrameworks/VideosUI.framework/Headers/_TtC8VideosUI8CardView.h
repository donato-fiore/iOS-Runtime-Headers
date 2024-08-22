// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI8CARDVIEW_H
#define _TTC8VIDEOSUI8CARDVIEW_H

@class VUIImageView, UIView, NSArray;


#import "VUIBaseView.h"

@interface _TtC8VideosUI8CardView : VUIBaseView {
    ? debugUI;
    ? cardViewLayout;
    ? imageView;
    ? appImageView;
    ? overlayView;
    ? labelViews;
    ? button;
    ? attributionView;
}


@property (nonatomic, readonly) VUIImageView *accessibilityAppImageView;
@property (nonatomic, readonly) UIView *accessibilityButton;
@property (nonatomic, readonly) VUIImageView *accessibilityImageView;
@property (nonatomic, readonly) NSArray *accessibilityLabelViews;
@property (nonatomic, readonly) UIView *accessibilityOverlayView;
@property (nonatomic, readonly) BOOL vuiDebugUI;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif