// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWIDGETCONFIGURATIONCARDHEADERVIEW_H
#define WFWIDGETCONFIGURATIONCARDHEADERVIEW_H

@class UIView, NSLayoutConstraint, UIButton, UIStackView, UILabel;
@protocol WFWidgetConfigurationCardHeaderViewDelegate;



@interface WFWidgetConfigurationCardHeaderView : UIView

@property (readonly, nonatomic) NSLayoutConstraint *bottomAreaHeightConstraint; // ivar: _bottomAreaHeightConstraint
@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (weak, nonatomic) NSObject<WFWidgetConfigurationCardHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIStackView *labelsStackView; // ivar: _labelsStackView
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGFloat widgetDescriptionTallScriptCompensatedSpacing; // ivar: _widgetDescriptionTallScriptCompensatedSpacing


-(id)initWithIcon:(id)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(id)initWithRequest:(id)arg0 ;
-(void)close;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif