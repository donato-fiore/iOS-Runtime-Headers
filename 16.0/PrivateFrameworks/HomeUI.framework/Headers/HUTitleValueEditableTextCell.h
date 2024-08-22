// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTITLEVALUEEDITABLETEXTCELL_H
#define HUTITLEVALUEEDITABLETEXTCELL_H

@class UITableViewCell, NSString, HFItem, NSLayoutConstraint, UIFont, UILabel, NSArray, UITextField;
@protocol HUDisableableCellProtocol, HUCellProtocol, HUResizableCellDelegate;



@interface HUTitleValueEditableTextCell : UITableViewCell <HUDisableableCellProtocol, HUCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideTitle; // ivar: _hideTitle
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) NSLayoutConstraint *labelsSpacingConstraint; // ivar: _labelsSpacingConstraint
@property (retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // ivar: _minimumHeightConstraint
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSArray *titleLabelConstraints; // ivar: _titleLabelConstraints
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (readonly, nonatomic) UITextField *valueTextField; // ivar: _valueTextField
@property (retain, nonatomic) NSArray *valueTextFieldConstraints; // ivar: _valueTextFieldConstraints


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addTitleLabel;
-(void)_addValueTextField;
-(void)_updateTitle;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif