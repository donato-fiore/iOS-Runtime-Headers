// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTEXTFIELDTABLEITEM_H
#define WFTEXTFIELDTABLEITEM_H

@class UITextField, NSString;


#import "WFCustomTableItem.h"

@interface WFTextFieldTableItem : WFCustomTableItem

@property (nonatomic) BOOL becomeFirstResponderOnNextConfigure; // ivar: _becomeFirstResponderOnNextConfigure
@property (weak, nonatomic) UITextField *lastConfiguredTextField; // ivar: _lastConfiguredTextField
@property (readonly, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (readonly, nonatomic) id *textFieldSetup; // ivar: _textFieldSetup


+(id)itemWithPrimaryText:(id)arg0 initialValue:(id)arg1 textFieldSetup:(id)arg2 ;
-(void)activate;
-(void)activateNextItemIfPossible;
-(void)configureCell:(id)arg0 ;
-(void)textFieldTextDidChange:(id)arg0 ;


@end


#endif