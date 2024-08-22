// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFDAMESSAGESTOREFETCHREQUEST_H
#define _MFDAMESSAGESTOREFETCHREQUEST_H

@class DAMailboxFetchMessageRequest, MFMessage, MFMimePart;
@protocol MFDAMailAccountRequest, MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory;


#import "MFDAMessageStore.h"

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest>

 {
    id<MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> *consumer;
    MFDAMessageStore *store;
    MFMessage *message;
    MFMimePart *part;
    int format;
    BOOL partial;
}


@property (readonly, nonatomic) BOOL isUserRequested;
@property (readonly, nonatomic) BOOL shouldSend;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)generationNumber;
-(NSUInteger)hash;
-(id)deferredOperation;


@end


#endif