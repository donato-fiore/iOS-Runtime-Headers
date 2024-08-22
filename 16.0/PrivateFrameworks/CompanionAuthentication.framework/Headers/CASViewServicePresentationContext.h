// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CASVIEWSERVICEPRESENTATIONCONTEXT_H
#define CASVIEWSERVICEPRESENTATIONCONTEXT_H

@class AMSDelegatePurchaseRequest, NSString, PKPaymentRequest, ACAccount;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CASSystemAuthenticationRequest.h"
#import "CASWebRequest.h"

@interface CASViewServicePresentationContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) AMSDelegatePurchaseRequest *delegatePurchaseRequest; // ivar: _delegatePurchaseRequest
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) PKPaymentRequest *paymentRequest; // ivar: _paymentRequest
@property (retain, nonatomic) ACAccount *storeAccount; // ivar: _storeAccount
@property (retain, nonatomic) CASSystemAuthenticationRequest *systemAuthenticationRequest; // ivar: _systemAuthenticationRequest
@property (retain, nonatomic) CASWebRequest *webAuthenticationRequest; // ivar: _webAuthenticationRequest


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif