// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMESSAGESIGNER_H
#define MFMESSAGESIGNER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MFCertificateTrustInfo.h"
#import "MFError.h"

@interface MFMessageSigner : NSObject {
    int _status;
}


@property (readonly, nonatomic) MFCertificateTrustInfo *encryptionCertificateTrustInfo; // ivar: _encryptionCertificateTrustInfo
@property (readonly, nonatomic) MFError *error;
@property (readonly, nonatomic) NSString *sender; // ivar: _sender
@property (readonly, nonatomic) MFCertificateTrustInfo *signingCertificateTrustInfo; // ivar: _signingCertificateTrustInfo


-(id)initWithSender:(id)arg0 signingTrust:(struct __SecTrust *)arg1 encryptionTrust:(struct __SecTrust *)arg2 verification:(int)arg3 ;


@end


#endif