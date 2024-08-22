// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NGMMESSAGEFORMATTER_H
#define NGMMESSAGEFORMATTER_H


#import <Foundation/Foundation.h>


@interface NGMMessageFormatter : NSObject



+(id)formatOutgoingInnerMessageWithPayload:(id)arg0 attributes:(id)arg1 destinationIdentity:(id)arg2 sendingIdentity:(id)arg3 error:(*id)arg4 ;
+(id)formatOutgoingMessageWithEncryptedPayload:(id)arg0 ephemeral:(id)arg1 signature:(id)arg2 keyValidator:(id)arg3 ;


@end


#endif