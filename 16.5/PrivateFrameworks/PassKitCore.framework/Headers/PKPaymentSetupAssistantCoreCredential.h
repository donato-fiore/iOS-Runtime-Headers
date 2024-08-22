// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPASSISTANTCORECREDENTIAL_H
#define PKPAYMENTSETUPASSISTANTCORECREDENTIAL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PKPaymentCredential.h"

@interface PKPaymentSetupAssistantCoreCredential : NSObject

@property (readonly, retain, nonatomic) PKPaymentCredential *credential; // ivar: _credential
@property (readonly, retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)description;
-(id)initWithPaymentCredential:(id)arg0 ;
-(id)initWithPaymentPass:(id)arg0 ;


@end


#endif