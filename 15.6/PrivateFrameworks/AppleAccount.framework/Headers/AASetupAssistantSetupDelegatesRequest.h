// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASETUPASSISTANTSETUPDELEGATESREQUEST_H
#define AASETUPASSISTANTSETUPDELEGATESREQUEST_H

@class NSDictionary, ACAccount;


#import "AARequest.h"
#import "AASigningSession.h"

@interface AASetupAssistantSetupDelegatesRequest : AARequest {
    NSDictionary *setupParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}




+(Class)responseClass;
-(id)initWithAccount:(id)arg0 withSetupParameters:(id)arg1 signingSession:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif