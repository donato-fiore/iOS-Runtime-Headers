// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTEXTFIELDCELL_H
#define WFTEXTFIELDCELL_H

@class UITableViewCell, NSString, UILabel, NSLayoutConstraint, UIStackView, UITextField;
@protocol UITextFieldDelegate;



@interface WFTextFieldCell : UITableViewCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editable; // ivar: _editable
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideLabel; // ivar: _hideLabel
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (weak, nonatomic) NSLayoutConstraint *labelWidthConstraint; // ivar: _labelWidthConstraint
@property (copy, nonatomic) id *returnKeyHandler; // ivar: _returnKeyHandler
@property (weak, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint; // ivar: _stackViewBottomConstraint
@property (weak, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint; // ivar: _stackViewLeadingConstraint
@property (weak, nonatomic) NSLayoutConstraint *stackViewTopConstraint; // ivar: _stackViewTopConstraint
@property (readonly) Class superclass;
@property (copy, nonatomic) id *textChangeHandler; // ivar: _textChangeHandler
@property (weak, nonatomic) UITextField *textField; // ivar: _textField
@property (weak, nonatomic) NSLayoutConstraint *trailingMarginConstraint; // ivar: _trailingMarginConstraint


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(CGFloat)_verticalPadding;
-(void)_adjustStackViewPadding;
-(void)_updateStackViewForTraitCollection;
-(void)awakeFromNib;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setAccessoryType:(NSInteger)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditingExit:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif