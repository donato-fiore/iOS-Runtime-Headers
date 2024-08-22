// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTITLEVALUECELL_H
#define HUTITLEVALUECELL_H

@class UIStackView, NSArray, UIFont, UILabel, NSString;


#import "HUIconCell.h"

@interface HUTitleValueCell : HUIconCell

@property (nonatomic) BOOL allowCopyValueToPasteboard; // ivar: _allowCopyValueToPasteboard
@property (nonatomic) BOOL hideTitle; // ivar: _hideTitle
@property (nonatomic) BOOL hideValue; // ivar: _hideValue
@property (readonly, nonatomic) UIStackView *labelsStackView; // ivar: _labelsStackView
@property (retain, nonatomic) NSArray *stackViewConstraints; // ivar: _stackViewConstraints
@property (nonatomic) BOOL titleColorFollowsTintColor; // ivar: _titleColorFollowsTintColor
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic) BOOL useVerticalLayoutOnly; // ivar: _useVerticalLayoutOnly
@property (nonatomic) BOOL valueColorFollowsTintColor; // ivar: _valueColorFollowsTintColor
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont
@property (readonly, nonatomic) UILabel *valueLabel; // ivar: _valueLabel
@property (retain, nonatomic) NSString *valueText; // ivar: _valueText


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(CGFloat)labelSpacing;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addTitleLabel;
-(void)_addValueLabel;
-(void)_ensureCorrectHeaderViewOrientation;
-(void)_updateTitle;
-(void)_updateValue;
-(void)copy:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)prepareForReuse;
-(void)setDisabled:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif