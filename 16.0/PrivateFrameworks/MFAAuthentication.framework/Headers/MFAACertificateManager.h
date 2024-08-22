// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFAACERTIFICATEMANAGER_H
#define MFAACERTIFICATEMANAGER_H

@class NSUserDefaults, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface MFAACertificateManager : NSObject

@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)isBAAUserCertInfo:(id)arg0 ;
+(BOOL)isBAAUserPolicy:(NSUInteger)arg0 ;
+(BOOL)isComponentCertInfo:(id)arg0 ;
+(BOOL)isComponentPolicy:(NSUInteger)arg0 ;
+(BOOL)isMFi2_3CertInfo:(id)arg0 ;
+(BOOL)isMFi2_3Policy:(NSUInteger)arg0 ;
+(id)_anchorCertificatesDataForTypes:(int)arg0 ;
+(id)anchorCertificatesForTypes:(int)arg0 ;
+(id)sharedManager;
-(BOOL)verifyCertificateChainInfoSerialNumber:(id)arg0 ;
-(BOOL)verifyCertificateSerialNumber:(id)arg0 authVer:(int)arg1 ;
-(BOOL)verifyCertificateSerialNumberBySerialNumber:(id)arg0 authVer:(int)arg1 ;
-(BOOL)verifyNonceSignature:(id)arg0 nonce:(id)arg1 signature:(id)arg2 ;
-(id)_getAnchorCertsForPolicy:(NSUInteger)arg0 ;
-(id)_init;
-(id)copyCertificateSerialNumber:(id)arg0 authVer:(int)arg1 ;
-(id)copyEvaluatedCertificateChainInfo:(id)arg0 ;
-(id)copyLeafCertificateSerialNumber:(id)arg0 ;
-(id)copyParsedCertificateChainInfo:(id)arg0 ;
-(id)copyParsedCertificateChainInfo:(id)arg0 assumeType:(int)arg1 ;
-(id)createVeridianNonce:(id)arg0 withChallenge:(id)arg1 ;
-(id)init;
-(int)_getCachedCertStatus:(id)arg0 issuerSeq:(id)arg1 ppid:(id)arg2 ;
-(int)_validateBAACertificateChain:(id)arg0 error:(*id)arg1 ;
-(int)_validateCertificateChain:(id)arg0 realtime:(BOOL)arg1 error:(*id)arg2 ;
-(int)_validateCertificateWithServer:(id)arg0 issuerSeq:(id)arg1 ppid:(id)arg2 error:(*id)arg3 ;
-(int)_validateX509CertificateChain:(id)arg0 anchorCerts:(id)arg1 error:(*id)arg2 ;
-(int)authVersionFromCertificateChainInfo:(id)arg0 ;
-(int)validateCertificate:(id)arg0 realtime:(BOOL)arg1 error:(*id)arg2 ;
-(int)validateCertificateChain:(id)arg0 realtime:(BOOL)arg1 error:(*id)arg2 ;
-(int)validateCertificateChain:(id)arg0 type:(int)arg1 realtime:(BOOL)arg2 error:(*id)arg3 ;
-(void)requestMetadataForCertificate:(id)arg0 requestedLocale:(id)arg1 requestInfo:(id)arg2 completionHandler:(id)arg3 ;
-(void)validateCertificate:(id)arg0 realtime:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif