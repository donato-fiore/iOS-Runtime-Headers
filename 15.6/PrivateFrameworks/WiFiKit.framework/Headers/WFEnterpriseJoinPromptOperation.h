// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFENTERPRISEJOINPROMPTOPERATION_H
#define WFENTERPRISEJOINPROMPTOPERATION_H

@class NSString;
@protocol WFCredentialsProvider;


#import "WFUserPromptOperation.h"

@interface WFEnterpriseJoinPromptOperation : WFUserPromptOperation <WFCredentialsProvider>



@property (readonly, nonatomic) *__SecIdentity TLSIdentity; // ivar: TLSIdentity
@property (readonly, copy, nonatomic) NSString *password; // ivar: password
@property (readonly, copy, nonatomic) NSString *username; // ivar: username
@property (readonly, nonatomic) BOOL wantsModalPresentation;


+(id)enterpriseJoinPromptOperationWithDeviceCapability:(NSInteger)arg0 ;


@end


#endif