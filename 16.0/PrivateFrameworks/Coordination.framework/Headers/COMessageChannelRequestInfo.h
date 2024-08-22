// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMESSAGECHANNELREQUESTINFO_H
#define COMESSAGECHANNELREQUESTINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "COMessageChannelRequest.h"

@interface COMessageChannelRequestInfo : NSObject

@property (copy, nonatomic) NSString *destinationInfo; // ivar: _destinationInfo
@property (nonatomic) NSUInteger expectedRecipients; // ivar: _expectedRecipients
@property (nonatomic) NSUInteger messageSize; // ivar: _messageSize
@property (nonatomic) NSUInteger receivedResponses; // ivar: _receivedResponses
@property (copy, nonatomic) id *recipientCallback; // ivar: _recipientCallback
@property (retain, nonatomic) COMessageChannelRequest *request; // ivar: _request
@property (readonly, nonatomic) unsigned int requestID; // ivar: _requestID
@property (readonly, nonatomic) NSInteger requestType; // ivar: _requestType
@property (copy, nonatomic) id *responseCallback; // ivar: _responseCallback


-(id)initWithRequestID:(unsigned int)arg0 type:(NSInteger)arg1 request:(id)arg2 ;


@end


#endif