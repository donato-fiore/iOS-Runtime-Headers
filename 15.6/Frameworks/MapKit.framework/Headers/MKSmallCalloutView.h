// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKSMALLCALLOUTVIEW_H
#define MKSMALLCALLOUTVIEW_H

@class UIView, UIView<_MKCalloutAccessoryView>, NSLayoutConstraint, NSArray, UILayoutGuide, NSString;


#import "_MKUILabel.h"
#import "_MKSmallCalloutPassthroughButton.h"

@interface MKSmallCalloutView : UIView {
    _MKUILabel *_titleLabel;
    _MKUILabel *_subtitleLabel;
    UIView<_MKCalloutAccessoryView> *_leftView;
    UIView<_MKCalloutAccessoryView> *_rightView;
    UIView<_MKCalloutAccessoryView> *_externalLeftView;
    UIView<_MKCalloutAccessoryView> *_externalRightView;
    UIView<_MKCalloutAccessoryView> *_externalDetailView;
    UIView<_MKCalloutAccessoryView> *_detailView;
    BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    UIView *_unmaskedContainerView;
    ? _metrics;
    BOOL _needsPreferredContentSizeUpdate;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_unmaskedContainerLeadingConstraint;
    NSLayoutConstraint *_unmaskedContainerTrailingConstraint;
    NSArray *_titleLabelConstraints;
    NSLayoutConstraint *_titleBaselineFromTopMinimumConstraint;
    NSLayoutConstraint *_titleBaselineFromTopConstraint;
    NSLayoutConstraint *_titleMinimumBaselineToBottomConstraint;
    UILayoutGuide *_centerContentLeadingGuide;
    UILayoutGuide *_centerContentTrailingGuide;
    NSLayoutConstraint *_leftViewMinCalloutWidthConstraint;
    NSLayoutConstraint *_leftViewHorizontalPositionConstraint;
    NSLayoutConstraint *_leftViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_leftViewCenterContentMarginConstraint;
    UILayoutGuide *_leftViewTopSpacer;
    UILayoutGuide *_leftViewLeftSpacer;
    NSLayoutConstraint *_rightViewHorizontalPositionConstraint;
    NSLayoutConstraint *_rightViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_rightViewCenterContentMarginConstraint;
    UILayoutGuide *_rightViewTopSpacer;
    UILayoutGuide *_rightViewRightSpacer;
    NSLayoutConstraint *_detailViewMinTopConstraint;
    NSLayoutConstraint *_detailViewBottomConstraint;
    NSLayoutConstraint *_detailViewTrailingConstraint;
}


@property (copy, nonatomic) NSString *calloutSubtitle;
@property (copy, nonatomic) NSString *calloutTitle;
@property (retain, nonatomic) UIView *detailView;
@property (retain, nonatomic) UIView *leftView;
@property (nonatomic) CGFloat maximumWidth;
@property (nonatomic) CGFloat minimumWidth;
@property (nonatomic) BOOL parallaxEnabled; // ivar: _parallaxEnabled
@property (readonly, nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (retain, nonatomic) UIView *rightView;
@property (readonly, nonatomic) UIView *titlesContainerView; // ivar: _titlesContainerView


-(BOOL)canDisplayCompleteTitleWhenExpanded;
-(id)_maskedContainerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 metrics:(struct ? )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_setNeedsUpdatePreferredContentSize;
-(void)_updatePreferredContentSize;
-(void)_updatePreferredContentSizeIfNeeded;
-(void)beginMapsTransitionMovingSideways;
-(void)dealloc;
-(void)reset;


@end


#endif