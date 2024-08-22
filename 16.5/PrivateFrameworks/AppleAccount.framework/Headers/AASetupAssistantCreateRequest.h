// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AASETUPASSISTANTCREATEREQUEST_H
#define AASETUPASSISTANTCREATEREQUEST_H

@class NSDictionary, ACAccount;


#import "AARequest.h"
#import "AASigningSession.h"

@interface AASetupAssistantCreateRequest : AARequest {
    NSDictionary *appleIDParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}




+(Class)responseClass;
-(id)bodyDictionary;
-(id)initWithAccount:(id)arg0 withAppleIDParameters:(id)arg1 signingSession:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif