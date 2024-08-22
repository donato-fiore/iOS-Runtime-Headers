// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMESSAGEQUEUE_H
#define FTMESSAGEQUEUE_H

@class CUTDeferredTaskQueue, NSMutableArray, NSArray, IDSBaseMessage;
@protocol FTMessageQueueDelegate;

#import <Foundation/Foundation.h>


@interface FTMessageQueue : NSObject {
    CUTDeferredTaskQueue *_timeoutTask;
}


@property (retain) NSMutableArray *_addDates; // ivar: _addDates
@property (retain) NSMutableArray *_queue; // ivar: _queue
@property (readonly) NSInteger count;
@property (weak) NSObject<FTMessageQueueDelegate> *delegate; // ivar: _delegate
@property (readonly) NSArray *messages;
@property (readonly) IDSBaseMessage *topMessage;


-(BOOL)addMessage:(id)arg0 ;
-(BOOL)addMessageAtHeadOfQueue:(id)arg0 ;
-(BOOL)removeMessage:(id)arg0 ;
-(id)dequeueTopMessage;
-(id)init;
-(id)messageForUniqueID:(NSUInteger)arg0 ;
-(void)_clearTimeout;
-(void)_setTimeout;
-(void)_timeoutHit;
-(void)removeAllMessages;


@end


#endif