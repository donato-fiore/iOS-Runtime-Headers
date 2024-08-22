// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTEXTFIELDTABLECELL_H
#define WFTEXTFIELDTABLECELL_H

@class UITableViewCell, UILabel, NSString, UIStackView, UITextField;
@protocol UITextFieldDelegate;


#import "WFTextFieldTableItem.h"

@interface WFTextFieldTableCell : UITableViewCell <UITextFieldDelegate>

 {
    UILabel *_textLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (weak, nonatomic) WFTextFieldTableItem *tableItem; // ivar: _tableItem
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textLabel;
-(void)prepareForReuse;
-(void)textDidChange:(id)arg0 ;


@end


#endif