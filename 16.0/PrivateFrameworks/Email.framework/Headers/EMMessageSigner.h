// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGESIGNER_H
#define EMMESSAGESIGNER_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "EMCertificateTrustInformation.h"

@interface EMMessageSigner : NSObject <NSSecureCoding>



@property (retain, nonatomic) EMCertificateTrustInformation *encryptionCertificateTrustInfo; // ivar: _encryptionCertificateTrustInfo
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasSeparateSigningAndEncryptionCertificates;
@property (retain, nonatomic) EMCertificateTrustInformation *signingCertificateTrustInfo; // ivar: _signingCertificateTrustInfo


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSigningTrust:(id)arg0 encryptionTrust:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluateTrustsWithOptions:(NSUInteger)arg0 ;
-(void)reevaluateTrustWithNetworkAccessAllowed;


@end


#endif