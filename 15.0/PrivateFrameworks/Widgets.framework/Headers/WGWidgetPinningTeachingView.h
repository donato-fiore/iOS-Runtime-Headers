// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGWIDGETPINNINGTEACHINGVIEW_H
#define WGWIDGETPINNINGTEACHINGVIEW_H

@class UIView, UILabel, UIButton, NSLayoutConstraint;
@protocol WGWidgetPinningTeachingViewDelegate;


#import "WGWidgetPinningTeachingAnimationView.h"

@interface WGWidgetPinningTeachingView : UIView

@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<WGWidgetPinningTeachingViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) WGWidgetPinningTeachingAnimationView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) UIButton *noButton; // ivar: _noButton
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleLabelToBodyLabelConstraint; // ivar: _titleLabelToBodyLabelConstraint
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // ivar: _titleLabelTopConstraint
@property (retain, nonatomic) UIButton *yesButton; // ivar: _yesButton


-(id)init;
-(void)_contentSizeCategoryDidChange;
-(void)_createConstraints;
-(void)_createContainerViews;
-(void)_createContentViews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setupButtonsTargets;
-(void)_updateAppearance;
-(void)_updateFontDependantConstraints;
-(void)_updateFonts;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif