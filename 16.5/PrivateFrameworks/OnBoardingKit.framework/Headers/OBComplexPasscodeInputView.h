// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBCOMPLEXPASSCODEINPUTVIEW_H
#define OBCOMPLEXPASSCODEINPUTVIEW_H

@class NSString, UITextField;
@protocol UITextFieldDelegate;


#import "OBPasscodeInputView.h"

@interface OBComplexPasscodeInputView : OBPasscodeInputView <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextField *passcodeField; // ivar: _passcodeField
@property (readonly) Class superclass;


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 numericOnly:(BOOL)arg1 ;
-(id)passcode;
-(id)passcodeDisplayView;
-(void)setPasscode:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif