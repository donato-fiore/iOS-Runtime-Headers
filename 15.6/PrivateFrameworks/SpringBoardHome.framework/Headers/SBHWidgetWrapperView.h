// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHWIDGETWRAPPERVIEW_H
#define SBHWIDGETWRAPPERVIEW_H

@class UIView, NSLayoutConstraint, NSString, UILabel;


#import "SBIconView.h"
#import "SBHShadowedWidgetView.h"

@interface SBHWidgetWrapperView : UIView

@property (readonly, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint; // ivar: _contentHeightConstraint
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) SBIconView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSLayoutConstraint *contentWidthConstraint; // ivar: _contentWidthConstraint
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat extraSpacingBetweenWidgetAndTitle; // ivar: _extraSpacingBetweenWidgetAndTitle
@property (nonatomic, getter=isHoverAnimationEnabled) BOOL hoverAnimationEnabled; // ivar: _hoverAnimationEnabled
@property (readonly, nonatomic) CATransform3D hoverTransform;
@property (readonly, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (readonly, nonatomic) SBHShadowedWidgetView *shadowedWidgetView; // ivar: _shadowedWidgetView
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL titleAndSubtitleVisible; // ivar: _titleAndSubtitleVisible
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *widgetToTitleSpacingConstraint; // ivar: _widgetToTitleSpacingConstraint


-(id)init;
-(id)initWithTitleAndSubtitleVisible:(BOOL)arg0 ;
-(id)newPortaledShadowedWidgetView;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_updateContentSizeConstraints;
-(void)_updateHoverAnimation;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif