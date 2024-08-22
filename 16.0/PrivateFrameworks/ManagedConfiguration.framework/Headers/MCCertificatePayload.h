// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCCERTIFICATEPAYLOAD_H
#define MCCERTIFICATEPAYLOAD_H

@class NSNumber, NSString, NSData, NSDate;


#import "MCPayload.h"

@interface MCCertificatePayload : MCPayload {
    NSNumber *_isIdentity;
    NSNumber *_isRoot;
    NSNumber *_expiryInterval;
    NSString *_certSubject;
    NSString *_certIssuer;
}


@property (readonly, nonatomic) NSString *SMIMEEmailAddress;
@property (retain, nonatomic) NSData *certificatePersistentID; // ivar: _certificatePersistentID
@property (readonly, retain, nonatomic) NSDate *expiry;
@property (copy, nonatomic) NSString *installedOnDeviceID; // ivar: _installedOnDeviceID
@property (readonly, nonatomic) BOOL isFullyTrustedRootCert;
@property (readonly, nonatomic) BOOL isIdentity;
@property (readonly, nonatomic) BOOL isMDMClientIdentity;
@property (readonly, nonatomic) BOOL isRoot;
@property (readonly, nonatomic) BOOL isSigned;


-(id)certificateSubject;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)issuer;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)title;
-(id)verboseDescription;
-(struct __SecCertificate *)copyCertificate;
-(struct __SecIdentity *)copyIdentityFromKeychain;


@end


#endif