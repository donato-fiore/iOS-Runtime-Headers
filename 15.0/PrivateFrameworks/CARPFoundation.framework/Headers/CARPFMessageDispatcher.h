// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFMESSAGEDISPATCHER_H
#define CARPFMESSAGEDISPATCHER_H

@class NSMutableOrderedSet, NSBackgroundActivityScheduler, NSDictionary, NSString, NSSet;
@protocol CARPFLogging, CARPFMessageTransportDelegate, OS_dispatch_queue;


#import "CARPFObject.h"
#import "CARPFTimer.h"
#import "CARPFMessageTransport.h"

@interface CARPFMessageDispatcher : CARPFObject <CARPFLogging, CARPFMessageTransportDelegate>

 {
    carpf_unfair_data_lock_s _lock;
    NSMutableOrderedSet *_handlers;
    CARPFTimer *_indexWatchdog;
    NSBackgroundActivityScheduler *_indexScheduler;
    NSDictionary *_destinationHandlerIndexes;
    NSDictionary *_nameHandlerIndexes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSSet *filterClasses; // ivar: _filterClasses
@property (readonly) NSUInteger hash;
@property (readonly, getter=isIndexed) BOOL indexed; // ivar: _indexed
@property (nonatomic) BOOL shouldAutomaticallyIndex; // ivar: _shouldAutomaticallyIndex
@property (readonly) Class superclass;
@property (readonly, nonatomic) CARPFMessageTransport *transport; // ivar: _transport
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)handlersForMessage:(id)arg0 ;
-(id)init;
-(id)initWithTransport:(id)arg0 ;
-(void)dealloc;
-(void)deregisterForMessage:(id)arg0 receiver:(id)arg1 ;
-(void)deregisterReceiver:(id)arg0 ;
-(void)dispatchMessage:(id)arg0 ;
-(void)dispatchMessage:(id)arg0 target:(id)arg1 ;
-(void)index;
-(void)messageTransport:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)registerForMessage:(id)arg0 receiver:(id)arg1 messageHandler:(id)arg2 ;
-(void)registerForMessage:(id)arg0 receiver:(id)arg1 policies:(id)arg2 messageHandler:(id)arg3 ;
-(void)registerForMessage:(id)arg0 receiver:(id)arg1 policies:(id)arg2 selector:(SEL)arg3 ;
-(void)registerForMessage:(id)arg0 receiver:(id)arg1 selector:(SEL)arg2 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendMessage:(id)arg0 target:(id)arg1 ;
-(void)sendMessage:(id)arg0 target:(id)arg1 andInvokeCompletionHandler:(id)arg2 ;
-(void)sendMessage:(id)arg0 target:(id)arg1 responseQueue:(id)arg2 responseHandler:(id)arg3 ;
// -(void)sendMessage:(id)arg0 target:(id)arg1 responseQueue:(id)arg2 responseHandler:(id)arg3 completionHandler:(unk)arg4  ;


@end


#endif