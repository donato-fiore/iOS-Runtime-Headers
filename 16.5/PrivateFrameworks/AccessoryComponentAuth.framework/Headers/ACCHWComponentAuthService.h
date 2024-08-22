// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCHWCOMPONENTAUTHSERVICE_H
#define ACCHWCOMPONENTAUTHSERVICE_H

@protocol ACCHWComponentAuthServiceProtocol;

#import <Foundation/Foundation.h>


@interface ACCHWComponentAuthService : NSObject <ACCHWComponentAuthServiceProtocol>





-(BOOL)_getForVeridianFDRData:(id)arg0 intermediateCert:(*id)arg1 leafCert:(*id)arg2 ;
-(BOOL)_verifyDeviceIDSN:(unsigned int)arg0 ;
-(BOOL)_verifyDeviceInfo:(unsigned int)arg0 ;
-(BOOL)_verifyModuleFDR:(id)arg0 forModuleType:(int)arg1 ;
-(int)_signChallenge:(id)arg0 ;
-(int)_verifyBatteryMatch:(id)arg0 ;
-(int)_verifyCertificate:(id)arg0 ;
-(int)_verifyModuleCertificate:(id)arg0 forModuleType:(int)arg1 ;
-(int)_verifySignature:(id)arg0 ;
-(unsigned int)_findModuleAuthService:(int)arg0 withAuthFlags:(*unsigned int)arg1 ;
// -(void)_authenticateModuleWithChallenge:(id)arg0 completionHandler:(id)arg1 moduleType:(unk)arg2 updateRegistry:(int)arg3  ;
-(void)_notifyComponentAuthFailure;
-(void)authenticateBatteryWithChallenge:(id)arg0 completionHandler:(id)arg1 ;
// -(void)authenticateTouchControllerWithChallenge:(id)arg0 completionHandler:(id)arg1 updateRegistry:(unk)arg2  ;
-(void)authenticateVeridianWithChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)signVeridianChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)verifyBatteryMatch:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif