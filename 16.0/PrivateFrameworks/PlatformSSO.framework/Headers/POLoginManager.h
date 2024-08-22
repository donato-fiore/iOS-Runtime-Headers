// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POLOGINMANAGER_H
#define POLOGINMANAGER_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, SOHostExtensionContextProtocol;

#import <Foundation/Foundation.h>

#import "POServiceLoginManagerConnection.h"
#import "POLoginConfiguration.h"

@interface POLoginManager : NSObject <NSSecureCoding>

 {
    POServiceLoginManagerConnection *_serviceConnection;
}


@property (readonly, nonatomic) *__SecCertificate deviceAttestationCertificate; // ivar: _deviceAttestationCertificate
@property (readonly, getter=isDeviceRegistered) BOOL deviceRegistered;
@property (retain) NSObject<SOHostExtensionContextProtocol> *hostExtensionContext; // ivar: _hostExtensionContext
@property (readonly, copy, nonatomic) POLoginConfiguration *loginConfiguration;
@property (retain, nonatomic) NSString *loginUserName;
@property (readonly, copy, nonatomic) NSString *registrationToken;
@property (copy, nonatomic) NSDictionary *ssoTokens;
@property (readonly, getter=isUserRegistered) BOOL userRegistered;


+(BOOL)supportsSecureCoding;
-(BOOL)saveLoginConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct __SecCertificate *)copyDeviceAttestationCertificate;
-(struct __SecIdentity *)copyIdentityForKeyType:(NSInteger)arg0 ;
-(struct __SecKey *)copyKeyForKeyType:(NSInteger)arg0 ;
-(void)attestKey:(NSInteger)arg0 clientDataHash:(id)arg1 completion:(id)arg2 ;
-(void)deviceRegistrationsNeedsRepair;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)presentRegistrationViewControllerWithCompletion:(id)arg0 ;
-(void)resetKeys;
-(void)saveCertificate:(struct __SecCertificate *)arg0 keyType:(NSInteger)arg1 ;
-(void)userNeedsReauthentication;
-(void)userNeedsReauthenticationWithCompletion:(id)arg0 ;
-(void)userRegistrationsNeedsRepair;


@end


#endif