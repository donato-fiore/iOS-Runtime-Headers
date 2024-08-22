// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENTESTRESULTCERTIFICATEREQUEST_H
#define ENTESTRESULTCERTIFICATEREQUEST_H

@class NSData, NSString;


#import "ENTestResultNetworkRequest.h"

@interface ENTestResultCertificateRequest : ENTestResultNetworkRequest

@property (readonly, copy, nonatomic) NSData *HMAC; // ivar: _HMAC
@property (readonly, copy, nonatomic) NSString *certificate; // ivar: _certificate
@property (readonly, copy, nonatomic) NSData *symmetricKey; // ivar: _symmetricKey
@property (readonly, copy, nonatomic) NSString *token; // ivar: _token


+(id)certificateRequestWithToken:(id)arg0 temporaryExposureKeys:(id)arg1 APIKey:(id)arg2 requestURL:(id)arg3 URLSession:(id)arg4 queue:(id)arg5 error:(*id)arg6 ;
+(id)deriveHMACForTemporaryExposureKeys:(id)arg0 symmetricKey:(id)arg1 ;
-(id)bodyJSON;
-(id)handleResponse:(id)arg0 body:(id)arg1 ;


@end


#endif