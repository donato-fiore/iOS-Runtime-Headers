// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFAACERTIFICATEMANAGER_H
#define MFAACERTIFICATEMANAGER_H

@class NSUserDefaults, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface MFAACertificateManager : NSObject

@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)anchorCertificatesForTypes:(int)arg0 ;
+(id)sharedManager;
-(id)_init;
-(id)init;
-(int)_getCachedCertStatus:(id)arg0 issuerSeq:(id)arg1 ppid:(id)arg2 ;
-(int)_validateBAACertificateChain:(id)arg0 error:(*id)arg1 ;
-(int)_validateCertificateChain:(id)arg0 realtime:(BOOL)arg1 error:(*id)arg2 ;
-(int)_validateCertificateWithServer:(id)arg0 issuerSeq:(id)arg1 ppid:(id)arg2 error:(*id)arg3 ;
-(int)_validateX509CertificateChain:(id)arg0 error:(*id)arg1 ;
-(int)validateCertificate:(id)arg0 realtime:(BOOL)arg1 error:(*id)arg2 ;
-(int)validateCertificateChain:(id)arg0 realtime:(BOOL)arg1 error:(*id)arg2 ;
-(int)validateCertificateChain:(id)arg0 type:(int)arg1 realtime:(BOOL)arg2 error:(*id)arg3 ;
-(void)requestMetadataForCertificate:(id)arg0 requestedLocale:(id)arg1 requestInfo:(id)arg2 completionHandler:(id)arg3 ;
-(void)validateCertificate:(id)arg0 realtime:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif