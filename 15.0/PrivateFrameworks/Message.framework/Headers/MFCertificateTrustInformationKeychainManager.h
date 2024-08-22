// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCERTIFICATETRUSTINFORMATIONKEYCHAINMANAGER_H
#define MFCERTIFICATETRUSTINFORMATIONKEYCHAINMANAGER_H

@class NSString, CertUITrustManager, EMCertificateTrustInformation;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MFCertificateTrustInformationKeychainManager : NSObject <EFLoggable>



@property (readonly, nonatomic) int action;
@property (readonly, copy, nonatomic) NSString *addressForSaving; // ivar: _addressForSaving
@property (readonly, nonatomic) BOOL canSaveCertificateToKeychain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasTrustException;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CertUITrustManager *keychainManager; // ivar: _keychainManager
@property (readonly, nonatomic) NSUInteger keychainStatus;
@property (readonly) Class superclass;
@property (readonly, nonatomic) EMCertificateTrustInformation *trustInformation; // ivar: _trustInformation


+(id)log;
-(id)initWithTrustInformation:(id)arg0 ;
-(void)addTrustException;
-(void)removeCertificateFromKeychain;
-(void)removeTrustException;
-(void)saveCertificateToKeychain;


@end


#endif