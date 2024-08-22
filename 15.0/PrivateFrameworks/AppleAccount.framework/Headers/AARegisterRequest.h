// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAREGISTERREQUEST_H
#define AAREGISTERREQUEST_H

@class NSMutableDictionary;


#import "AAAuthenticateRequest.h"

@interface AARegisterRequest : AAAuthenticateRequest {
    NSMutableDictionary *_additionalCookieHeaders;
}




+(Class)responseClass;
-(id)initWithURLString:(id)arg0 username:(id)arg1 password:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;
-(void)addCookieHeaders:(id)arg0 ;


@end


#endif