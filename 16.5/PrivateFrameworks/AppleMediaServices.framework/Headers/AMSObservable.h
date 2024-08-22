// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSOBSERVABLE_H
#define AMSOBSERVABLE_H

@class NSError, NSString, NSMutableArray, NSConditionLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSObservable : NSObject

@property (readonly, nonatomic) NSUInteger behavior; // ivar: _behavior
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (retain, nonatomic) NSError *failureError; // ivar: _failureError
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (retain, nonatomic) NSMutableArray *queuedResults; // ivar: _queuedResults
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendMessageQueue; // ivar: _sendMessageQueue
@property (retain, nonatomic) NSConditionLock *stateLock; // ivar: _stateLock


-(BOOL)cancel;
-(BOOL)sendCompletion;
-(BOOL)sendFailure:(id)arg0 ;
-(BOOL)sendResult:(id)arg0 ;
-(id)init;
-(id)initWithNotification:(id)arg0 object:(id)arg1 ;
-(id)initWithObject:(id)arg0 keyPath:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithObserver:(id)arg0 ;
-(id)initWithObserver:(id)arg0 behavior:(NSUInteger)arg1 ;
-(id)initWithObservers:(id)arg0 ;
-(id)initWithObservers:(id)arg0 behavior:(NSUInteger)arg1 ;
-(id)subscribeWithResultBlock:(id)arg0 ;
-(void)subscribe:(id)arg0 ;
-(void)unsubscribe:(id)arg0 ;
-(void)unsubscribeAll;


@end


#endif