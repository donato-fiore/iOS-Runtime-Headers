// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKINLINENOTIFICATIONVIEW_H
#define CKINLINENOTIFICATIONVIEW_H

@class UIView, UIVisualEffectView;
@protocol CKInlineNotificationViewDelegate;



@interface CKInlineNotificationView : UIView {
    BOOL _visible;
}


@property (readonly, nonatomic) BOOL _shouldSuppressLayout;
@property (nonatomic) BOOL animatingVisibility; // ivar: _animatingVisibility
@property (retain, nonatomic) UIVisualEffectView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIView *bottomLineView; // ivar: _bottomLineView
@property (retain, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) NSObject<CKInlineNotificationViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL visible;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )contentViewSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidateContentViewHeight;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif