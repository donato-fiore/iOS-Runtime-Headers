// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BROPERATION_H
#define BROPERATION_H

@class NSOperation, NSString;
@protocol BROperationClient, OS_dispatch_queue, BRCancellable;



@interface BROperation : NSOperation <BROperationClient>

 {
    unsigned char _uuid;
    id *_executionTransation;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _queue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL nonDiscretionary; // ivar: _nonDiscretionary
@property (retain, nonatomic) NSObject<BRCancellable> *remoteOperation; // ivar: _remoteOperation
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitForRemoteToBeCancelled; // ivar: _waitForRemoteToBeCancelled


-(BOOL)_finishIfCancelled;
-(BOOL)finishIfCancelled;
-(id)init;
-(id)remoteObject;
-(void)cancel;
-(void)completedWithResult:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)invalidate;
-(void)progressCallbackWithTopic:(id)arg0 userInfo:(id)arg1 ;
-(void)start;


@end


#endif