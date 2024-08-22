// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMESSAGECHANNELCLIENTINTERFACEMEDIATOR_H
#define COMESSAGECHANNELCLIENTINTERFACEMEDIATOR_H

@class NSString;
@protocol COMessageChannelClientInterface;

#import <Foundation/Foundation.h>

#import "COMessageChannel.h"

@interface COMessageChannelClientInterfaceMediator : NSObject <COMessageChannelClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) COMessageChannel *messageChannel; // ivar: _messageChannel
@property (readonly) Class superclass;


-(id)initWithMessageChannel:(id)arg0 ;
-(void)failedToSendRequestWithID:(unsigned int)arg0 withError:(id)arg1 ;
-(void)receivedRecipientListForRequestID:(unsigned int)arg0 recipients:(id)arg1 ;
-(void)receivedRequestWithPayload:(id)arg0 payloadType:(id)arg1 requestID:(unsigned int)arg2 fromMember:(id)arg3 withCallback:(id)arg4 ;
-(void)receivedResponseForRequestID:(unsigned int)arg0 responsePayload:(id)arg1 responseType:(id)arg2 responseError:(id)arg3 fromMember:(id)arg4 ;


@end


#endif