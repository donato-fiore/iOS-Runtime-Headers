// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPICKERITEMCELL_H
#define CNPICKERITEMCELL_H

@class UITableViewCell, UITextField;



@interface CNPickerItemCell : UITableViewCell

@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (retain, nonatomic) UITextField *textField; // ivar: _textField


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif