// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AALOGINORCREATEDELEGATESREQUEST_H
#define AALOGINORCREATEDELEGATESREQUEST_H

@class ACAccount, NSDictionary;


#import "AARequest.h"
#import "AASigningSession.h"

@interface AALoginOrCreateDelegatesRequest : AARequest {
    ACAccount *_account;
    NSDictionary *_parameters;
    AASigningSession *_signingSession;
}




+(Class)responseClass;
-(id)initWithAccount:(id)arg0 parameters:(id)arg1 signingSession:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif