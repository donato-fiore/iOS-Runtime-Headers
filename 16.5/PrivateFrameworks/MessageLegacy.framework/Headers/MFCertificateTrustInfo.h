// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCERTIFICATETRUSTINFO_H
#define MFCERTIFICATETRUSTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MFCertificateTrustInfo : NSObject {
    NSString *_uncommentedSender;
}


@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) BOOL canSaveCertificateToKeychain;
@property (readonly, nonatomic) *__SecCertificate certificate;
@property (readonly, nonatomic) NSUInteger certificateType; // ivar: _certificateType
@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) BOOL hasTrustException;
@property (readonly, nonatomic) NSUInteger keychainStatus;
@property (readonly, copy, nonatomic) NSString *sender; // ivar: _sender
@property (readonly, nonatomic) *__SecTrust trust; // ivar: _trust


-(id)initWithCertificateType:(NSUInteger)arg0 trust:(struct __SecTrust *)arg1 sender:(id)arg2 ;
-(void)addTrustException;
-(void)dealloc;
-(void)removeCertificateFromKeychain;
-(void)removeTrustException;
-(void)saveCertificateToKeychain;


@end


#endif