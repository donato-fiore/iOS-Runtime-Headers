// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUISASHVIEW_H
#define SIRIUISASHVIEW_H

@class UIView, UIImageView, UIVisualEffectView, UIButton;


#import "SiriUITextContainerView.h"
#import "SiriUISashItem.h"

@interface SiriUISashView : UIView {
    UIView *_contentView;
    UIImageView *_imageView;
    SiriUITextContainerView *_textContainerView;
    BOOL _requestsExtraPadding;
    UIVisualEffectView *_vibrantButtonBackgroundView;
    UIVisualEffectView *_vibrantTextBackgroundView;
}


@property (readonly, nonatomic) UIButton *backNavigationButton; // ivar: _backNavigationButton
@property (nonatomic, getter=isNavigating) BOOL navigating; // ivar: _navigating
@property (readonly, nonatomic) SiriUISashItem *sashItem; // ivar: _sashItem


+(id)_font;
+(struct ? )_textContainerStyleForSashItem:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupBackNavigationButton;
-(void)layoutSubviews;


@end


#endif