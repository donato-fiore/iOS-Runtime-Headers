// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POUSERCONFIGURATION_H
#define POUSERCONFIGURATION_H

@class NSData, LAContext, NSArray, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "POKeychainHelper.h"

@interface POUserConfiguration : NSObject <NSSecureCoding>



@property (retain) NSData *_contextData; // ivar: __contextData
@property (retain) NSData *_credential; // ivar: __credential
@property (retain) NSData *_sepKeyData; // ivar: __sepKeyData
@property (retain) LAContext *credentialContext; // ivar: _credentialContext
@property (retain) NSArray *kerberosStatus; // ivar: _kerberosStatus
@property (retain) POKeychainHelper *keychainHelper; // ivar: _keychainHelper
@property NSUInteger loginType; // ivar: _loginType
@property (retain) NSString *loginUserName; // ivar: _loginUserName
@property (retain) NSData *pendingSSOTokens; // ivar: _pendingSSOTokens
@property *__SecKey sepKey; // ivar: _sepKey
@property (nonatomic) *__SecCertificate sepKeyCertificate; // ivar: _sepKeyCertificate
@property (retain) NSString *ssoExtensionIdentifier; // ivar: _ssoExtensionIdentifier
@property NSInteger state; // ivar: _state
@property (readonly) NSDate *tokenExpiration;
@property (readonly) NSDate *tokenReceived;
@property (readonly) NSData *tokens;
@property (retain) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)encryptPendingSSOTokens:(id)arg0 usingPublicKey:(struct __SecKey *)arg1 ;
-(id)calculateExpirationForTokens:(id)arg0 ;
-(id)currentRefreshToken;
-(id)dataRepresentation;
-(id)dataRepresentationForDisplay:(BOOL)arg0 ;
-(id)decryptPendingSSOTokensUsingPrivateKey:(struct __SecKey *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 contextData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif