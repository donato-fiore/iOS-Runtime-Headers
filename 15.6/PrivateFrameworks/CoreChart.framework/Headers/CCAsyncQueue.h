// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCASYNCQUEUE_H
#define CCASYNCQUEUE_H

@class NSMutableArray;
@protocol CCAsyncQueueDelegate;

#import <Foundation/Foundation.h>

#import "CCVegaWorkerClient.h"

@interface CCAsyncQueue : NSObject {
    CCVegaWorkerClient *_workerClient;
    NSUInteger _nextActionID;
    NSMutableArray *_queue;
    BOOL _isProcessing;
}


@property (weak, nonatomic) NSObject<CCAsyncQueueDelegate> *delegate; // ivar: _delegate


-(NSUInteger)enqueueOperation:(id)arg0 ;
-(NSUInteger)enqueueOperationWithBlock:(id)arg0 ;
-(id)initWithWorkerClient:(id)arg0 ;
-(void)keepAliveUntilCurrentOperationIsComplete;
-(void)processOperations;
-(void)startProcessOperations;
-(void)waitForOperation:(NSUInteger)arg0 ;
-(void)waitForPendingOperations;


@end


#endif