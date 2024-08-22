// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSITMLCREDENTIALENTRYFIELD_H
#define VSITMLCREDENTIALENTRYFIELD_H

@class IKTextFieldElement, NSString;
@protocol IKAppKeyboardDelegate;


#import "VSCredentialEntryField.h"

@interface VSITMLCredentialEntryField : VSCredentialEntryField <IKAppKeyboardDelegate>



@property (retain, nonatomic) IKTextFieldElement *associatedTextFieldElement; // ivar: _associatedTextFieldElement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)textDidChangeForKeyboard:(id)arg0 ;


@end


#endif