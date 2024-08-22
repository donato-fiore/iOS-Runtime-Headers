// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKEDITABLETEXTFIELDCELL_H
#define TSKEDITABLETEXTFIELDCELL_H

@class UITableViewCell, UITextField;



@interface TSKEditableTextFieldCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField; // ivar: mTextField


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)beginEditing;
-(void)dealloc;
-(void)endEditing;
-(void)layoutSubviews;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif