// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPUNSUPPORTEDINTENTRESPONSE_H
#define SAINTENTGROUPUNSUPPORTEDINTENTRESPONSE_H



#import "SAIntentGroupIntentInvocationResponse.h"

@interface SAIntentGroupUnsupportedIntentResponse : SAIntentGroupIntentInvocationResponse



+(id)unsupportedIntentResponse;
+(id)unsupportedIntentResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif