// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPUIAUTHENTICATIONTEXTINPUTCELL_H
#define FPUIAUTHENTICATIONTEXTINPUTCELL_H

@class UITableViewCell, UIStackView, UILabel, UITextField;



@interface FPUIAuthenticationTextInputCell : UITableViewCell {
    UIStackView *_stackView;
}


@property (readonly, weak, nonatomic) UILabel *label; // ivar: _label
@property (readonly, weak, nonatomic) UITextField *textField; // ivar: _textField


-(BOOL)_isLargeTextTraitCollection:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif