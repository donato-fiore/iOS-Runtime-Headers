// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRPARAGRAPHTABLEVIEWCELL_H
#define HRPARAGRAPHTABLEVIEWCELL_H

@class UITableViewCell, UIButton, NSLayoutConstraint, NSString, UILabel;



@interface HRParagraphTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) NSLayoutConstraint *buttonBaselineConstraint; // ivar: _buttonBaselineConstraint
@property (copy, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (retain, nonatomic) NSLayoutConstraint *contentViewButtonBottomConstraint; // ivar: _contentViewButtonBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentViewParagraphBottomConstraint; // ivar: _contentViewParagraphBottomConstraint
@property (retain, nonatomic) UILabel *paragraphLabel; // ivar: _paragraphLabel
@property (retain, nonatomic) NSLayoutConstraint *paragraphLabelBaselineConstraint; // ivar: _paragraphLabelBaselineConstraint
@property (copy, nonatomic) NSString *paragraphText; // ivar: _paragraphText
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleLabelBaselineConstraint; // ivar: _titleLabelBaselineConstraint
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


+(id)reuseIdentifier;
-(CGFloat)_lastViewToBottom;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateBottomConstraint;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif