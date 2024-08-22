// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSDASHBOARDITEMVIEW_H
#define CPSDASHBOARDITEMVIEW_H

@class UIView, UIButton, CPDashboardButton, NSString, UIColor, UIImageView, NSLayoutConstraint;
@protocol CRSUIDashboardFocusableItemProviding, CPSButtonDelegate;


#import "CPSAbridgableLabel.h"

@interface CPSDashboardItemView : UIView <CRSUIDashboardFocusableItemProviding>



@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (readonly, nonatomic) CPDashboardButton *dashboardButton; // ivar: _dashboardButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *focusBackgroundView; // ivar: _focusBackgroundView
@property (retain, nonatomic) UIColor *focusHighlightColor; // ivar: _focusHighlightColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSUInteger layoutAxis; // ivar: _layoutAxis
@property (retain, nonatomic) CPSAbridgableLabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) NSLayoutConstraint *subtitleWidthConstraint; // ivar: _subtitleWidthConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) CPSAbridgableLabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleLabelConnectingConstraint; // ivar: _titleLabelConnectingConstraint


-(id)initWithDashboardButton:(id)arg0 layoutAxis:(NSUInteger)arg1 ;
-(void)_buttonTriggered:(id)arg0 ;
-(void)_setup;
-(void)_touchDown:(id)arg0 ;
-(void)_touchEnded:(id)arg0 ;
-(void)focusableItemFocused:(BOOL)arg0 ;
-(void)focusableItemPressed:(BOOL)arg0 ;
-(void)focusableItemSelected;
-(void)hideSubtitle;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif