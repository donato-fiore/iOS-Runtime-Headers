// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCERTIFICATETRUSTINFO_H
#define MFCERTIFICATETRUSTINFO_H

@class ECSecureMIMETrustEvaluation, NSString;

#import <Foundation/Foundation.h>


@interface MFCertificateTrustInfo : NSObject {
    *__SecTrust _unevaluatedTrust;
    ECSecureMIMETrustEvaluation *_trustEvaluation;
    NSString *_uncommentedSender;
}


@property (readonly, nonatomic) NSUInteger certificateType; // ivar: _certificateType
@property (readonly, copy, nonatomic) NSString *sender; // ivar: _sender
@property (readonly, nonatomic) *__SecTrust trust;
@property (readonly, nonatomic) ECSecureMIMETrustEvaluation *trustEvaluation;


-(id)initWithCertificateType:(NSUInteger)arg0 trust:(struct __SecTrust *)arg1 sender:(id)arg2 ;
-(void)dealloc;


@end


#endif