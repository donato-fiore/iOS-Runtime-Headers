// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBAUTHORIZEAPPLEPAYENROLLMENTACTION_H
#define AMSUIWEBAUTHORIZEAPPLEPAYENROLLMENTACTION_H

@class NSNumber, NSString, NSDictionary;


#import "AMSUIWebAction.h"

@interface AMSUIWebAuthorizeApplePayEnrollmentAction : AMSUIWebAction

@property (retain, nonatomic) NSNumber *confirmationStyle; // ivar: _confirmationStyle
@property (retain, nonatomic) NSString *passSerialNumber; // ivar: _passSerialNumber
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (retain, nonatomic) NSDictionary *paymentSession; // ivar: _paymentSession


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif