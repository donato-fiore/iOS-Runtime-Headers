// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSITMLTWOFACTORENTRYFIELD_H
#define VSITMLTWOFACTORENTRYFIELD_H

@class IKTextFieldElement, NSString;
@protocol IKAppKeyboardDelegate;


#import "VSTwoFactorEntryTextField.h"

@interface VSITMLTwoFactorEntryField : VSTwoFactorEntryTextField <IKAppKeyboardDelegate>



@property (retain, nonatomic) IKTextFieldElement *associatedTextFieldElement; // ivar: _associatedTextFieldElement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)textDidChangeForKeyboard:(id)arg0 ;


@end


#endif