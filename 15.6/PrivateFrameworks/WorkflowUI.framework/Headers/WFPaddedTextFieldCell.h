// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPADDEDTEXTFIELDCELL_H
#define WFPADDEDTEXTFIELDCELL_H

@class UITableViewCell;


#import "WFPaddedTextField.h"

@interface WFPaddedTextFieldCell : UITableViewCell

@property (nonatomic) CGFloat leftOffset; // ivar: _leftOffset
@property (readonly, nonatomic) WFPaddedTextField *textField; // ivar: _textField


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif