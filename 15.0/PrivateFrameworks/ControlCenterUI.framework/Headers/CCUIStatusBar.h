// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUISTATUSBAR_H
#define CCUISTATUSBAR_H

@class UIView, UIStatusBar_Modern, UIStatusBarStyleRequest;
@protocol CCUIStatusBarDelegate;



@interface CCUIStatusBar : UIView {
    UIStatusBar_Modern *_compactTrailingStatusBar;
    UIStatusBar_Modern *_expandedStatusBar;
    BOOL _needsUpdatedMetrics;
    CGFloat _trailingMarginDelta;
    CGFloat _verticalBatteryAlignmentDelta;
}


@property (nonatomic) BOOL alignCompactAndExpandedStatusBars; // ivar: _alignCompactAndExpandedStatusBars
@property (nonatomic) UIEdgeInsets compactEdgeInsets; // ivar: _compactEdgeInsets
@property (nonatomic) CGAffineTransform compactScaleTransform; // ivar: _compactScaleTransform
@property (nonatomic) CGFloat compactTrailingAlpha;
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *compactTrailingStyleRequest;
@property (weak, nonatomic) NSObject<CCUIStatusBarDelegate> *delegate; // ivar: _delegate
@property (nonatomic) UIEdgeInsets expandedEdgeInsets; // ivar: _expandedEdgeInsets
@property (nonatomic) CGFloat expandedStatusBarTranslation; // ivar: _expandedStatusBarTranslation
@property (nonatomic) CGFloat expandedTrailingAlpha;
@property (nonatomic) CGFloat leadingAlpha;
@property (nonatomic) NSUInteger leadingState; // ivar: _leadingState
@property (readonly, nonatomic) CGFloat maxCompactScaleFactor; // ivar: _maxCompactScaleFactor
@property (nonatomic) NSInteger orientation;
@property (nonatomic) NSUInteger trailingState; // ivar: _trailingState
@property (readonly, nonatomic) CGFloat verticalSecondaryServiceDelta; // ivar: _verticalSecondaryServiceDelta


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )compactAvoidanceFrame;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateCompactTrailingStatusBarStyleRequestAndAvoidanceFrame;
-(void)_updateMetricsIfNeeded;
-(void)_updateShadow;
-(void)controlCenterApplyPrimaryContentShadow;
-(void)layoutSubviews;
-(void)prepareForPresentation;


@end


#endif