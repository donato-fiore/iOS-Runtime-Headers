// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTEXTUALMEMORIESSETTINGSVALUETABLEVIEWCELL_H
#define PXCONTEXTUALMEMORIESSETTINGSVALUETABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint, UIView, UIButton, UILabel;



@interface PXContextualMemoriesSettingsValueTableViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *bottomLayoutMarginConstraint; // ivar: _bottomLayoutMarginConstraint
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) NSLayoutConstraint *leftLayoutMarginConstraint; // ivar: _leftLayoutMarginConstraint
@property (retain, nonatomic) UIButton *resetButton; // ivar: _resetButton
@property (copy, nonatomic) id *resetHandler; // ivar: _resetHandler
@property (retain, nonatomic) NSLayoutConstraint *rightLayoutMarginConstraint; // ivar: _rightLayoutMarginConstraint
@property (retain, nonatomic) NSLayoutConstraint *topLayoutMarginConstraint; // ivar: _topLayoutMarginConstraint
@property (readonly, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_didPressReset:(id)arg0 ;
-(void)_setUpConstraints;
-(void)layoutMarginsDidChange;


@end


#endif