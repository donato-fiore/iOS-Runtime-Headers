// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSBANNERCONTAINERVIEW_H
#define CPSBANNERCONTAINERVIEW_H

@class UIView, UIPanGestureRecognizer, NSLayoutConstraint, NSString;
@protocol UIGestureRecognizerDelegate;



@interface CPSBannerContainerView : UIView <UIGestureRecognizerDelegate>

 {
    UIPanGestureRecognizer *_dismissGesture;
    NSLayoutConstraint *_verticalPositionConstraintForDismissGesture;
    NSLayoutConstraint *_verticalPositionConstraintWhenVisible;
    NSLayoutConstraint *_verticalPositionConstraintWhenHidden;
    CGFloat _verticalPositionOffsetForDismissGesture;
    BOOL _bannerCrossFading;
    CGFloat _widthDuringLastBannerAnimation;
}


@property (nonatomic) BOOL bannerHasAccessibilityFocus; // ivar: _bannerHasAccessibilityFocus
@property (nonatomic, getter=isBannerHidden) BOOL bannerHidden; // ivar: _bannerHidden
@property (retain, nonatomic) UIView *bannerView; // ivar: _bannerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTrackingBannerDismissGesture) BOOL trackingBannerDismissGesture;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithBannerView:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_accessibilityElementFocusDidChange:(id)arg0 ;
-(void)_commonInit;
-(void)_dismissGestureRecognized:(id)arg0 ;
-(void)_installBannerViewIfNeeded;
-(void)_removeBannerAnimationsIfNeeded;
-(void)_updateBannerContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif