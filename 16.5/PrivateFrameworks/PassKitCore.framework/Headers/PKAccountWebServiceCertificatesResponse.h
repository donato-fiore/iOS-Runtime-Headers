// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICECERTIFICATESRESPONSE_H
#define PKACCOUNTWEBSERVICECERTIFICATESRESPONSE_H

@class NSArray, NSString;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceCertificatesResponse : PKAccountWebServiceResponse

@property (nonatomic) BOOL devSigned; // ivar: _devSigned
@property (readonly, copy, nonatomic) NSArray *encryptionCertificates; // ivar: _encryptionCertificates
@property (readonly, copy, nonatomic) NSString *encryptionVersion; // ivar: _encryptionVersion


-(id)initWithData:(id)arg0 ;


@end


#endif