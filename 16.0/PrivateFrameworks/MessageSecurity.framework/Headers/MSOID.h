// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSOID_H
#define MSOID_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface MSOID : NSObject

@property (readonly) heim_oid Asn1OID; // ivar: _Asn1OID
@property (readonly) NSData *OIDBytes; // ivar: _OIDBytes
@property (readonly) NSString *OIDString; // ivar: _OIDString
@property (readonly) *ccdigest_info ccdigest;
@property (readonly) *__CFString secKeyAlgorithm;


+(id)ECSignatureOIDWithDigestAlgorithm:(id)arg0 error:(*id)arg1 ;
+(id)OIDWithAsn1OID:(struct heim_oid *)arg0 error:(*id)arg1 ;
+(id)OIDWithData:(id)arg0 ;
+(id)OIDWithData:(id)arg0 error:(*id)arg1 ;
+(id)OIDWithString:(id)arg0 ;
+(id)OIDWithString:(id)arg0 error:(*id)arg1 ;
+(id)RSASignatureOIDWithDigestAlgorithm:(id)arg0 error:(*id)arg1 ;
+(id)digestOIDWithSignatureAlgorithm:(id)arg0 error:(*id)arg1 ;
+(id)signatureAlgorithmOIDWithSecKeyAlgorithm:(struct __CFString *)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(BOOL)setAsn1OidFromOIDString:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)initDigestOIDWithSignatureAlgorithm:(id)arg0 error:(*id)arg1 ;
-(id)initECSignatureOIDWithDigestAlgorithm:(id)arg0 error:(*id)arg1 ;
-(id)initRSASignatureOIDWithDigestAlgorithm:(id)arg0 error:(*id)arg1 ;
-(id)initSignatureOIDWithSecKeyAlgorithm:(struct __CFString *)arg0 error:(*id)arg1 ;
-(id)initWithAsn1OID:(struct heim_oid *)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithString:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif