// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI18TEXTFIELDVALIDATOR_H
#define _TTC8STOCKSUI18TEXTFIELDVALIDATOR_H

@protocol UITextFieldDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8StocksUI18TextFieldValidator : NSObject <UITextFieldDelegate>

 {
    ? submit;
    ? isTextValid;
    ? setAllowSubmission;
}




-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)init;


@end


#endif