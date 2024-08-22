// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENTESTRESULTUPLOADREQUEST_H
#define ENTESTRESULTUPLOADREQUEST_H

@class NSString, NSData, NSArray, NSNumber;


#import "ENTestResultNetworkRequest.h"

@interface ENTestResultUploadRequest : ENTestResultNetworkRequest {
    NSString *_certificate;
    NSString *_healthAuthorityID;
    NSString *_requestRevisionToken;
    NSData *_symmetricKey;
    NSArray *_temporaryExposureKeys;
    NSNumber *_symptomOnsetInterval;
    BOOL _userDidTravel;
    NSNumber *_isUserVaccinated;
}


@property (readonly, copy, nonatomic) NSNumber *insertedExposures; // ivar: _insertedExposures
@property (readonly, copy, nonatomic) NSString *responseRevisionToken; // ivar: _responseRevisionToken


+(id)uploadRequestWithCertificate:(id)arg0 healthAuthorityID:(id)arg1 revisionToken:(id)arg2 symmetricKey:(id)arg3 temporaryExposureKeys:(id)arg4 userMetadata:(id)arg5 requestURL:(id)arg6 URLSession:(id)arg7 queue:(id)arg8 error:(*id)arg9 ;
-(id)bodyJSON;
-(id)handleResponse:(id)arg0 body:(id)arg1 ;


@end


#endif