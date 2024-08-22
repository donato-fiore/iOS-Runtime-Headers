// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESSAGECHANNELREQUESTINFO_H
#define COMESSAGECHANNELREQUESTINFO_H


#import <Foundation/Foundation.h>


@interface COMessageChannelRequestInfo : NSObject

@property (nonatomic) NSUInteger broadcastExpectedRecipients; // ivar: _broadcastExpectedRecipients
@property (nonatomic) NSUInteger receivedResponses; // ivar: _receivedResponses
@property (copy, nonatomic) id *recipientCallback; // ivar: _recipientCallback
@property (readonly, nonatomic) unsigned int requestID; // ivar: _requestID
@property (readonly, nonatomic) NSInteger requestType; // ivar: _requestType
@property (copy, nonatomic) id *responseCallback; // ivar: _responseCallback


-(id)initWithRequestID:(unsigned int)arg0 type:(NSInteger)arg1 ;


@end


#endif