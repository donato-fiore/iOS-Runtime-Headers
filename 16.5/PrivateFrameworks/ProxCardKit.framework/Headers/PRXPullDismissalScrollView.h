// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRXPULLDISMISSALSCROLLVIEW_H
#define PRXPULLDISMISSALSCROLLVIEW_H

@class UIScrollView, NSLayoutConstraint, UIView;



@interface PRXPullDismissalScrollView : UIScrollView {
    CGRect _lastLayoutFrame;
    NSLayoutConstraint *_contentHeightConstraint;
    BOOL _hasDimissed;
}


@property (nonatomic) BOOL allowsPullToDismiss; // ivar: _allowsPullToDismiss
@property (readonly, nonatomic) UIView *dismissableContentContainerView; // ivar: _dismissableContentContainerView
@property (readonly, nonatomic) CGFloat dismissalPercent;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif