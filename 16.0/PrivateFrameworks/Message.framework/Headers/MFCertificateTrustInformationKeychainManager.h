// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCERTIFICATETRUSTINFORMATIONKEYCHAINMANAGER_H
#define MFCERTIFICATETRUSTINFORMATIONKEYCHAINMANAGER_H

@class EMCertificateTrustInformation, CertUITrustManager, NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MFCertificateTrustInformationKeychainManager : NSObject <EFLoggable>

 {
    EMCertificateTrustInformation *_trustInformation;
    CertUITrustManager *_keychainManager;
}


@property (readonly, nonatomic) int action;
@property (readonly, copy, nonatomic) NSString *addressForSaving; // ivar: _addressForSaving
@property (readonly, nonatomic) BOOL canSaveCertificateToKeychain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasTrustException;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger keychainStatus;
@property (readonly) Class superclass;


+(id)log;
-(id)initWithTrustInformation:(id)arg0 ;
-(void)addTrustException;
-(void)removeCertificateFromKeychain;
-(void)removeTrustException;
-(void)saveCertificateToKeychain;


@end


#endif