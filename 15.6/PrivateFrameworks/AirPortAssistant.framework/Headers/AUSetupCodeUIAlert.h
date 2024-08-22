// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUSETUPCODEUIALERT_H
#define AUSETUPCODEUIALERT_H

@class UITextRange, NSString;
@protocol UIAlertViewDelegate, UITextFieldDelegate;


#import "AUTextFieldUIAlert.h"

@interface AUSetupCodeUIAlert : AUTextFieldUIAlert <UIAlertViewDelegate, UITextFieldDelegate>

 {
    UITextRange *_selectionRange;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(void)dealloc;
-(void)formatSetupCodeWithSender:(id)arg0 ;
-(void)prepareToShow;


@end


#endif