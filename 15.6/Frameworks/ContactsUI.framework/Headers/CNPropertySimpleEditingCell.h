// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYSIMPLEEDITINGCELL_H
#define CNPROPERTYSIMPLEEDITINGCELL_H

@class NSString, UITextField;
@protocol UITextFieldDelegate;


#import "CNPropertyEditingCell.h"

@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


-(id)constantConstraints;
-(id)firstResponderItem;
-(id)valueView;
-(id)variableConstraints;
-(void)dealloc;
-(void)prepareForReuse;
-(void)textFieldChanged:(id)arg0 ;
-(void)updateValueWithPropertyItem:(id)arg0 ;


@end


#endif