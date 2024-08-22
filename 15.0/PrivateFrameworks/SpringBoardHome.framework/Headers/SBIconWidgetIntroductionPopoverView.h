// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONWIDGETINTRODUCTIONPOPOVERVIEW_H
#define SBICONWIDGETINTRODUCTIONPOPOVERVIEW_H

@class UIView, UIButton, UILabel;
@protocol SBIconWidgetIntroductionDelegate;



@interface SBIconWidgetIntroductionPopoverView : UIView

@property (weak, nonatomic) NSObject<SBIconWidgetIntroductionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *editButton; // ivar: _editButton
@property (retain, nonatomic) UIView *maskView; // ivar: _maskView
@property (retain, nonatomic) UIButton *okButton; // ivar: _okButton
@property (retain, nonatomic) UIView *popoverView; // ivar: _popoverView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) UIView *verticalDividerLine; // ivar: _verticalDividerLine


+(struct CGSize )contentSize:(BOOL)arg0 ;
-(id)initWithDelegate:(id)arg0 vertical:(BOOL)arg1 ;
-(void)editButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)okButtonTapped:(id)arg0 ;
-(void)setUpButtonsInPopoverView:(id)arg0 vibrantContentView:(id)arg1 layoutGuide:(id)arg2 vertical:(BOOL)arg3 ;
-(void)setUpViews:(BOOL)arg0 ;


@end


#endif