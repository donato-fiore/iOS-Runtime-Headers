// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAMESSAGINGCONTEXT_H
#define AAMESSAGINGCONTEXT_H

@class IDSMessageContext, NSString;

#import <Foundation/Foundation.h>

#import "AAMessagingDestination.h"

@interface AAMessagingContext : NSObject {
    IDSMessageContext *_context;
}


@property (readonly, nonatomic) BOOL expectsPeerResponse; // ivar: _expectsPeerResponse
@property (readonly, nonatomic) AAMessagingDestination *fromID; // ivar: _fromID
@property (readonly, nonatomic) NSString *incomingResponseIdentifier; // ivar: _incomingResponseIdentifier
@property (readonly, nonatomic) NSString *outgoingResponseIdentifier; // ivar: _outgoingResponseIdentifier
@property (readonly, nonatomic) NSString *senderCorrelationIdentifier; // ivar: _senderCorrelationIdentifier
@property (readonly, nonatomic) AAMessagingDestination *toID; // ivar: _toID


-(id)initWithContext:(id)arg0 ;


@end


#endif