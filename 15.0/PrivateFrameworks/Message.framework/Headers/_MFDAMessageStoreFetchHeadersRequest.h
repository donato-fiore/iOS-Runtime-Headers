// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFDAMESSAGESTOREFETCHHEADERSREQUEST_H
#define _MFDAMESSAGESTOREFETCHHEADERSREQUEST_H

@class DAMailboxFetchMessageRequest, MFMessage;
@protocol MFDAMailAccountRequest, MFRequestQueueResponseConsumer;


#import "MFDAMessageStore.h"

@interface _MFDAMessageStoreFetchHeadersRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest>

 {
    id<MFRequestQueueResponseConsumer> *consumer;
    MFDAMessageStore *store;
    MFMessage *message;
}


@property (readonly, nonatomic) BOOL isUserRequested;
@property (readonly, nonatomic) BOOL shouldSend;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)generationNumber;
-(NSUInteger)hash;
-(id)deferredOperation;


@end


#endif