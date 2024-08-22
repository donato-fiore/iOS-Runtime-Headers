// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESSAGINGQUEUEDINCOMINGREQUEST_H
#define COMESSAGINGQUEUEDINCOMINGREQUEST_H


#import <Foundation/Foundation.h>

#import "COMessagingRequest.h"

@interface COMessagingQueuedIncomingRequest : NSObject

@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (readonly, nonatomic) NSUInteger enqueueTimestamp; // ivar: _enqueueTimestamp
@property (readonly, nonatomic) COMessagingRequest *request; // ivar: _request


-(NSInteger)remainingTimeUsingCurrentTime:(NSUInteger)arg0 ;
-(id)initWithRequest:(id)arg0 callback:(id)arg1 ;
-(id)senderNode;


@end


#endif