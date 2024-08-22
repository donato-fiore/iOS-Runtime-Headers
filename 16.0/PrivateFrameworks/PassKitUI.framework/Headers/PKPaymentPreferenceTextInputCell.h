// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPREFERENCETEXTINPUTCELL_H
#define PKPAYMENTPREFERENCETEXTINPUTCELL_H

@class UITextField;


#import "PKTableViewCell.h"

@interface PKPaymentPreferenceTextInputCell : PKTableViewCell

@property (retain, nonatomic) UITextField *textField; // ivar: _textField


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif