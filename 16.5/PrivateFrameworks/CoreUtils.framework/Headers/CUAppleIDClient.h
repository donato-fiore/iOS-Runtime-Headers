// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUAPPLEIDCLIENT_H
#define CUAPPLEIDCLIENT_H

@class NSData, NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "CUAppleIDClient.h"

@interface CUAppleIDClient : NSObject {
    *__SecCertificate _myCertificate;
    *__SecIdentity _myIdentity;
    *__SecKey _mySecretKey;
    NSData *_myValidationData;
    *__SecCertificate _peerCertificate;
    *__SecKey _peerPublicKey;
    BOOL _peerSignatureVerified;
    NSDictionary *_peerValidationDict;
    BOOL _peerValidated;
    int _securityLevel;
}


@property (copy, nonatomic) NSString *myAppleID; // ivar: _myAppleID
@property (copy, nonatomic) NSData *myCertificateData; // ivar: _myCertificateData
@property (retain, nonatomic) CUAppleIDClient *myInfoClient; // ivar: _myInfoClient
@property (copy, nonatomic) NSData *mySecretKeyData; // ivar: _mySecretKeyData
@property (copy, nonatomic) NSString *mySecretKeyType; // ivar: _mySecretKeyType
@property (copy, nonatomic) NSString *peerAppleID; // ivar: _peerAppleID
@property (copy, nonatomic) NSArray *peerAppleIDs; // ivar: _peerAppleIDs
@property (copy, nonatomic) NSData *peerCertificateData; // ivar: _peerCertificateData
@property (copy, nonatomic) NSData *peerValidationData; // ivar: _peerValidationData
@property (readonly, nonatomic) int securityLevel;


-(BOOL)_validatePeerHashes:(id)arg0 ;
-(BOOL)validatePeerWithFlags:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)verifyBytes:(*void)arg0 verifyLength:(NSUInteger)arg1 signatureBytes:(*void)arg2 signatureLength:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)verifyData:(id)arg0 signature:(id)arg1 error:(*id)arg2 ;
-(id)copyMyAppleIDAndReturnError:(*id)arg0 ;
-(id)copyMyCertificateDataAndReturnError:(*id)arg0 ;
-(id)copyMyValidationDataAndReturnError:(*id)arg0 ;
-(id)signBytes:(*void)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)signData:(id)arg0 error:(*id)arg1 ;
-(struct __SecCertificate *)_getMyCertificateAndReturnError:(*id)arg0 ;
-(struct __SecCertificate *)_getPeerCertificateAndReturnError:(*id)arg0 ;
-(struct __SecIdentity *)_getMyIdentityAndReturnError:(*id)arg0 ;
-(struct __SecKey *)_getMySecretKeyAndReturnError:(*id)arg0 ;
-(struct __SecKey *)_getPeerPublicKeyAndReturnError:(*id)arg0 ;
-(void)dealloc;


@end


#endif