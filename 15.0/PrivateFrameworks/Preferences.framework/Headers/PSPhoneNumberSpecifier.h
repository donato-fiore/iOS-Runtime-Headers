// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSPHONENUMBERSPECIFIER_H
#define PSPHONENUMBERSPECIFIER_H

@class NSString;
@protocol UITextFieldDelegate;


#import "PSTextFieldSpecifier.h"

@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <UITextFieldDelegate>



@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif