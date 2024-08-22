// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDOBAAMANAGER_H
#define NDOBAAMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NDOBAAManager : NSObject

@property (retain, nonatomic) NSArray *clientCertArray; // ivar: _clientCertArray
@property (nonatomic) *__SecKey privateKey; // ivar: _privateKey


-(BOOL)addBAAAuthenticationHeadersToRequest:(id)arg0 withBody:(id)arg1 error:(*id)arg2 ;
-(BOOL)generateBAACertficate:(id)arg0 ;
-(id)_compressCertificates:(id)arg0 ;
-(id)_zlibCompressionForData:(id)arg0 ;
-(id)certificatesEncodeToBase64:(id)arg0 status:(*id)arg1 ;
-(id)serializeCertificateChain:(id)arg0 ;
-(id)signDataAndEncodeToBase64:(id)arg0 withPrivateKey:(struct __SecKey *)arg1 status:(*id)arg2 ;
-(void)dealloc;
-(void)writeCertsToDevice:(id)arg0 ;


@end


#endif