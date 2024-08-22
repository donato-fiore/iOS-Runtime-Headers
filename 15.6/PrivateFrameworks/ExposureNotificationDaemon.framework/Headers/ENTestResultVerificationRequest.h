// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENTESTRESULTVERIFICATIONREQUEST_H
#define ENTESTRESULTVERIFICATIONREQUEST_H

@class NSSet, NSDictionary, NSString;


#import "ENTestResultNetworkRequest.h"

@interface ENTestResultVerificationRequest : ENTestResultNetworkRequest

@property (readonly, copy, nonatomic) NSSet *acceptedTestTypes; // ivar: _acceptedTestTypes
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, copy, nonatomic) NSString *token; // ivar: _token
@property (readonly, copy, nonatomic) NSString *verificationCode; // ivar: _verificationCode


+(id)_metadataFromVerificationResponseDictionary:(id)arg0 error:(*id)arg1 ;
+(id)verificationRequestWithCode:(id)arg0 acceptedReportTypes:(id)arg1 APIKey:(id)arg2 nonce:(id)arg3 requestURL:(id)arg4 URLSession:(id)arg5 queue:(id)arg6 error:(*id)arg7 ;
-(id)_testVerificationErrorForErrorCodeString:(id)arg0 ;
-(id)bodyJSON;
-(id)errorForUnsuccessfulResponse:(id)arg0 body:(id)arg1 ;
-(id)handleResponse:(id)arg0 body:(id)arg1 ;


@end


#endif