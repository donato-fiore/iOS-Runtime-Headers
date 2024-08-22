// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSOBSERVABLE_H
#define SSOBSERVABLE_H

@class NSError, NSString, NSMutableArray, NSConditionLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSObservable : NSObject

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (retain, nonatomic) NSError *failureError; // ivar: _failureError
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (retain, nonatomic) NSMutableArray *queuedResults; // ivar: _queuedResults
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendMessageQueue; // ivar: _sendMessageQueue
@property (retain, nonatomic) NSConditionLock *stateLock; // ivar: _stateLock


+(BOOL)_errorIsCanceledError:(id)arg0 ;
+(id)observableWithObserver:(id)arg0 ;
+(id)observableWithObservers:(id)arg0 ;
-(BOOL)cancel;
-(BOOL)sendCompletion;
-(BOOL)sendFailure:(id)arg0 ;
-(BOOL)sendResult:(id)arg0 ;
-(id)init;
-(void)subscribe:(id)arg0 ;


@end


#endif