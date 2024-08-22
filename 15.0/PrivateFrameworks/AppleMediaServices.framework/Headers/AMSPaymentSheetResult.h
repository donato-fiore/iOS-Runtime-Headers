// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSPAYMENTSHEETRESULT_H
#define AMSPAYMENTSHEETRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AMSBiometricsSignatureResult.h"

@interface AMSPaymentSheetResult : NSObject

@property (retain, nonatomic) NSString *delegateAuthenticateToken; // ivar: _delegateAuthenticateToken
@property (retain, nonatomic) NSString *passwordEquivalentToken; // ivar: _passwordEquivalentToken
@property (retain, nonatomic) NSString *paymentToken; // ivar: _paymentToken
@property (retain, nonatomic) AMSBiometricsSignatureResult *signatureResult; // ivar: _signatureResult




@end


#endif