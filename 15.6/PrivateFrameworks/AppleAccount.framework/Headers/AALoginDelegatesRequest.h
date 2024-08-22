// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AALOGINDELEGATESREQUEST_H
#define AALOGINDELEGATESREQUEST_H

@class NSDictionary, ACAccount;


#import "AARequest.h"

@interface AALoginDelegatesRequest : AARequest {
    NSDictionary *_loginParameters;
    ACAccount *_account;
}




+(Class)responseClass;
-(id)initWithAccount:(id)arg0 parameters:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif