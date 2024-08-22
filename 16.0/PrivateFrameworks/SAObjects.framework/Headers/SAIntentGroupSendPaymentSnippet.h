// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPSENDPAYMENTSNIPPET_H
#define SAINTENTGROUPSENDPAYMENTSNIPPET_H



#import "SAUISnippet.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupSendPaymentSnippet : SAUISnippet

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;


+(id)sendPaymentSnippet;
+(id)sendPaymentSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif