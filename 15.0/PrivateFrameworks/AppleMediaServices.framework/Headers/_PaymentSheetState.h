// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PAYMENTSHEETSTATE_H
#define _PAYMENTSHEETSTATE_H

@class NSError, NSString;

#import <Foundation/Foundation.h>

#import "AMSBiometricsSignatureResult.h"

@interface _PaymentSheetState : NSObject

@property (nonatomic) NSUInteger cancellationType; // ivar: _cancellationType
@property (nonatomic) BOOL didAuthorizePayment; // ivar: _didAuthorizePayment
@property (nonatomic) BOOL didBiometricsLockout; // ivar: _didBiometricsLockout
@property (nonatomic) BOOL didPresent; // ivar: _didPresent
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *passwordEquivalentToken; // ivar: _passwordEquivalentToken
@property (retain, nonatomic) NSString *paymentToken; // ivar: _paymentToken
@property (retain, nonatomic) AMSBiometricsSignatureResult *signatureResult; // ivar: _signatureResult


-(id)init;


@end


#endif