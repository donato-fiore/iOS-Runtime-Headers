// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPASSWORDPROMPTOPERATION_H
#define WFPASSWORDPROMPTOPERATION_H

@class NSString;
@protocol WFCredentialsProvider, WFCredentialsProviderContext;


#import "WFUserPromptOperation.h"

@interface WFPasswordPromptOperation : WFUserPromptOperation <WFCredentialsProvider>



@property (readonly, nonatomic) *__SecIdentity TLSIdentity; // ivar: TLSIdentity
@property (retain, nonatomic) NSObject<WFCredentialsProviderContext> *credentialsProviderContext; // ivar: _credentialsProviderContext
@property (copy, nonatomic) NSString *password; // ivar: password
@property (readonly, copy, nonatomic) NSString *username; // ivar: username
@property (readonly, nonatomic) BOOL wantsModalPresentation;


+(id)passwordPromptOperationWithCredentialsContext:(id)arg0 ;


@end


#endif