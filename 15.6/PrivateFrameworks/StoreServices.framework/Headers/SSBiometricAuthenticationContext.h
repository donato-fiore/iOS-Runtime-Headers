// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSBIOMETRICAUTHENTICATIONCONTEXT_H
#define SSBIOMETRICAUTHENTICATIONCONTEXT_H

@class NSLock, NSNumber, NSString, NSData, NSURL;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SSConsolidatedDialog.h"
#import "SSPaymentSheet.h"

@interface SSBiometricAuthenticationContext : NSObject <SSXPCCoding, NSCopying>

 {
    NSLock *_lock;
}


@property (copy) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy) NSString *accountName; // ivar: _accountName
@property NSInteger biometricAuthorizationAttempts; // ivar: _biometricAuthorizationAttempts
@property (copy) NSString *challenge; // ivar: _challenge
@property (retain) SSConsolidatedDialog *consolidatedDialog; // ivar: _consolidatedDialog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *dialogId; // ivar: _dialogId
@property BOOL didAuthenticate; // ivar: _didAuthenticate
@property BOOL didBuyParamsChange; // ivar: _didBuyParamsChange
@property BOOL didFallbackToPassword; // ivar: _didFallbackToPassword
@property (copy) NSString *fpanID; // ivar: _fpanID
@property (readonly) NSUInteger hash;
@property BOOL isExtendedAction; // ivar: _isExtendedAction
@property BOOL isIdentityMapInvalid; // ivar: _isIdentityMapInvalid
@property BOOL isPayment; // ivar: _isPayment
@property (copy) NSString *passwordEquivalentToken; // ivar: _passwordEquivalentToken
@property (retain) SSPaymentSheet *paymentSheet; // ivar: _paymentSheet
@property (copy) NSData *paymentTokenData; // ivar: _paymentTokenData
@property (copy) NSURL *redirectURL; // ivar: _redirectURL
@property BOOL shouldContinueTouchIDSession; // ivar: _shouldContinueTouchIDSession
@property BOOL shouldSendFallbackHeader; // ivar: _shouldSendFallbackHeader
@property (copy) NSString *signature; // ivar: _signature
@property (readonly) Class superclass;
@property BOOL touchIDDelayEnabled; // ivar: _touchIDDelayEnabled
@property (copy) NSString *userAgent; // ivar: _userAgent
@property (copy) NSString *xAppleAMDHeader; // ivar: _xAppleAMDHeader
@property (copy) NSString *xAppleAMDMHeader; // ivar: _xAppleAMDMHeader


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif