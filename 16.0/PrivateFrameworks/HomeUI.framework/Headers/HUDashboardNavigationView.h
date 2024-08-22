// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDNAVIGATIONVIEW_H
#define HUDASHBOARDNAVIGATIONVIEW_H

@class UIView, NSArray, NSString, UILabel, UIVisualEffectView, UIButton, NSDictionary;
@protocol HUDashboardNavigationViewDelegate;



@interface HUDashboardNavigationView : UIView

@property (retain, nonatomic) NSArray *allConstraints; // ivar: _allConstraints
@property (weak, nonatomic) NSObject<HUDashboardNavigationViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hasTitleAction; // ivar: _hasTitleAction
@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) UILabel *headerTitleLabel; // ivar: _headerTitleLabel
@property (retain, nonatomic) UIVisualEffectView *headerTitleLabelEffectView; // ivar: _headerTitleLabelEffectView
@property (retain, nonatomic) UIButton *homeAppButton; // ivar: _homeAppButton
@property (retain, nonatomic) NSDictionary *largeTitleTextAttributes; // ivar: _largeTitleTextAttributes
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIButton *titleButton; // ivar: _titleButton
@property (retain, nonatomic) UIVisualEffectView *titleButtonEffectView; // ivar: _titleButtonEffectView


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didTapHomeAppButton:(id)arg0 ;
-(void)_didTapLargeTitleButton:(id)arg0 ;
-(void)_rotateChevronButtonToAngle:(CGFloat)arg0 ;
-(void)_updateTitleButton;
-(void)layoutSubviews;
-(void)rotateChevronDown;
-(void)rotateChevronUp;
-(void)updateConstraints;


@end


#endif