// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNUMBERFIELD_H
#define WFNUMBERFIELD_H

@class UIView, NSSet, NSString;
@protocol UITextFieldDelegate, WFVariableProvider, WFVariableUIDelegate;


#import "WFTextTokenTextField.h"

@interface WFNumberField : UIView <UITextFieldDelegate>



@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) BOOL allowsDecimalNumbers; // ivar: _allowsDecimalNumbers
@property (nonatomic) BOOL allowsNegatingNumbers; // ivar: _allowsNegatingNumbers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *doneBlock; // ivar: _doneBlock
@property (nonatomic, getter=isEditable) BOOL editable;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (copy, nonatomic) NSString *placeholder;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (weak, nonatomic) WFTextTokenTextField *textField; // ivar: _textField
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (copy, nonatomic) id *variableBlock; // ivar: _variableBlock
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider;
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate;


-(BOOL)becomeFirstResponder;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)negateText;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif