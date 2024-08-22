// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEHOTSPOTEAPSETTINGS_H
#define NEHOTSPOTEAPSETTINGS_H

@class NSArray, NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NEHotspotEAPSettings : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSArray *clientTrustChainReference; // ivar: _clientTrustChainReference
@property (copy) NSData *identityReference; // ivar: _identityReference
@property (copy) NSString *outerIdentity; // ivar: _outerIdentity
@property (copy) NSString *password; // ivar: _password
@property NSInteger preferredTLSVersion; // ivar: _preferredTLSVersion
@property (copy) NSArray *supportedEAPTypes; // ivar: _supportedEAPTypes
@property (getter=isTLSClientCertificateRequired) BOOL tlsClientCertificateRequired; // ivar: _tlsClientCertificateRequired
@property (copy) NSArray *trustedServerCertificateReferences; // ivar: _trustedServerCertificateReferences
@property (copy) NSArray *trustedServerNames; // ivar: _trustedServerNames
@property NSInteger ttlsInnerAuthenticationType; // ivar: _ttlsInnerAuthenticationType
@property (copy) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(BOOL)setIdentity:(struct __SecIdentity *)arg0 ;
-(BOOL)setTrustedServerCertificates:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif